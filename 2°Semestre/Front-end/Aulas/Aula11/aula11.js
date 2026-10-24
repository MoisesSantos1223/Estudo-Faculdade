alert("isso é um alerta!")

//mensagem = prompt("Digite alguma coisa: ")

//console.log("Isso tem que aparecer no console!")
//console.log(mensagem)

//numero  = parseInt(prompt("Digite um número:"))
//console.log(typeof(numero))

// Exemplo de procedimentos (sem return)
function teste() {
    console.log("Olá")
    console.log("Outra Intruções")
    console.log("mais uma ...")
}

// Exemplo com return
 function calcularmedia() {
    media = (n1 + n2) /2
    return media
 }

 function Trocatitulo() {
    document.getElementById('titulo').innerHTML = "Novo Título"
    document.getElementById('titulo').style.color = "red"
    document.getElementById('titulo').style.backgroundColor = "blue"
 }

 function calcularidade(){
    nome = document.getElementById('nome').value
    anoNasc = parseInt(document.getElementById('anoNasc').value)

    idade = 2026 - anoNasc

    document.getElementById('resp').innerHTML = idade
 }