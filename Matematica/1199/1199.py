n = input()
while n!="-1":
    if "0x" in n:
        print(int(n,16))
    else:
        x = hex(int(n)).upper()
        y = "0x"
        print(y + x.lstrip("0X"))
    n = input()