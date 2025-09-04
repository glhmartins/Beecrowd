voo = input().split()
lista = []
condition = 0
for x in range(len(voo)):
    l = voo[x].split(":")
    lista.append(int(l[0])*60 + int(l[1]))
pa = lista[0]
cb = lista[1]
pb = lista[2]
ca = lista[3]
if pa>cb and pb>ca:
    cb+=1440
    condition = 1
voo1 = cb-pa
voo2 = ca-pb
if voo1<0:
    voo1+=1440
    condition = 1
elif voo2<0:
    voo2+=1440
    condition = 1
tempo = (voo1+voo2)/2
if tempo<0:
    tempo+=720
elif tempo>=720:
    tempo-=720
fuso = voo1-tempo
if fuso>720 and condition == 0:
    fuso-=720
elif fuso<=-720 and condition == 0:
    fuso+=720
if fuso>720 and condition == 1:
    fuso-=1440
elif fuso<=-720 and condition == 1:
    fuso+=1440
print(f"{tempo:.0f} {fuso/60:.0f}")