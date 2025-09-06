n = int(input())
comportada = 0
nao_comportada = 0
nomes = []
for _ in range(n):
    sinal, nome = input().split()
    nomes.append(nome)
    if sinal == "+":
        comportada+=1
    else:
        nao_comportada+=1
nomes.sort()
for x in nomes:
    print(x)
print(f"Se comportaram: {comportada} | Nao se comportaram: {nao_comportada}")