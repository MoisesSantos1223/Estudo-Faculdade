function categoria() {
    let idade = parseInt(prompt("Digite a sua idade: "))
   
    // O && é usado como "and" em python
    if (idade >= 5 && idade <= 7){
        document.getElementById("resultado").textContent = "Infantil A"
    } else if (idade >= 8 && idade <= 10) {
        document.getElementById("resultado").textContent = "Infantil B"
    } else if (idade >= 11 && idade <= 13){
        document.getElementById("resultado").textContent = "Juvenil A"
    } else if (idade >= 14 && idade <= 17) {
         document.getElementById("resultado").textContent = "Juvenil B"
    }else {
        document.getElementById("resultado").textContent = "Adulto"
    }
}