n = int(input())
lista = []
for x in range(n):
    lista.append(int(input()))
vistos = []
for y in lista:
    if y not in vistos:
        vistos.append(y)
vistos.sort()
for z in vistos:
    print(f"{z} aparece {lista.count(z)} vez(es)")