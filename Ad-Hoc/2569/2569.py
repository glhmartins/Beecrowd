a, operador ,c = input().split()
a = list(a)
c = list(c)
y = ""
z = ""
for l in range(len(a)):
    if a[l] == "7":
        a[l] = "0"
    y += a[l]
for k in range(len(c)):
    if c[k] == "7":
        c[k] = "0"
    z += c[k]
if operador == "+":
    x = int(y) + int(z)
else:
    x = int(y)*int(z)
x = list(str(x))
for i in range(len(x)):
    if x[i] == "7":
        x[i] = "0"
number = ""
for j in x:
    number+=j
print(int(number))