from typing import Annotated

from fastapi import FastAPI, Query


app = FastAPI()


@app.get("/items/")
async def read_items(
    q: Annotated[
        str | None, Query(min_length=3, max_length=50, pattern="^fixedquery$")
    ] = None
):
    results = {"items": [{"item_id": "foo"}, {"item_id": "bar"}]}
    if q:
        results.update({"q": q})
    return results


@app.get("/products")
async def read_products(
    q: Annotated[list[str] | None, Query(alias="product-query")] = ["foo", "bar"]
):
    query_params = {"q": q}
    return query_params


@app.get("/goods/")
async def read_goods(
    q: Annotated[
        str | None,
        Query(
            alias="good-query",
            title="Query string",
            description="Query string for the items to search in the database that have a good match",
            min_length=3,
            max_length=50,
            pattern="^fixedquery$",
            deprecated=True,
        ),
    ] = None,
):
    results = {"goods": [{"good_id": "Good"}, {"good_id": "Very Good"}]}
    if q:
        results.update({"q": q})
    return results


@app.get("/items/{item_id}")
async def read_item(
        item_id: int,
        hidden_query: Annotated[str | None, Query(include_in_schema=False)] = None,):
    if hidden_query:
        return {"item_id": item_id, "hiden_query": hidden_query}
    else:
        return {"hidden_query": "Not found"}
