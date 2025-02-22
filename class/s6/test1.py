import math
import mathfunctions
def taylorsin(x,n):
    sum = 0
    sign = 1
    for i in range(n):
        w = 2*i + 1
        sum = sum + sign * (x**w) / mathfunctions.factorial(w)
        sign = sign* -1
    return sum
for i in range(1,5): #age i=0 bashe aslan vared halghe nmishe va 0 tolid mikone
    print(taylorsin(math.pi/6,i))
    print(taylorsin(math.pi/6,i) - math.sin(math.pi/6) ) #khata

#ravesh digar
for i in range(1,5):
    diff = taylorsin(math.pi*7/6,i) - math.sin(math.pi*7/6 ) #pi*7/6 == pi + pi/6
    print(abs(diff))

for i in range(1,5):
    v1 = taylorsin(math.pi*7/6,i)
    v2 = math.sin(math.pi*7/6 )
    print(abs(v1 - v2))