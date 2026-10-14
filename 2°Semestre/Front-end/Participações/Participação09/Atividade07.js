//Atividade 07
//OBJ: Descobrir a idade do usario

nome = prompt("Digite o seu nome: ")
anonasc = parseInt(prompt("Digite o seu ano de nascimento: "))
anoatual = parseInt(prompt("DIgite o ano atual: "))

idade = anoatual - anonasc

alert(idade)

console.log("Olá "+ nome)
console.log("Sua idade é: "+idade)