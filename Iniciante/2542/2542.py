while True:
    try:
        n = int(input())
        m, l = map(int, input().split())
        matrizM = []
        matrizL = []
        for i in range(m):
            linha = [int(k) for k in input().split()]
            matrizM.append(linha)
        for j in range(l):
            linha = [int(k) for k in input().split()]
            matrizL.append(linha)
        cm , cl = map(int, input().split())
        cm -= 1
        cl -= 1
        atributo = int(input()) -1
        if matrizM[cm][atributo] > matrizL[cl][atributo]:
            print("Marcos")
        elif matrizM[cm][atributo] == matrizL[cl][atributo]:
            print("Empate")
        else:
            print("Leonardo")
    except EOFError:
        break
