linha = input().split()
N = int(linha[0])
I = int(linha[1])
F = int(linha[2])
valores_n = []
count = 0
if N>=2 and N<=1000 and I>=-2000 and I<=2000 and F>=-2000 and F<=2000:
    valores = input().split()
    for x in valores:
        valores_n.append(int(x))
    if len(valores_n) == N:
        for y in range(len(valores_n)):
            for z in range(1+y,len(valores_n)):
                soma = 0
                soma = valores_n[z]+valores_n[y]
                if soma>=I and soma<=F:
                    count+=1
        print(count)