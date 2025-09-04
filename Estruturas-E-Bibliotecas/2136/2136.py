n = input()
inimigos = []
amigos = []
amigo = ""
letras = 0
while n!="FIM":
    x = n.split()
    if x[0] not in inimigos and x[1] == "NO":
        inimigos.append(x[0])
    if x[0] not in amigos and x[1] == "YES":
        amigos.append(x[0])
    n = input()
for i in amigos:
    if len(i)>letras:
        letras = len(i)
        amigo = i
inimigos.sort()
amigos.sort()
for y in amigos:
    print(y)
for z in inimigos:
    print(z)
print()
print("Amigo do Habay:")
print(amigo)