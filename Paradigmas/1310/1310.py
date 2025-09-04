def soma_lista(lista):
    maior_atual = maior = lista[0]
    for i in lista[1:]:
        maior_atual = max(i, maior_atual+i)
        maior = max(maior, maior_atual)
    return maior

while True:

    try:
        n = int(input())
        cd = int(input())
        lista = []
        for i in range(n):
            lista.append(int(input())-cd)
        maior = soma_lista(lista)
        print(0 if maior<=0 else maior)

    except EOFError:
        break