# HTML

HTML (Hypertext Markup Language) é uma **linguagem de marcação**, o que a diferencia das linguagens de programação comuns, como `Python`, `C`, `C++` e outras. Enquanto linguagens de programação são voltadas para a criação de lógica e manipulação de dados, HTML tem como objetivo estruturar e organizar o conteúdo de páginas web.
Com HTML, você define elementos como cabeçalhos, parágrafos, imagens, links, e muito mais coias, proporcionando a base para a exibição de conteúdo na web.

## Tags HTML

Tags HTML são os elementos básicos que compõem a estrutura de uma página web. Cada tag representa uma parte do conteúdo ou da estrutura da página, como um cabeçalho, parágrafo, imagem ou link. As tags HTML são geralmente compostas de uma **tag de abertura** e uma **tag de fechamento**, com o conteúdo no meio. Por exemplo:

```html
<p>Este é um parágrafo.</p>
```
Ou seja, cada tag adicionada código vai trazer um tipo de estrutura para a sua página, exemplos de tagas:
### Principais Tags HTML

- `<html>`: Define o início de um documento HTML.
- `<head>`: Contém os cahamdos "metadados" sobre o documento, como o título, links para estilos ou configurações.
- `<title>`: Define o título exibido na aba do navegador.
- `<body>`: Contém o conteúdo principal da página, como texto, imagens e links.
- `<h1>`, `<h2>`, `<h3>` ... `<h6>`: Cabeçalhos de diferentes níveis, de `<h1>` (mais importante) a `<h6>` (menos importante), tem uma grande impotância para os CEO's e os Indexadores (veremos isso).
- `<p>`: Parágrafo de texto.
- `<a href="URL">`: Cria um link para outra página ou recurso.
- `<img src="URL" alt="Texto alternativo">`: Insere uma imagem.
- `<ul>`, `<ol>`, `<li>`: Cria listas não ordenadas (`<ul>`) ou ordenadas (`<ol>`) com itens (`<li>`).
- `<div>`: Contêiner genérico para agrupar outros elementos, em outras palavras demarcam algo.
## EXEMPLO
```html
<!DOCTYPE html>
<html lang="pt-BR">
  <head>
      <title> Página de Pipoca </title>
  </head>
  <body>
    <!-- Em suma toda a estrutura da sua página vai estar aqui -->
  </body>
</html>
```

## EXEMPLO

Abaixo está um exemplo básico de um documento HTML:

```html
<!DOCTYPE html>
<html lang="pt-BR">
  <head>
      <title>Página de Pipoca</title>
  </head>
  <body>
    <!-- Em suma, toda a estrutura da sua página vai estar aqui -->
  </body>
</html>
```

Com apenas este código, já temos uma página HTML. Embora seja possível remover algumas partes, o navegador consegue montar uma estrutura básica a partir disso.

## Rodando HTML

Existem várias maneiras de desenvolver em HTML, utilizando diversos programas que podem ajudar. Entre eles, temos:

- **Notepad++**
- **Visual Studio Code**
- **Sublime Text**
  
Recomendo usar o **Visual Studio Code**. Embora pareça contraintuitivo no início, mas evitará a necessidade de migrações futuras.

### Passos para criar sua primeira página HTML:

1. **Instale o Visual Studio Code.**
2. **Crie uma nova pasta** e abra-a no Visual Studio Code. Dentro dessa pasta, crie um arquivo chamado `index.html`. Este nome é um padrão, e entenderemos melhor o motivo mais adiante.
3. **Cole o seguinte trecho de código** dentro do arquivo `index.html` e salve:

```html
<!DOCTYPE html>
<html lang="pt-BR">
  <head>
      <title>Página de Pipoca</title>
  </head>
  <body>
    Hello, world!!!
  </body>
</html>
```

Após salvar o arquivo, você pode abri-lo no Google Chrome. O resultado será uma página em branco com o texto "Hello, world!!!". 

No início, você verá os elementos na tela de forma bastante simples. Isso é normal, pois o HTML é responsável apenas pela estrutura, enquanto a estilização é feita através de outra linguagem chamada `CSS`.
