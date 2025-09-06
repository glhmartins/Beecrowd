import math
x1,y1,x2,y2 = map(int, input().split())
cruzamentos = math.fabs(x2-x1) + math.fabs(y2-y1)
print(int(cruzamentos))