function mais(){
    let n1 = parseInt(document.getElementById("n1").value)
    let n2 = parseInt(document.getElementById("n2").value)

    totalMais = n1 + n2

    document.getElementById("resultado").textContent = totalMais
}

function menos(){
    let n1 = parseInt(document.getElementById("n1").value)
    let n2 = parseInt(document.getElementById("n2").value)

    totalMais = n1 - n2

    document.getElementById("resultado").textContent = totalMais
}

function muti() {
    let n1 = parseInt(document.getElementById("n1").value)
    let n2 = parseInt(document.getElementById("n2").value)

    totalMais = n1 * n2

    document.getElementById("resultado").textContent = totalMais
}

function divi(){
     let n1 = parseFloat(document.getElementById("n1").value)
    let n2 = parseFloat(document.getElementById("n2").value)

    totalMais = n1 / n2

    document.getElementById("resultado").textContent = totalMais
}