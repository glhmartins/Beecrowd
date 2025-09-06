N,M = map(int, input().split())
if N>=1 and N<=100 and M>=1 and M<=100:
    coluna = [0] * M
    linha = [0] * N
    maior = 0
    for x in range(N):
        lista = input().split()
        for y in range(len(lista)):
            linha[x] += int(lista[y])
            coluna[y] += int(lista[y])
    maior = max(coluna) if max(coluna)>=max(linha) else max(linha)
    print(maior)