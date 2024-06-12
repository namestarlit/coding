from sqlmodel import Field, Session, SQLModel, create_engine


class Hero(SQLModel, table=True):
    id: int | None = Field(default=None, primary_key=True)
    name: str
    secret_name: str
    age: int | None = None


# create engine 
sqlite_db = "database.db"
sqlite_url = f"sqlite:///{sqlite_db}"

engine = create_engine(sqlite_url, echo=True)

def create_db_and_tables():
    SQLModel.metadata.create_all(engine)

def create_session():
    session = Session(engine)
    return session 

def main():
    create_db_and_tables()
    
    hero_1 = Hero(name="Deadpond", secret_name="Dive Wilson")
    hero_2 = Hero(name="Spider-Boy", secret_name="Pedro Paraqueador")
    hero_3 = Hero(name="Rusty-Man", secret_name="Tommy Sharp", age=48)

    session = create_session()

    session.add(hero_1)
    session.add(hero_2)
    session.add(hero_3)

    session.commit()

    session.close()


if __name__ == "__main__":
    main()
