function comeca(){
    let nome = prompt("Digite o seu nome")
    document.getElementById("nome").textContent = nome

    let nota1 = parseFloat(prompt("Digite a sua primeira nota: "))
    document.getElementById("nota1").textContent = nota1

    let nota2 = parseFloat(prompt("Digite a sua segunda nota: "))
    document.getElementById("nota2").textContent = nota2

    // Aqui é onde vai fazer a tabela aparecer quando o prompt for finalizado 
    document.getElementById("tabela").hidden = false
}

function total(){
    let media = (nota1 + nota2) / 2
    document.getElementById("media").textContent = media
}