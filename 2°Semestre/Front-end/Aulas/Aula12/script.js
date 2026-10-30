window.addEventListener("load", function() {

    document.getElementById("btnIdade")
    btnIdade.addEventListener("click", calcularIdade)
    function calcularIdade(){
        anoNacimento = parseInt(document.getElementById("anoNacimento").value)
        anoAtual = parseInt(document.getElementById("anoAtual").value)

        idade = anoAtual - anoNacimento

        document.getElementById("resposta").innerHTML = idade
    }


})