function total(){
    let nota1 = parseInt(document.getElementById("nota1").value)
    let nota2 = parseInt(document.getElementById("nota2").value)
    let nota3 = parseInt(document.getElementById("nota3").value)

    let media = (nota1 + nota2 + nota3) / 3

    if (media >= 6){
        document.getElementById("resultado").textContent = "Aprovado"
    }else if (media >= 3 &&  media < 6){
    document.getElementById("resultado").textContent = "EXAME"
    }else {
        document.getElementById("resultado").textContent = "REPROVADO"
    }
}