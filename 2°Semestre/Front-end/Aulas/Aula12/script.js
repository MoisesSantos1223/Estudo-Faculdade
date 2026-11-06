window.addEventListener("load", function() {

    document.getElementById("btnIdade")
    btnIdade.addEventListener("click", calcularIdade)

     btnVotar = document.getElementById("btnVotar")
     btnVotar.getElementById("btnVotar")
    function calcularIdade(){
        anoNacimento = parseInt(document.getElementById("anoNacimento").value)
        anoAtual = parseInt(document.getElementById("anoAtual").value)

       

        idade = anoAtual - anoNacimento

        document.getElementById("resposta").innerHTML = idade
    }

    function podeVotar(){
        idade = parseInt(document.getElementById("btnIdade").innerHTML)
        respVotar = document.getElementById("respVotar")

        if(idade >= 18){
            respVotar.innerHTML = "Sim, pode votar! (Obrigatório)"
            respVotar.style.color = "green"
        }else if (idade >= 16){
            respVotar.innerHTML = "Sim, pode votar (opcional)"
            respVotar.style.color = "blue"
        }else{
            respVotar.innerHTML = "Não, Não pode votar...."
            respVotar.style.color = "red"
        }
    } 

})