#!/usr/bin/env python3
from sqlmodel import Field, Session, SQLModel, col, create_engine, or_, select


class Hero(SQLModel, table=True):
    id: int | None = Field(default=None, primary_key=True)
    name: str = Field(index=True)
    secret_name: str
    age: int | None = Field(default=None, index=True)


# create engine
sqlite_db = "database.db"
sqlite_url = f"sqlite:///{sqlite_db}"

engine = create_engine(sqlite_url, echo=False)


def create_db_and_tables():
    SQLModel.metadata.create_all(engine)


def create_heroes():
    hero_1 = Hero(name="Deadpond", secret_name="Dive Wilson")
    hero_2 = Hero(name="Spider-Boy", secret_name="Pedro Paraqueador")
    hero_3 = Hero(name="Rusty-Man", secret_name="Tommy Sharp", age=48)
    hero_4 = Hero(name="Tarantula", secret_name="Natalia Roman-on", age=32)
    hero_5 = Hero(name="Black Lion", secret_name="Trevor Challa", age=35)
    hero_6 = Hero(name="Dr. Weird", secret_name="Steve Weird", age=36)
    hero_7 = Hero(name="Captain North America", secret_name="Esteban Rogelios", age=93)

    with Session(engine) as session:
        session.add(hero_1)
        session.add(hero_2)
        session.add(hero_3)
        session.add(hero_4)
        session.add(hero_5)
        session.add(hero_6)
        session.add(hero_7)

        session.commit()


def select_heroes():
    with Session(engine) as session:
        statement = select(Hero).where(or_(col(Hero.age) >= 35, col(Hero.age) < 40))
        results = session.exec(statement)
        for hero in results:
            print(hero)

        query = select(Hero).where(col(Hero.name) == "Deadpond")
        res = session.exec(query).first()
        print(res)

        # select hero by Id
        hero = session.get(Hero, 1)
        print(hero)

        query = select(Hero).limit(3)
        heroes = session.exec(query).all()
        print(heroes)

        query = select(Hero).where(col(Hero.age) > 32).offset(1).limit(2)
        res = session.exec(query).all()
        print(res)


def update_heroes():
    with Session(engine) as session:
        query = select(Hero).where(col(Hero.name) == "Spider-Boy")
        hero = session.exec(query).one()
        print(hero)

        hero.age = 16
        session.add(hero)
        session.commit()
        session.refresh(hero)
        print(hero)


def delete_heroes():
    with Session(engine) as session:
        query = select(Hero).where(col(Hero.name) == "Spider-Boy")
        hero = session.exec(query).one()
        print(hero)

        session.delete(hero)
        session.commit()


def main():
    create_db_and_tables()
    create_heroes()
    select_heroes()
    update_heroes()
    delete_heroes()


if __name__ == "__main__":
    main()
