R = int(input(),16)
G = int(input(),16)
B = int(input(),16)
max = int("ffffff",16)
if R>=1 and G>=1 and B>=1 and R<=max and G<=max and B<=max:
    quantidade = 0
    if R>=G:
        quantidade = (R//G)**2
        if G>=B:
            quantidade += ((G//B)**2) * quantidade
    print(hex(quantidade+1).strip("0x"))