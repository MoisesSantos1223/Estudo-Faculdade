-- Database: Aula07 dbEstudio

-- DROP DATABASE IF EXISTS "Aula07 dbEstudio";
/*
CREATE DATABASE "Aula07 dbEstudio"
    WITH
    OWNER = postgres
    ENCODING = 'UTF8'
    LC_COLLATE = 'Portuguese_Brazil.1252'
    LC_CTYPE = 'Portuguese_Brazil.1252'
    LOCALE_PROVIDER = 'libc'
    TABLESPACE = pg_default
    CONNECTION LIMIT = -1
    IS_TEMPLATE = False;
	*/

	--ddl-- create, alter, drop

CREATE TABLE gravadora
(
	id_gra	int,
	nome_gra	varchar(100) not null,  -- Não poderá ficar em branco
	email_gra varchar(100)
);

CREATE TABLE autor
(
	id_aut 	int,
	nome_aut	varchar(100) not null,
	tel_aut		numeric(11)
);

CREATE TABLE musicas
(

	id_music 	int,
	nome_music varchar(100) not null,
	tempo_music		time
);

CREATE TABLE gravacao
(
	id_grav 	int,
	id_music	int,
	id_aut		int,
	data_grav	date not null
);

--ALTER	- ALTERAÇÃO DE TABLEAS

ALTER TABLE GRAVADORA ADD CONSTRAINT PK_ID_GRA PRIMARY KEY (ID_GRA);
ALTER TABLE MUSICAS ADD CONSTRAINT PK_ID_MUSIC PRIMARY KEY (ID_MUSIC);
ALTER TABLE AUTOR ADD CONSTRAINT PK_ID_AUT PRIMARY KEY (ID_AUT);
ALTER TABLE GRAVACAO ADD CONSTRAINT PK_ID_GRAV PRIMARY KEY (ID_GRAV);


ALTER TABLE MUSICAS ADD COLUMN ID_GRA_INT
ALTER TABLE MUSICA ADD CONSTRAINT FK_ID_GRA FOREIGN KEY(ID_GRA) REFERENCES GRAVADORA (ID_GRA);

ALTER TABLE GRAVACAO ADD CONSTRAINT FK_ID_MUSIC FOREIGN KEY (ID_MUSIC)REFERENCES AUTOR (ID_AUT);

-- Exclusão de tabelas
drop table gravadora;
drop table musicas cascade; -- Exluir tabelas em cascata

--DML - MANIPULAÇÃO DE DADOS(INSERT, UPDATE, DELETE)
-- INSERÇÃO DE DADOS

INSERT INTO gravadora VALUES (1, 'SONY', 'sony@gmail.com'), (2,'BMG', 'bmg@gmail.com');

INSERT INTO musicas VALUES (10,'A bela','00:50'), (20,'FERA','00:01:25');

insert into autor values (100,'rick', 1192000320), (200,'renner', 1199999992);

SELECT * FROM musicas;
--Inserir os dados de gravadora na table musica utilizando update
--update - atualizar dados

UPDATE musicas SET ID_GRA = 2 WHERE	 id_music =10 ;
UPDATE MUSICAS SET ID_GRA = 1 WHERE ID_MUSIC = 20;

-----------------------------------------------------------------------------------
--insert da table gravação

insert into gravacao values (1010, 10, 200, '28-09-2026'), (1020,20,'26-10-2026');

-- CONSULTA DADOS NA TABELA
SELECT * FROM GRAVACAO; 
SELECT * FROM AUTOR;
SELECT * FROM GRAVADORA;

--DELETAR DADOS

DELETE FROM MUSICAS WHERE ID_MUSIC = 10; -- Não funcionou porque tem dados referenciados 	

	