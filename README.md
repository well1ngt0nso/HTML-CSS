# 🌐HTML-CSS🌐
Como o tema do repositório já nos fala, o objetivo é trabalhar com essas duas linguagens, em suma voltado para projetos envolvendo sistemas embarcados, mas que deve agregar muito ao pessoal que quer apenas aprender html/css ou quer melhorar as habilidades...
## OBJETIVOS:
Esse repositório faz parte de um projeto maior envolvendo interface web, servidor e microcontroladores, aqui vamos ver a parte web, parte estrutural e visual
* APRENDER A LIDAR COM AS PRINCIPAIS ESTRUTURAS DE HTML
* APRENDER A LIDAR COM AS PRINCIPAIS ESTRUTURAS DE CSS
* APRENDER A UTILIZAR JAVASCRIPT NO LADO DO CLIRNTE ([TENHO UM OUTRO REPOSITÓRIO PARA O LADO DO SERVIDOR](https://github.com/well1ngt0nso/serverjs/README.md))
* DICAS QUE UTILIZO PARA MELHORAR A PRODUTIVIDADE, O APRENDIZADO
## COMO VAI FUNCIONAR?
Vou listar várias aulas com vários exemplos que vão evoluindo com o tempo📈

Let's Go!!

## HTML (HyperText Markup Language)🧱

**HTML** (Linguagem de Marcação de Hipertexto) é a linguagem padrão para criar páginas da web. Ele define a estrutura de um documento web e permite que o navegador entenda como o conteúdo deve ser exibido.
### Estrutura Básica

Um documento HTML começa com uma estrutura básica que inclui:

```html
<!-- Estrutura básica da página -->
<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <title>Exemplo com JavaScript no Lado do Cliente</title>
    <!-- Link para o arquivo CSS externo -->
    <link rel="stylesheet" href="estilos.css">
    <!-- Link para o arquivo JavaScript externo -->
    <script src="script.js"></script>
</head>
<body>
    <!-- Título principal da página -->
    <h1>Bem-vindo ao JavaScript no Cliente</h1>

    <!-- Parágrafo onde a mensagem será exibida -->
    <p id="mensagem">Clique no botão para exibir uma mensagem.</p>

    <!-- Botão que aciona o evento de clique -->
    <button id="botao">Clique Aqui</button>
</body>
</html>

```
## CSS (Cascading Style Sheets)🎨

**CSS** (Folhas de Estilo em Cascata) é uma linguagem usada para estilizar documentos HTML, controlando a aparência visual de páginas da web. Com CSS, é possível personalizar cores, fontes, layouts e espaçamentos para criar interfaces atraentes e responsivas.

O HTML geralmente linka o arquivo CSS externo para aplicar os estilos:

```css
/* Estilo básico da página */
body {
    font-family: Arial, sans-serif;
    background-color: #f4f4f9;
    color: #333;
    margin: 0;
    padding: 20px;
    text-align: center;
}

/* Estilo do título */
h1 {
    color: #0077cc;
}

/* Estilo do botão */
#botao {
    padding: 10px 20px;
    font-size: 16px;
    background-color: #0077cc;
    color: white;
    border: none;
    border-radius: 5px;
    cursor: pointer;
}

/* Estilo para o botão ao passar o mouse (hover) */
#botao:hover {
    background-color: #005fa3;
}
```

## JavaScript no Lado do Cliente⚙️

**JavaScript** é uma linguagem de programação amplamente utilizada no desenvolvimento web para adicionar interatividade às páginas. No lado do cliente, o JavaScript é executado diretamente no navegador, permitindo criar interfaces dinâmicas e responsivas sem a necessidade de recarregar a página.

O HTML geralmente também inclui links o JavaScript externo assim como no css.

```javascript

// Seleciona o botão e o parágrafo
const botao = document.getElementById('botao');
const mensagem = document.getElementById('mensagem');

// Função que altera o texto do parágrafo
function exibirMensagem() {
    mensagem.textContent = 'Você clicou no botão! Parabéns!';
    mensagem.style.color = 'green';
}

// Adiciona um evento de clique ao botão
botao.addEventListener('click', exibirMensagem);
```
