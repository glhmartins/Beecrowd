def soma_lista(lista):
    maior_atual = 0
    best = 0
    tmp_inicio = 0
    inicio = fim = -1
    for i in range(len(lista)):
        if maior_atual + lista[i] >= lista[i]:
            maior_atual += lista[i]
        else:
            maior_atual = lista[i]
            tmp_inicio = i
        if maior_atual >= best and maior_atual!=0:
            best = maior_atual
            inicio = tmp_inicio
            fim = i
    if best < 0:
        inicio = fim = -1
    return inicio, fim

n = int(input())
count = 1
while n!=0:
    saldo = []
    for i in range(n):
        x,y = map(int,input().split())
        saldo.append(x-y)
    x,y = soma_lista(saldo)
    x = x + 1
    y = y + 1
    if x != 0 and y!=0:
        print(f"Teste {count}\n{x} {y}\n")
    else:
        print(f"Teste {count}\nnenhum\n")
    count+=1
    n = int(input())