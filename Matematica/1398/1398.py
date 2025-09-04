def concatena():
    vet = []
    while True:
        aux = list(input())
        if aux[-1] == "#":
            aux.pop(-1)
            vet.append(aux)
            break
        vet.append(aux)
    aux = ""
    for i in vet:
        for j in i:
            aux += j
    n = int(aux,2)
    return n

while True:
    try:
        n = concatena()
        print("YES" if (n % 131071 == 0) else "NO")
    except EOFError:
        break