n, m, lin, cols = map(int, input().split())
matriz = []
maior = -1
for l in range(n):
    linha = [int(i) for i in input().split()]
    matriz.append(linha)
for linhas in range(0, n, lin):
    for colunas in range(0, m, cols):
        soma = 0
        for l in range(linhas, linhas+lin):
            for c in range(colunas, colunas+cols):
                soma += matriz[l][c]
        maior = max(maior, soma)
print(maior)