n = int(input())
alfabeto = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
caso = 1
while n!=0:
    vetor = [int(i) for i in input().split()]
    string = ''
    for i in vetor:
        string += alfabeto[i-1]
        aux = alfabeto.pop(i-1)
        alfabeto.insert(0, aux)
    print(f"Instancia {caso}\n{string}\n")
    n = int(input())
    caso += 1
    alfabeto = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
