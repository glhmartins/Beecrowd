n = int(input())
for _ in range(n):
    number = list(input())
    leds = 0
    for x in number:
        if x == '0':
            leds += 6
        elif x == '1':
            leds += 2 
        elif x == '2':
            leds += 5 
        elif x == '3':
            leds += 5 
        elif x == '4':
            leds += 4 
        elif x == '5':
            leds += 5 
        elif x == '6':
            leds += 6 
        elif x == '7':
            leds += 3
        elif x == '8':
            leds += 7
        else:
            leds += 6
    print(f"{leds} leds")