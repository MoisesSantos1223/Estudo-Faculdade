function calcularQuadrado() {

    let numero = parseFloat(document.getElementById("numero").value);

    let quadrado = numero * numero;

    document.getElementById("resultado").textContent =
        "O quadrado do número é: " + quadrado;
}