n = int(input())
for _ in range(n):
    elements = input().split()
    to_print = []
    for x in elements:
        if x not in to_print:
            to_print.append(x)
    to_print.sort()
    z = ""
    for y in to_print:
        z += y + " "
    print(z.strip())