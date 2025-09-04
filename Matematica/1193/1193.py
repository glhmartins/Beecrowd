n = int(input())
for x in range(1,n+1):
    numero, base = input().split()
    if base == "bin":
        print(f"Case {x}:")
        print(f"{int(numero,2)} dec")
        print(f"{hex(int(numero,2)).lstrip('0x')} hex")
        print()
    elif base == "dec":
        print(f"Case {x}:")
        print(f"{hex(int(numero)).lstrip('0x')} hex")
        print(f"{bin(int(numero)).lstrip('0b')} bin")
        print()
    else:
        print(f"Case {x}:")
        print(f"{int(numero, 16)} dec")
        print(f"{bin(int(numero, 16)).lstrip('0b')} bin")
        print()