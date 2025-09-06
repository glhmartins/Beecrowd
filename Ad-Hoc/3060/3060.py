V = int(input())
P = int(input())
if V>=10 and V<=1000 and P>=2 and P<=18:
    divisao = V//P
    resto = V%P
    if resto == 0:
        for _ in range(P):
            print(f"{divisao:.0f}")
    else:
        for x in range(resto):
            print(f"{divisao+1:.0f}")
        for y in range(resto+1,P+1):
            print(f"{divisao:.0f}")