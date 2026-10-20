# Recursos extras do portfólio

Esta documentação lista os recursos que foram adicionados além dos requisitos básicos do professor. Ela explica os elementos e as propriedades CSS (“comandos”) usados, mostra onde estão no código e informa o que fazem.

> **Como ler as referências:** os números são linhas dos arquivos de código no estado atual. Se um arquivo for editado, as linhas podem mudar; atualize este documento junto com o código.

## O que o professor já pediu

O README com os requisitos pede HTML e CSS, pelo menos quatro páginas, estrutura semântica, títulos, menu com três ou mais links, listas, imagens com `alt`, links internos e externos, formulário e estilos. Esses itens não são listados aqui como extras, mesmo quando a implementação tem algum detalhe visual particular.

## 1. Visual escuro com rosa neon

**O que é:** o fundo quase preto, os cartões em tons escuros e os destaques rosa dão ao site a aparência geral do vídeo de referência. É uma escolha visual; não adiciona comportamento ou programação.

**Onde está:**

| Arquivo e linhas | Elemento ou “comando” | O que faz |
|---|---|---|
| `style.css`, linhas 1–4 | Variáveis `--fundo`, `--cartao`, `--texto`, `--suave`, `--rosa`, `--borda` | Guardam as cores principais em um lugar para reutilizá-las. |
| `style.css`, linha 8 | `background: var(--fundo)` e `color: var(--texto)` | Aplicam fundo escuro e texto claro ao site. |
| `style.css`, linhas 14–15 | `.site-header` e `.nav-wrap` | Mantêm o menu no topo e organizam a marca e a navegação. |
| `style.css`, linha 34 | `.profile`, `border-radius: 50%` e `box-shadow` | Deixam o espaço da foto redondo, com borda e brilho rosa. |
| `style.css`, linhas 36–37 | `.section` e `.section-muted` | Criam respiro entre seções e alternam áreas escuras. |
| `style.css`, linhas 42–44 | `.cards`, `.card` e `:hover` | Organizam cartões em colunas e destacam o contorno ao passar o mouse. |
| `style.css`, linhas 61–63 | `.footer` e `.footer a` | Dão ao rodapé fundo escuro e links rosa. |

## 2. Navegação por seções na página inicial

**O que é:** o menu leva a partes da mesma página, como “Sobre”, “Habilidades”, “Projetos”, “Trajetória” e “Contato”. Isso reduz a necessidade de criar páginas extras só para essas seções.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, linhas 13–16 | `<nav>` e links com `href="#..."` | Mostram as opções do menu e levam para os IDs das seções. |
| `index.html`, linhas 19, 34, 38, 46, 54 e 57 | `id="inicio"`, `id="sobre"`, `id="habilidades"`, `id="projetos"`, `id="trajetoria"` e `id="contato"` | Criam os destinos para os links internos. |
| `style.css`, linha 7 | `scroll-behavior: smooth` | Faz o navegador rolar suavemente até uma seção quando um link de âncora é usado. |
| `style.css`, linha 36 | `scroll-margin-top` | Deixa espaço no topo ao navegar até uma seção, evitando que o menu fixo cubra o título. |

**Observação:** a navegação usa links HTML comuns; não há script controlando o menu.

## 3. Cartões de habilidades e barras de progresso

**O que é:** cartões mostram Python, Banco de dados (MySQL), Java, Linguagem C, Inteligência Artificial, HTML e CSS. Os níveis informados pelo aluno definem visualmente o preenchimento das barras; os números não aparecem nos nomes das habilidades.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, linhas 81–124 | Seção de habilidades e cartões | Agrupa os sete conhecimentos em cartões, com seus percentuais e descrições. |
| `index.html`, linhas 91–121 | `role="progressbar"` e atributos `aria-*` | Expõem o nome e o nível visual aproximado de cada barra para tecnologias assistivas. |
| `style.css`, linhas 47–48 | `.skill-bar` e `.skill-bar span` | Desenham a base escura e o trecho rosa de cada barra. |
| `style.css`, linhas 49–54 | Classes `progress-python`, `progress-mysql`, `progress-java`, `progress-c`, `progress-ia`, `progress-html` e `progress-css` | Definem o preenchimento visual das barras com base nos níveis informados. |
| `curriculo.html`, linhas 67–79 | Lista de habilidades | Repete os mesmos conhecimentos e percentuais no currículo. |

**Importante:** os níveis servem apenas para indicar visualmente quanto cada barra fica preenchida. Não são exibidos como números nem representam resultados de uma avaliação formal.

## 4. Cartão de projeto com link direto ao GitHub

**O que é:** a página inicial apresenta cartões com uma descrição resumida e um link direto para repositórios do GitHub, abertos em uma nova aba. Os cartões mostram o Gerenciador de Estoque, este portfólio feito com HTML e CSS, o repositório de estudos Exercícios de Python e uma página sobre os estudos de front-end.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, seção `id="projetos"` | Cartões de projetos | Apresenta os trabalhos na página inicial. |
| `index.html`, cartão “Gerenciador de Estoque” | Descrição e link externo do GitHub | Resume cadastro, listagem e remoção de produtos e abre diretamente o repositório. |
| `index.html`, cartão “Meu Portfólio” | Descrição e link para a pasta do site no GitHub | Apresenta este site como projeto em HTML e CSS e abre seus arquivos no repositório. |
| `index.html`, cartão “Exercícios de Python” | Descrição de estudos e link externo do GitHub | Resume o objetivo do repositório de estudos e abre diretamente sua página no GitHub. |
| `index.html`, cartão “Estudos de front-end” | Link interno para `estudos.html` | Abre a página que explica os conceitos de HTML e CSS usados no portfólio. |
| `style.css`, linhas 42–46 | `.cards`, `.card`, `:hover` | Organizam os cartões e mudam sua borda ao passar o mouse. |

## 5. Linha do tempo da formação

**O que é:** uma lista vertical resumida mostra a formação e os estudos atuais.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, linhas 54–56 | Lista `class="timeline"` | Apresenta os passos atuais de estudo. |
| `style.css`, linhas 55–56 | `.timeline` e `.timeline li` | Alinham os itens e desenham a linha vertical ao lado deles. |
| `curriculo.html`, linhas 10–13 | Cartões de formação, habilidades e próximos passos | Organizam as informações do currículo por assunto. |

## 6. Links e ícones de redes sociais feitos em SVG

**O que é:** os desenhos simplificados do GitHub e LinkedIn estão escritos diretamente no HTML com SVG. Cada ícone é um link para o perfil informado pelo aluno e abre em uma nova aba.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, lista `social-links` | Links com SVG do GitHub e LinkedIn | Agrupa os perfis clicáveis; cada desenho usa SVG embutido no HTML. |
| `style.css`, regras `.social` e `.social svg` | Estilos dos links e dos ícones | Controlam alinhamento, tamanho e aparência dos ícones. |

**Estado atual:** os links do GitHub e do LinkedIn estão configurados com as URLs informadas pelo aluno. O Instagram foi removido a pedido do aluno.

## 7. Foto de perfil

**O que é:** a foto escolhida pelo aluno aparece no destaque da página inicial e na identificação do currículo. O arquivo SVG provisório permanece na pasta, mas não é usado nesses dois locais.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, elemento `img.profile` | `src="imagens/moises.jpeg"` | Mostra a foto na apresentação e fornece um texto alternativo descritivo. |
| `curriculo.html`, elemento `img.profile.resume-photo` | `src="imagens/moises.jpeg"` | Reutiliza a mesma foto na identificação do currículo. |
| `imagens/moises.jpeg` | Foto JPEG enviada pelo aluno | Arquivo da foto de perfil, renomeado conforme solicitado. |
| `style.css`, regras `.profile` e `.resume-photo` | Estilos das fotos | Ajustam o tamanho e o enquadramento da imagem em cada página. |

## 8. Adaptação para celular

**O que é:** o layout muda quando a tela fica menor, para que menu, apresentação e cartões caibam em celulares.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `style.css`, linhas 77–85 | `@media (max-width: 700px)` | Aplica regras quando a largura disponível é de até 700 pixels. |
| `style.css`, linha 78 | `.nav-wrap` | Coloca a marca e o menu em linhas separadas no celular. |
| `style.css`, linha 81 | `.hero` | Empilha apresentação e foto em uma coluna. |
| `style.css`, linha 83 | `.two-columns` e `.resume-layout` | Empilha seções de duas colunas e o currículo. |
| `style.css`, linha 84 | `.cards` | Empilha os cartões verticalmente. |

## 9. Estados ao passar o mouse

**O que é:** ao passar o mouse por links, botões e cartões, a cor ou a borda muda. São efeitos pequenos feitos com CSS.

**Onde está:**

| Arquivo e linhas | Regra | O que faz |
|---|---|---|
| `style.css`, linha 12 | `a:hover` | Muda a cor de links ao passar o mouse. |
| `style.css`, linha 20 | `.nav-links a:hover` | Destaca a opção do menu. |
| `style.css`, linha 28 | `.button:hover` | Mostra um brilho rosa nos botões. |
| `style.css`, linha 44 | `.card:hover` | Muda a borda do cartão para rosa. |

## Resumo: propriedades CSS que podem parecer “comandos”

CSS não tem comandos como uma linguagem de programação; usa **propriedades** dentro de regras. Estas propriedades fazem parte dos extras descritos acima:

| Propriedade | Arquivo e linhas | Explicação simples |
|---|---|---|
| `--nome` e `var(--nome)` | `style.css`, linhas 1–3 e em diversas regras | Guardam e reutilizam valores, como as cores do tema. |
| `position: sticky` | `style.css`, linha 14 | Deixa o cabeçalho acompanhar a rolagem e ficar preso ao topo. |
| `display: grid` | `style.css`, linhas 21, 38, 42, 67 e 77–84 | Organiza elementos em linhas e colunas. |
| `display: flex` | `style.css`, linhas 15, 18, 30 e 62 | Alinha itens em uma linha ou coluna com espaçamento. |
| `gap` | Várias regras, por exemplo linhas 15, 18, 21, 38 e 42 | Define espaço entre itens sem precisar de margens individuais. |
| `border-radius` | `style.css`, linhas 27, 31, 34, 43, 47 e 53 | Arredonda cantos ou cria círculos. |
| `box-shadow` | `style.css`, linha 28 | Cria sombra/brilho em botões. |
| `object-fit: cover` | `style.css`, linha 34 | Ajusta a imagem para preencher o espaço sem deformá-la. |
| `:hover` | `style.css`, linhas 12, 20, 28 e 44 | Aplica estilo enquanto o ponteiro está sobre o elemento. |
| `@media` | `style.css`, linhas 77–85 | Aplica estilos diferentes conforme o tamanho da tela. |
| `scroll-behavior: smooth` | `style.css`, linha 7 | Faz a rolagem para âncoras acontecer suavemente. |

## O que não foi adicionado

- JavaScript, funções JavaScript ou bibliotecas de ícones.
- Envio real do formulário para um servidor.
- Porcentagens reais de habilidade.
- URLs funcionais para os perfis sociais; ainda faltam os links fornecidos pelo usuário.

O projeto foi combinado para ficar abaixo de 300 linhas somando HTML e CSS. Consulte o `README.md` principal e `README-IA.md` para o estado geral e os requisitos escolares.

## Guia de leitura do HTML da pasta `Atividade 1`

Esta parte explica os elementos e atributos HTML usados nas páginas de `Atividade 1`. Os nomes entre sinais de menor e maior são **elementos** ou **tags** — não funções. O HTML organiza o conteúdo; o CSS define sua aparência.

### Estrutura do documento

`<!DOCTYPE html>` informa ao navegador que o arquivo usa HTML moderno. `<html lang="pt-br">` envolve a página; `lang` informa que o idioma é português do Brasil.

`<head>` guarda informações sobre a página. `<meta charset="UTF-8">` permite exibir acentos corretamente; `<meta name="viewport">` ajuda o layout a caber na tela do dispositivo; e `<meta name="description">` descreve a página. `<title>` define o texto da aba do navegador. `<link rel="stylesheet" href="style.css">` conecta a página ao arquivo CSS.

`<body>` contém o conteúdo visível da página.

### Elementos de organização e conteúdo

`<header>` representa o cabeçalho da página ou de uma seção. `<nav>` agrupa os links de navegação. `<main>` identifica o conteúdo principal. `<section>` divide a página por assunto. `<article>` agrupa conteúdo independente, como um cartão de projeto ou habilidade. `<aside>` contém informações complementares, como a identificação no currículo. `<footer>` representa o rodapé.

`<div>` agrupa elementos para organizar o layout e aplicar estilos, sem acrescentar significado próprio. `<span>` agrupa um trecho pequeno de conteúdo dentro de outro elemento, também sem significado próprio.

`<h1>`, `<h2>` e `<h3>` criam títulos em níveis diferentes: o título principal e os títulos das seções ou cartões. `<p>` cria parágrafos. `<strong>` marca texto importante. `<br>` força uma quebra de linha. `<code>` identifica trechos que representam código.

### Listas

`<ul>` cria uma lista sem ordem numerada; `<ol>` cria uma lista ordenada; `<li>` representa cada item de uma lista.

### Links, imagens e ícones

`<a>` cria um link. O atributo `href` contém o destino: pode ser outra página, uma seção da página como `#contato` ou um endereço externo.

Nos links externos, `target="_blank"` pede que o navegador abra o destino em outra aba. `rel="noopener noreferrer"` acompanha essa opção para impedir que a página aberta controle a página original.

`<img>` exibe uma imagem. `src` indica o caminho do arquivo; `alt` fornece uma descrição para leitores de tela ou quando a imagem não carrega.

`<svg>` permite desenhar um ícone vetorial diretamente no HTML. `viewBox` define a área do desenho. `<path>` desenha uma forma; o atributo `d` contém as instruções do traçado. `role="img"` informa que o SVG é uma imagem, e `aria-label` dá a ela um nome acessível, como “GitHub” ou “LinkedIn”.

### Classes, identificadores e barras de habilidades

`class` dá um nome que pode ser usado pelo CSS para aplicar estilos. Uma classe pode ser reutilizada em vários elementos. `id` identifica um elemento específico e pode ser usado como destino de um link interno.

As barras de habilidades usam `<p>` como base e `<span>` como parte preenchida. Classes, como `skill-bar` e `progress-python`, conectam os elementos às regras de estilo no CSS.

`role="progressbar"` informa a tecnologias assistivas que o elemento representa um nível de progresso. `aria-label` nomeia a habilidade; `aria-valuemin`, `aria-valuemax` e `aria-valuenow` informam o valor mínimo, o máximo e o valor atual.

### Formulário de contato

`<form>` agrupa os campos do formulário. `action="#"` não envia os dados para um serviço; `method="get"` define o método que o navegador usaria para enviar dados. Neste projeto o formulário é demonstrativo: não salva nem encaminha mensagens.

`<label>` mostra o nome de um campo. Seu atributo `for` deve ter o mesmo valor que o `id` do campo relacionado. `<input>` cria campos curtos, como nome e e-mail. `<textarea>` cria uma área maior para a mensagem. `<button>` cria o botão de envio.

`name` identifica um campo; `type="email"` indica um campo de e-mail; `type="submit"` define um botão de envio; `placeholder` mostra uma dica dentro de um campo; `required` exige que o campo seja preenchido; e `rows` define a altura inicial da área de texto.

### Comentários HTML

`<!-- comentário -->` adiciona uma anotação para quem lê o código. O navegador não mostra o conteúdo do comentário na página.

### Lista completa dos elementos usados

Nas páginas de `Atividade 1` aparecem: `<html>`, `<head>`, `<meta>`, `<title>`, `<link>`, `<body>`, `<header>`, `<nav>`, `<main>`, `<section>`, `<article>`, `<aside>`, `<footer>`, `<div>`, `<span>`, `<a>`, `<img>`, `<ul>`, `<ol>`, `<li>`, `<h1>`, `<h2>`, `<h3>`, `<p>`, `<strong>`, `<br>`, `<code>`, `<svg>`, `<path>`, `<form>`, `<label>`, `<input>`, `<textarea>` e `<button>`.
