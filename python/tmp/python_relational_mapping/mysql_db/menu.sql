-- Creates a database for a seafood restaurant menu.
CREATE DATABASE IF NOT EXISTS menu;
USE menu;

DROP TABLE IF EXISTS fish;
SET @saved_cs_client	= @@character_set_client;
SET character_set_client = utf8;

CREATE TABLE fish (
	id INT(11) AUTO_INCREMENT PRIMARY KEY,
	name VARCHAR(30) NOT NULL DEFAULT '',
	price DECIMAL(5,2) NOT NULL DEFAULT 0.00
);
SET character_set_client = @saved_cs_client;

LOCK TABLES fish WRITE;
INSERT INTO fish VALUES (1,'catfish',8.50),(2,'catfish',8.50),(3,'tuna',8.00), (4,'catfish',5.00),(5,'bass',6.75),(6,'haddock',6.50),(7,'salmon',9.50),(8,'trout',6.00), (9,'tuna',7.50),(10,'yellowfin tuna',12.00),(11,'yellowfin tuna',13.00),(12,'tuna' ,7.50);
UNLOCK TABLES;
