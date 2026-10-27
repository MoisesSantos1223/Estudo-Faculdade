let texto

function mensagem(){
    texto = document.createElement("p")

    texto.textContent ="Deus é bom e diabo não presta"
    document.body.appendChild(texto)
}

function cor(){
    texto.style.color = "blue"
}

function negrito(){
    texto.style.fontWeight = "bold"
}