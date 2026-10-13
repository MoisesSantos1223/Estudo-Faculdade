// Atividade 10

a = parseFloat(prompt("Digite o valor de A: "))
b = parseFloat(prompt("Digite o valor de B: "))
c = parseFloat(prompt("Digite o valor de C: "))

delta =  (b ** 2) - (4 * a * c)

x1 = (-b + Math.sqrt(delta)) / (2 * a)
x2 = (-b - Math.sqrt(delta)) / (2 * a)

console.log("x1 =", x1)
console.log("x2 =", x2)