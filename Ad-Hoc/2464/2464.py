alfabeto = "abcdefghijklmnopqrstuvwxyz"
alphabet = list(alfabeto)
lista = list(input())
codificado = list(input())
frase = ""
for x in range(len(codificado)):
    aux = alphabet.index(codificado[x])
    frase +=  lista[aux]
print(frase)