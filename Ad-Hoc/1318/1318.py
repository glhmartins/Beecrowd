n,m = map(int, input().split())
while n != 0 and m !=0:
    iguais = 0
    vistos = []
    bilhetes = [int(i) for i in input().split()]
    x = set(bilhetes)
    for i in x:
        if i in bilhetes:
            bilhetes.remove(i);
    y = set(bilhetes)
    print(len(y))
    n,m = map(int, input().split())