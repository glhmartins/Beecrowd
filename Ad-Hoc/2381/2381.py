n, m = map(int, input().split())
nomes = []
for _ in range(n):
    nomes.append(input())
nomes.sort()
print(nomes[m-1])