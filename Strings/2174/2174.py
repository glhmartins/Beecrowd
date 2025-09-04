n = int(input())
lista = []
for i in range(n):
    p = input()
    if p not in lista:
        lista.append(p)
print(f"Falta(m) {151-len(lista)} pomekon(s).")