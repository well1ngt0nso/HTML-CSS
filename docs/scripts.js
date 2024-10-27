alert('vai')
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
