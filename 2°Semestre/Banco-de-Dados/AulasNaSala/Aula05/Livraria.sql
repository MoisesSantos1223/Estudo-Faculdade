
CREATE DATABASE "Aula05-db-livraria";
/*
    WITH
    OWNER = postgres
    ENCODING = 'UTF8'
    LC_COLLATE = 'Portuguese_Brazil.1252'
    LC_CTYPE = 'Portuguese_Brazil.1252'
    LOCALE_PROVIDER = 'libc'
    TABLESPACE = pg_default
    CONNECTION LIMIT = -1
    IS_TEMPLATE = False
	*/

	-- Criação de tabela
	CREATE TABLE  cliente(
		id_cliente int,
		nome_cliente varchar(100),
		tel_cliente numeric(11),
		email_cliente varchar(100),
		constraint id_cliente primary key(id_cliente)
	);

	CREATE TABLE produto(
	id_produto int,
	data_produto date,
	valor_produto numeric(7,2),
	id_cliente int,
	constraint id_produto primary key(id_produto),
	constraint id_cliente foreign key (id_cliente) references cliente(id_cliente)
	);	

	CREATE TABLE livro(
	id_livro int,
	nome_livro varchar(100),
	endificadora_livro varchar(100),
	autor_livro varchar(100),
	constraint pk_id_livro primary key (id_livro)
	);
--Alterando table
alter table livro add column qtde_livro int;


	CREATE TABLE item_pedido(

	id_item int,
	id_pedido int,
	id_livro int,
	qtde_livro int,
	constraint pk_item primary key(id_item),
	constraint fk_id_pedido foreign key (id_pedido) references produto (id_produto),
	constraint fk_id_livro foreign key (id_livro) references livro (id_livro)
	);

	CREATE TABLE pagamento(
	id_pagamento int,
	id_item int,
	tipo_pagamento varchar(100),
	valor_pagamento numeric(7,2),
	constraint pk_id_pagamento primary key (id_pagamento),
	constraint fk_id_item foreign key (id_item) references item_pedidos (id_item)
	);

	CREATE TABLE livros_falta (
	id_livrof int,
	qtde_livrof numeric,
	valor_livrof numeric(7,2),
	id_livro int,
	constraint pk_id_livrof primary key (id_livrof),
	constraint fk_id_livro foreign key (id_livro) references livro (id_livro)
	);

	CREATE TABLE editores(
	id_edi int,
	nome_edi varchar(100),
	email_edi varchar(100),
	constraint pk_id_edi primary key (id_edi)
	);

	CREATE TABLE pedido_aquisicao(

	id_ped_aq int,
	id_livrof int,
	id_edi int,
	qtde_ped_aq numeric,
	valor_ped_aq numeric(7,2),
	constraint pk_id_ped_aq primary key (id_ped_aq),
	constraint fk_id_livrof foreign key (id_livrof) references livros_falta (id_livrof),
	constraint fk_id_edi foreign key (id_edi) references editores (id_edi)
	);