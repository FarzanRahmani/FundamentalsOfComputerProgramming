# Compute the maximum of two input numbers
x = float(input("Input X: "))
y = float(input("Input Y: "))

if x > y:
    max = x;
else:
    max = y;
print("The maximum of ", x, " and ", y, " is ", max)

#The else clause is optional, so we could have also written this as follows 
# Compute the maximum of two input numbers
x = float(input("Input X: "))
y = float(input("Input Y: "))

max = y;        # guess that y is bigger than x
if x > y:
    max = x;    # correct the mistake if necessary 
print("The maximum of ", x, " and ", y, " is ", max)
