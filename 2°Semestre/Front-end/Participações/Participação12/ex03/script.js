function total(){
    let n1 = parseInt(document.getElementById("n1").value)
    let n2 = parseInt(document.getElementById("n2").value)

    if (n1 > n2){
        document.getElementById("resultado").textContent = n1
    } else {
        document.getElementById("resultado").textContent = n2
    }
}