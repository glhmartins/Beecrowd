def fatorial(x):
    if x<=1:
        x = 1
    else:
        x *= fatorial(x-1)
    return x
while True:
    try:
        n1, n2 = map(int, input().split())
        n1 = fatorial(n1)
        n2 = fatorial(n2)
        print(n1+n2)
    except EOFError:
        break