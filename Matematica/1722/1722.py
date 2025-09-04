def preenche_vet():
    vet = [0] * 500
    vet[0] = 1
    vet[1] = 2
    for i in range(2,len(vet)):
        vet[i] = vet[i-1] + vet[i-2]
    return vet

a,b = map(int, input().split())
vet = preenche_vet()
count = 0
while a!=0 or b!=0:
    for i in vet:
        if i>=a and i<=b:
            count+=1
        elif i>b:
            break
    print(count)
    count = 0
    a, b = map(int, input().split())
