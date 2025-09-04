N = list(input())
lista_vogais = []
for x in N:
    if x == "a" or x=="e" or x=="i" or x=="u" or x=="o":
        lista_vogais.append(x)
if len(lista_vogais) == 0:
    print("N")
lista_invertida = lista_vogais[::-1]
if lista_invertida == lista_vogais:
    print("S")
else:
    print("N")