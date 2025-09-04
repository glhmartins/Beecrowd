n =int(input())
count = 0
for i in range(n):
    y = input()
    x = list(y)
    for j in range(len(x)):
        if x[j]!= 'a' and x[j]!= 'e' and x[j]!= 'i' and x[j]!= 'o' and x[j]!= 'u' and x[j]!= 'A' and x[j]!= 'E' and x[j]!= 'I' and x[j]!= 'O' and x[j]!= 'U':
            count+=1
            if (count == 3):
                break
        else:
            count = 0
    if count == 3:
        print(f"{y} nao eh facil")
    else:
        print(f"{y} eh facil")
    count = 0