function total(){
    let numero = parseInt(document.getElementById("numero").value)

    if(numero % 2 == 0){
        document.getElementById("resultado").textContent = "número par"
    } else{
        document.getElementById("resultado").textContent ="Número impar"
    }
}