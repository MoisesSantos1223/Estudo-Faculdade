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
	