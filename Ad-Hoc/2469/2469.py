n = int(input())
x = list(map(int,input().split()))
maior = 0
number = 0
for y in range(len(x)):
    if x.count(x[y])>=maior:
        if x.count(x[y])>maior:
            number = x[y]
        elif x.count(x[y]) == maior:
            number = max(number, x[y])
        maior = x.count(x[y])
print(number)