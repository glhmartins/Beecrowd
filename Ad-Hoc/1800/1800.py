todos, visitados = map(int, input().split())
vistos = list(map(int, input().split()))
for _ in range(todos):
    x = int(input())
    if x not in vistos:
        print(1)
        vistos.append(x)
    else:
        print(0)