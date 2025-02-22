import math #library
import taylorsin #file in the same directory

i = 0 
while taylorsin.taylorsin(math.pi/2,i) != math.sin(math.pi/2):
    i = i +1
print(i)

j = 0
while taylorsin.taylorsin(math.pi/6,j) != math.sin(math.pi/6):
    j = j + 1
print(j)

x = 0  
while taylorsin.taylorsin(math.pi,x) != math.sin(math.pi) :
    x = x + 1
print(x)