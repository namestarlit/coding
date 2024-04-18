from typing import Annotated

from fastapi import FastAPI, Body
from pydantic import BaseModel


class Item(BaseModel):
    name: str
    description: str | None = None
    price: float
    tax: float | None = None


class User(BaseModel):
    username: str
    full_name: str | None = None


app = FastAPI()


@app.post("/items/")
async def create_item(item: Item):
    item_dict = item.dict()
    if item.tax:
        price_with_tax = item.price + item.tax
        item_dict.update({"price_with_tax": price_with_tax})
    return item_dict


@app.put("/items/{item_id}")
async def update_item(item_id: int, item: Item, q: str | None = None):
    result = {"item_id": item_id, **item.dict()}
    if q:
        result.update({"q": q})
    return result


@app.put("/products/{product_id}")
async def update_product(
    product_id: int,
    item: Item,
    user: User,
    importance: Annotated[int, Body(gt=0)],
    q: str | None = None,
):
    results = {
        "product_id": product_id,
        "product": item,
        "user": user,
        "importance": importance,
    }
    return results


@app.put("/goods/{good_id}")
async def update_good(good_id: int, item: Annotated[Item, Body(embed=True)]):
    results = {"good_id": good_id, "item": item}
    return results
