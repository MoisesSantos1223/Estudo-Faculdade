function mensagem(){
    let paragrafo = document.createElement("p");

    paragrafo.textContent = "Você clicou no botão";

    document.body.appendChild(paragrafo);
}