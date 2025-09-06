N = int(input())
if N>=1 and N<=10**5:
    lista = input().split()
    lista_int = []
    soma_lista = 0
    soma_divisao = 0
    indice = 0
    for x in lista:
        lista_int.append(int(x))
        soma_lista += int(x)
    divisao = soma_lista//2
    for y in range(len(lista_int)):
        soma_divisao += lista_int[y]
        if soma_divisao==divisao:
            indice = y
    print(indice+1)