-- Database: aula_06.

-- DROP DATABASE IF EXISTS "aula_06.";

CREATE DATABASE "aula_06."
    
	/*WITH
    OWNER = postgres
    ENCODING = 'UTF8'
    LC_COLLATE = 'en_US.UTF-8'
    LC_CTYPE = 'en_US.UTF-8'
    LOCALE_PROVIDER = 'libc'
    TABLESPACE = pg_default
    CONNECTION LIMIT = -1
    IS_TEMPLATE = False;
	*/

	CREATE TABLE teste (
id_codigo	int,
salario_teste	float,
dia_teste	date,
text_teste varchar(10),
aprovado_teste	BOOLEAN
	);

	ALTER TABLE teste RENAME TO AULABD;
	ALTER TABLE aulabd RENAME aprovado_teste TO situacao_teste;

	/* Adicionando uma novas colunas*/
	ALTER TABLE aulabd ADD COLUMN RGM_aulabd numeric(5);
	ALTER TABLE aulabd ADD COLUMN novo_campo_aulabd varchar(100);

	/*Arrumando o meu erro*/
	ALTER TABLE aulabd RENAME situacao_teste TO situacao_aulabd;
	ALTER TABLE aulabd RENAME salario_teste TO salario_aulabd;
	ALTER TABLE aulabd RENAME dia_teste TO dia_aulabd;
	ALTER TABLE aulabd RENAME text_teste TO text_aulabd;


	/*Mudanças de colunas*/
	ALTER TABLE aulabd ALTER COLUMN novo_campo_aulabd SET NOT NULL;]

	/*Deletar coluna*/
	ALTER TABLE aulabd  DROP COLUMN salario_aulabd;

	/*Adicionando primary key */
	ALTER TABLE aulabd ADD CONSTRAINT pk_rgm PRIMARY KEY (rgm_aulabd);

	/*Apagar a tabelas*/
	DROP TABLE aulabd;
	