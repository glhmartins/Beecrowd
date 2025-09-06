linha = input().split()
Alcool_int = float(linha[0])
Gasolina_int = float(linha[1])
RendimentoA_int = float(linha[2])
RendimentoG_int = float(linha[3])
A = round(Alcool_int,2)
G = round(Gasolina_int,2)
Km_A = round(RendimentoA_int,2)
Km_G = round(RendimentoG_int,2)
Litros_A = 0
Litros_G = 0
if A>=0.01 and A<=10.00 and G>=0.01 and G<=10.00 and Km_A>=0.01 and Km_A<=20.00 and Km_G>=0.01 and Km_G<=20.00:
    if A!=G and Km_A==Km_G:
        if A>G:
            print("G")
        else:
            print("A")
    if A==G and Km_A==Km_G:
        print("G")
    if A==G and Km_A!=Km_G:
        if Km_A>Km_G:
            print("A")
        else:
            print("G")
    if A!=G and Km_A!=Km_G:
        Alcool = Km_A/A
        Gasolina = Km_G/G
        if Alcool>Gasolina:
            print("A")
        else:
            print("G")