n = int(input())
for _ in range(n):
    kg = int(input())
    dias = 0
    while kg>1:
        kg /= 2
        dias+=1
    print(f"{dias} dias")