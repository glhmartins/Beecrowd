N = int(input())
if N>=1 and N<=500000:
    linha = input().split()
    P = int(linha[0])
    C = linha[1]
    Q = int(linha[2])
    X = 0
    Y = 0
    if P>=0 and P<=1000 and Q>=0 and Q<=1000 and C== "+" or C== "*":
        if C == "+":
            X = P+Q
            if X>N:
                print("OVERFLOW")
            else:
                print("OK")
        if C == "*":
            Y=P*Q
            if Y>N:
                print("OVERFLOW")
            else:
                print("OK")