N,M = map(int, input().split())
count = 1
while N>=0 and N<=10000 and M>=1 and M<=N:
    lista = []
    aux = []
    soma = 0
    condition = 0
    for x in range(N):
        z = int(input())
        aux.append(z)
        soma += z
        condition+=1
        if condition == M:
            lista.append(soma)
            soma -= aux[0]
            condition-=1
            aux.pop(0)
    print(f"Teste {count}")
    print(f"{int(min(lista)/M)} {int(max(lista)/M)}")
    print()
    count+=1
    N, M = map(int, input().split())