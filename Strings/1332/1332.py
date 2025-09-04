n = int(input())
for _ in range(n):
    numero = list(input())
    um = ["o","n","e"]
    letters = 0
    if len(numero) == 5:
        print(3)
    elif (numero[0] == "o" and numero[1] == "n") or (numero[0] == "o" and numero[2] == "e") or (numero[1] == "n" and numero[2] == "e"):
        print(1)
    else:
        print(2)