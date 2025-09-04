N = int(input())
for x in range(N):
    x, y = map(int, input().split())
    R = (3*x)**2 + y**2
    B = 2*(x**2) + (5*y)**2
    C = -100*x + y**3
    if R>B and R>C:
        print("Rafael ganhou")
    elif B>R and B>C:
        print("Beto ganhou")
    else:
        print("Carlos ganhou")