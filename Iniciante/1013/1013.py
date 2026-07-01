lista = input().split()
lista_int = []
maior = 0
for x in lista:
    lista_int.append(int(x))
for y in lista_int:
    if y>maior:
        maior = y
print(f"{maior} eh o maior")