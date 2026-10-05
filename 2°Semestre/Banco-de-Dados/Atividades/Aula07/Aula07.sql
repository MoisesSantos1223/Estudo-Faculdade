-- Database: Aula07

-- DROP DATABASE IF EXISTS "Aula07";


/*
	CREATE DATABASE "Aula07"
    WITH
    OWNER = postgres
    ENCODING = 'UTF8'
    LC_COLLATE = 'en_US.UTF-8'
    LC_CTYPE = 'en_US.UTF-8'
    LOCALE_PROVIDER = 'libc'
    TABLESPACE = pg_default
    CONNECTION LIMIT = -1
    IS_TEMPLATE = False;
	*/

	CREATE TABLE aluno (
	 rgm_aluno int,
	 nome_aluno varchar(100),
	 idade_aluno int,
	 situacao varchar(50)
	);
	ALTER TABLE aluno ADD CONSTRAINT pk_rgm_aluno PRIMARY KEY (rgm_aluno);
	/*Arrumar os meus erros da table aluno*/
	ALTER TABLE aluno
	ALTER COLUMN nome_aluno SET NOT NULL,
	ALTER COLUMN idade_aluno SET NOT NULL;

	CREATE TABLE disciplina (
	codigo_disciplina 	int NOT NULL,
	nome_disciplina 	varchar(50) NOT NULL,
	media_disciplina 	numeric(4,2) NOT NULL,
	CONSTRAINT pk_codigo_disciplina PRIMARY KEY (codigo_disciplina),
	CONSTRAINT uq_nome_disciplina UNIQUE (nome_disciplina) /* Eu não sabia como deixar só com um nome na diciplina, ent eu pedi ajuda da ia */
	
	);

	CREATE TABLE notas (
	rgm_aluno INT,
	codigo_disciplina int,
	p1 NUMERIC (4,2) NOT NULL,
	p2 NUMERIC (4,2) NOT NULL,
	media_notas NUMERIC (4,2) NOT NULL,
	faltas_notas  INT NOT NULL,
	CONSTRAINT fk_rgm_aluno foreign key (rgm_aluno) references aluno (rgm_aluno),
	CONSTRAINT fk_codigo_disciplina FOREIGN KEY (codigo_disciplina) REFERENCES disciplina (codigo_disciplina)
	);



--\alunos

	INSERT INTO aluno (rgm_aluno, nome_aluno, idade_aluno, situacao)
	VALUES
	(1100, 'Moisés Henrique dos Santos Sodre', 18, 'Alto'),
	(1001, 'Bruno Otavio', 18, 'media'),
	(0002, 'Guilhu', 18, 'Alto');

-- Disciplinas

	INSERT INTO disciplina (codigo_disciplina, nome_disciplina, media_disciplina)
	VALUES
	(1, 'Banco de Dados', 6.00),
	(2, 'Algoritmos', 3.00),
	(3, 'Programacao Web', 7.00),
	(4, 'Engenharia de Software', 6.50),
	(5, 'Redes de Computadores', 6.00);

-- Notas

	INSERT INTO notas (rgm_aluno, codigo_disciplina, p1, p2, media_notas, faltas_notas)
	VALUES
	(1001, 1, 7.00, 8.00, 7.50, 5),
	(1002, 2, 6.00, 7.00, 6.50, 8),
	(1003, 3, 5.00, 6.00, 5.50, 10),
	(1004, 4, 8.00, 9.00, 8.50, 7),
	(1005, 5, 6.00, 6.00, 6.00, 12);

-- Testando se tá certo

SELECT * FROM aluno;
SELECT * FROM disciplina;
SELECT * FROM notas;