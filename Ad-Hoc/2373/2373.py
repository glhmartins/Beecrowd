N = int(input())
analise_l = []
analise_c = []
L = []
C = []
copos_quebrados = 0
if N>=1 and N<=100:
    for x in range(N):
        bandeja = input().split()
        analise_l.append(int(bandeja[0]))
        analise_c.append(int(bandeja[1]))
    for y in range(len(analise_c)):
        if analise_l[y]>=1 and analise_l[y]<=100 and analise_c[y]>=1 and analise_c[y]<=100:
            L.append(int(analise_l[y]))
            C.append(int(analise_c[y]))
    for z in range(len(L)):
        if L[z] > C[z]:
            copos_quebrados += C[z]
    print(copos_quebrados)