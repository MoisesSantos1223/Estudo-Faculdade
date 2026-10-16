# Guia para continuar o projeto

Leia este arquivo, `README.md` e `README-MOISES.md` nesta pasta antes de trabalhar no projeto. `README.md` contém os requisitos do professor; `README-MOISES.md` é o resumo para o aluno; `README-EXTRAS.md` documenta os recursos adicionados além dos requisitos, com arquivos, linhas e explicações.

## Objetivo escolar

O trabalho é um portfólio pessoal feito somente com HTML e CSS. Os requisitos completos estão em `ArquivoDeIa/README.md`. Em resumo, o professor pede pelo menos quatro páginas com conteúdos diferentes, estrutura semântica, títulos, navegação, imagens com descrição, listas, formulário simples, links, estilos e código organizado.

**Limite combinado com o aluno:** no máximo 300 linhas somando os arquivos HTML e CSS do site. Antes de concluir qualquer alteração, confira com `wc -l index.html curriculo.html blog.html projetos.html style.css` e mantenha o total abaixo de 300.

Não adicione JavaScript, bibliotecas, frameworks ou funcionalidades de servidor. O requisito é HTML e CSS; efeitos visuais simples podem ser feitos com CSS.

## Referência visual

O usuário escolheu como referência o vídeo que está em `ArquivoDeIa/WhatsApp Video 2026-10-16 at 14.42.58.mp4`. Ele mostra um portfólio de fundo escuro, rosa neon, navegação superior, apresentação pessoal, habilidades, cartões de projetos, trajetória e contato.

Use a referência para orientar cores e organização, mas faça uma versão própria, simples e em português. O vídeo demonstra animações e recursos feitos com JavaScript; não os reproduza com JavaScript. Prefira navegação por âncoras e efeitos básicos em CSS. O antigo site Spot pode ser tratado apenas como uma referência anterior, não como a referência atual.

## Estrutura atual do projeto

Os arquivos do site estão na pasta pai, `Pratica-html-css`:

| Arquivo | Conteúdo atual |
|---|---|
| `index.html` | Página principal de portfólio, com apresentação, redes sociais provisórias, sobre, habilidades, projetos, trajetória e formulário de contato demonstrativo. |
| `curriculo.html` | Formação, conhecimentos e espaços para experiências futuras. |
| `blog.html` | Artigo introdutório sobre HTML e CSS e um espaço reservado para imagem. |
| `projetos.html` | Cartões com o portfólio escolar, exercícios e um espaço para outro projeto. |
| `style.css` | Estilos compartilhados; visual escuro/rosa e ajustes para telas menores. |
| `imagens/placeholder.svg` | Imagem provisória reutilizada em espaços de foto/imagem. |
| `README.md` | Nome do aluno, descrição e arquivos principais do projeto. |

`ArquivoDeIa` guarda as referências e documentação; não remova nem altere o vídeo, o PDF do usuário ou seus arquivos de referência.

## Estado dos requisitos

- Há quatro páginas HTML: `index.html`, `curriculo.html`, `blog.html` e `projetos.html`.
- A página inicial tem navegação por âncoras, apresentação, seções de habilidades e projetos, trajetória e formulário com nome, e-mail e mensagem.
- O currículo apresenta o nome e o curso que o aluno já informou; não invente experiência, contatos ou outros dados pessoais.
- O blog tem conteúdo de HTML/CSS, links externos e uma imagem SVG provisória. Atualmente não tem vídeo incorporado; se for necessário atender literalmente à sugestão do professor sobre vídeos, pergunte ao usuário qual vídeo usar ou deixe um espaço claro para ele adicionar um.
- As imagens e links de redes sociais são provisórios. Não transforme os nomes das redes em links funcionais até receber os endereços reais.
- As páginas usam `style.css`; não recrie `stlye.css`.
- Não existe código JavaScript no projeto.

## Como trabalhar

1. Leia a solicitação atual e confirme qual é o escopo antes de mexer em arquivos não relacionados.
2. Consulte a referência e o código existente antes de propor alterações visuais ou de conteúdo.
3. Use somente dados fornecidos pelo usuário. Quando faltar uma informação pessoal, mantenha um texto provisório ou peça a informação.
4. Preserve o estilo escuro e rosa e a simplicidade do código, salvo nova orientação do usuário.
5. Mantenha o total de HTML e CSS abaixo de 300 linhas.
6. Atualize `README-EXTRAS.md` quando adicionar/remover recursos extras: registre o nome, o que faz, arquivo e intervalo de linhas. Atualize os números das linhas se o código mudar.
7. Atualize `README-MOISES.md` com um resumo curto quando a mudança alterar o projeto ou seus recursos extras.
8. Atualize este guia se a estrutura, requisitos, limites ou referência visual mudarem.
9. Verifique links locais, âncoras, imagens, títulos e ausência de JavaScript. Se uma validação falhar, corrija a causa ou explique a pendência com clareza.

## Próximas informações esperadas

- URLs pessoais de GitHub, LinkedIn e Instagram para trocar os textos provisórios por links.
- Uma foto real, caso o aluno queira substituir `imagens/placeholder.svg`.
- Eventuais dados adicionais do currículo.
- Um vídeo para o artigo do blog, apenas se o aluno optar por incluir um.

Não interrompa o trabalho esperando esses dados quando não forem necessários para a solicitação atual.
