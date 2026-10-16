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

## 3. Cartões de habilidades e barras ilustrativas

**O que é:** cartões exibem HTML, CSS e Front-end, com barras coloridas para dar uma representação visual simples do aprendizado.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, linhas 38–45 | Seção de habilidades e cartões | Agrupa os conhecimentos em cartões independentes. |
| `index.html`, linhas 41–43 | Classes `skill-bar`, `progress-html`, `progress-css`, `progress-front` | Ligam cada barra à regra CSS correspondente. |
| `style.css`, linha 47 | `.skill-bar` | Cria a base escura da barra e esconde o que passar de seus limites (`overflow: hidden`). |
| `style.css`, linha 48 | `.skill-bar span` | Desenha o trecho rosa dentro da base. |
| `style.css`, linhas 49–51 | `width` das barras | Define larguras ilustrativas para HTML, CSS e Front-end. |

**Importante:** essas larguras são apenas parte do desenho e não foram medidas como níveis reais de domínio. Se não quiser representar porcentagens, troque por texto como “Em aprendizado” ou remova as barras.

## 4. Cartões e página separada de projetos

**O que é:** além das páginas exigidas, o portfólio apresenta cartões de projetos e tem uma página própria para listá-los.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, linhas 46–53 | Seção `id="projetos"` | Apresenta uma prévia de projetos na página inicial. |
| `index.html`, linhas 49–51 | Cartões de portfólio, blog e próximo projeto | Dão exemplos de conteúdos que podem aparecer no portfólio. |
| `projetos.html`, linhas 8–12 | Cartões na página de projetos | Separa o projeto escolar, o espaço para um projeto futuro e os exercícios. |
| `style.css`, linhas 42–46 | `.cards`, `.card`, `:hover` | Organizam os cartões e mudam sua borda ao passar o mouse. |
| `style.css`, linha 75 | `.project-page-grid .card` | Mantém uma altura mínima para os cartões de projetos. |

## 5. Linha do tempo da formação

**O que é:** uma lista vertical resumida mostra a formação e os estudos atuais.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, linhas 54–56 | Lista `class="timeline"` | Apresenta os passos atuais de estudo. |
| `style.css`, linhas 55–56 | `.timeline` e `.timeline li` | Alinham os itens e desenham a linha vertical ao lado deles. |
| `curriculo.html`, linhas 10–13 | Cartões de formação, habilidades e próximos passos | Organizam as informações do currículo por assunto. |

## 6. Ícones de redes sociais feitos em SVG

**O que é:** os desenhos simplificados do GitHub, LinkedIn e Instagram estão escritos diretamente no HTML com SVG. Não é preciso instalar uma biblioteca ou usar imagens externas para esses ícones.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, linha 26 | Lista `social-links` | Agrupa os três perfis e informa às tecnologias assistivas que são redes sociais. |
| `index.html`, linha 27 | SVG do GitHub | Desenha o símbolo do GitHub com um caminho `<path>`. |
| `index.html`, linha 28 | SVG do LinkedIn | Desenha o símbolo do LinkedIn com um caminho `<path>`. |
| `index.html`, linha 29 | SVG do Instagram | Desenha o contorno com `<rect>` e `<circle>`. |
| `style.css`, linhas 30–34 | `.social`, `.social svg` e `.social .instagram` | Controlam o alinhamento, tamanho, preenchimento e contorno dos ícones. |

**Estado atual:** os itens são `<span>`, não links. O texto “adicionar link” indica que faltam as URLs reais do usuário. Depois que ele fornecer os perfis, substitua cada `<span>` externo por um `<a href="URL">` com um rótulo acessível.

## 7. Imagem provisória

**O que é:** o mesmo arquivo SVG mostra um círculo com “IMG” e “adicionar foto” até o usuário escolher uma imagem real.

**Onde está:**

| Arquivo e linhas | Código | O que faz |
|---|---|---|
| `index.html`, linha 32 | `<img class="profile" src="imagens/placeholder.svg">` | Mostra a imagem provisória no destaque inicial; `alt` descreve que ela deve ser trocada por uma foto. |
| `curriculo.html`, linha 9 | `<img class="profile resume-photo" ...>` | Reutiliza o mesmo espaço provisório no currículo. |
| `blog.html`, linha 10 | `<img class="article-image-placeholder" ...>` | Usa o SVG como espaço para uma futura imagem do artigo. |
| `imagens/placeholder.svg`, linha 1 | Formas e textos SVG | Desenha o círculo, o contorno rosa e os textos de orientação. |
| `style.css`, linhas 34 e 69 | `.profile` e `.resume-photo` | Dão forma redonda e tamanho apropriado às imagens. |

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
