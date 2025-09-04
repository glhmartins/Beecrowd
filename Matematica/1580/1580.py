from math import factorial

def repetidos(vet):
    count = 0
    fat_rep = 1
    alfabeto = list("ABCDEFGHIJKLMNOPQRSTUVXWYZ")
    for i in alfabeto:
        for j in vet:
            if j==i:
                count+=1
        fat_rep *= factorial(count)
        count = 0
    return fat_rep

while True:
    try:
        i = list(input())
        j = factorial(len(i))//repetidos(i)
        print(f"{j%1000000007:.0f}")
    except EOFError:
        break