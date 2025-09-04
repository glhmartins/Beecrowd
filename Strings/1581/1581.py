n = int(input())
for i in range(n):
    lista = []
    m = int(input())
    for j in range(m):
        lingua = input()
        if lingua not in lista:
            lista.append(lingua)
    print(f"{lista[0]}" if len(lista) == 1 else "ingles")