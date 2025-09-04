nome = input()
da, ma, aa = map(int, input().split("/"))
dn, mn, an = map(int, input().split("/"))
if da == dn and ma == mn:
    print("Feliz aniversario!")
    print(f"Voce tem {aa-an} anos {nome}.")
elif ma > mn:
    print(f"Voce tem {aa-an} anos {nome}.")
elif ma == mn and da>dn:
    print(f"Voce tem {aa - an} anos {nome}.")
else:
    print(f"Voce tem {aa - an - 1} anos {nome}.")