N = int(input())
valores = []
gramas = []
valores_minimo = []
menor_valor = 0
if N>=1 and N<=100:
    for x in range(N):
        linha = input().split()
        P = float(linha[0])
        G = int(linha[1])
        if P>0 and P<=1000 and G>=1 and G<=1000:
            valores.append(P)
            gramas.append(G)
for y in range(len(gramas)):
    menor_valor = valores[y]/gramas[y]
    valores_minimo.append(menor_valor)
mais_barato = valores_minimo[0]
for z in range(len(valores_minimo)):
    if mais_barato>valores_minimo[z]:
        mais_barato = valores_minimo[z]
    kg = mais_barato * 1000
print('%.2f' %kg)