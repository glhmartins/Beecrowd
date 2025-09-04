while True:
    try:
        n = int(input())
        lista = []
        for i in range(n):
            lista.append(input())
        lista.sort()
        for j in lista:
            print(j)
    except EOFError:
        break