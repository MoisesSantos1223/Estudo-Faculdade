function total(){
    let preco = parseFloat(document.getElementById("preco").value)
    let codigo = parseInt(document.getElementById("codigo").value)
    
    if (codigo == 1){
        let conta = (preco * 10) / 100
        let valorfinaaa = preco - conta
        document.getElementById("resultado").textContent = valorfinaaa

    } else if (codigo == 2){
        let desconto = (preco * 5) / 100
        let valorfianl = preco - desconto
        document.getElementById("resultado").textContent = valorfianl

    }else if ( codigo == 3) {
        let aumento = (preco * 10) / 100
        let valorfianl = preco + aumento
        document.getElementById("resultado").textContent = valorfianl

    } else{
        document.getElementById("resultado").textContent ="Erro.... Digite apenas 1, 2 e 3"
    }
}