function comeca(){
    let nome = prompt("Digite o seu nome")
    document.getElementById("nome").textContent = nome

    let nota1 = parseFloat(prompt("Digite a sua primeira nota: "))
    document.getElementById("nota1").textContent = nota1

    let nota2 = parseFloat(prompt("Digite a sua segunda nota: "))
    document.getElementById("nota2").textContent = nota2

    // Aqui é onde vai fazer a tabela aparecer quando o prompt for finalizado 
    document.getElementById("comeca").hidden = false
}

function total(){
    // Aqui eu vou pegar os numeros digitados na function comeca
    let nota1 = parseFloat(document.getElementById("nota1").textContent)
    let nota2 = parseFloat(document.getElementById("nota2").textContent)

    let media = (nota1 + nota2) / 2
    document.getElementById("media").textContent = media
}