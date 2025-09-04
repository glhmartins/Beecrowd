n = int(input())
for _ in range(n):
    frase = ''
    x = input()
    aux = x.split()
    lista = list(aux[0])
    lista2 = list(aux[1])
    for y in range(min(len(lista), len(lista2))):
        frase += lista[y] + lista2[y]
    if len(lista)>len(lista2):
        for i in lista[len(lista2):]:
            frase += i
    elif len(lista)<len(lista2):
        for i in lista2[len(lista):]:
            frase += i
    print(frase)