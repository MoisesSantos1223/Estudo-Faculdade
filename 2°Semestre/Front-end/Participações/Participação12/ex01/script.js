function media() {
    let valor = parseFloat(document.getElementById("valor").value)
    let parcelas = parseInt(document.getElementById("parcelas").value)
    let juros

    if (parcelas == 1) {
        juros = 0
    } else if ( parcelas == 2) {
        juros = 3
    } else if (parcelas == 4) {
        juros = 7
    }else{
        document.getElementById("valorTotal").textContent = "Apenas 1, 2 ou 4 parcelas"
        return
    }

    let valorJuros = (valor * juros) / 100
    let valorTotal = valor + valorJuros
    let valorParcelas = valorTotal / parcelas

    // toFixed(2) mostra qunatas casa decimas vai ser exibido
    document.getElementById("valorTotal").textContent = valorTotal.toFixed(2)
    document.getElementById("valorParcelas").textContent =valorParcelas.toFixed(2)
}