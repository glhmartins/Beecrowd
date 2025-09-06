N = int(input())
count = 0
lista_sequencia = []
sequencias = 0
ultimo_valor = 0
if N>=3 and N<=500:
    while count<N:
        sequencia = int(input())
        if sequencia>=1 and sequencia<=N:
            lista_sequencia.append(sequencia)
        count+=1
for x in lista_sequencia:
    if x!=ultimo_valor:
        ultimo_valor = x
        sequencias+=1
print(sequencias)