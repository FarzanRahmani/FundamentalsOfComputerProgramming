# Create a new script MoreAsciiiArt.py and modify the print_left_triangle to print * on even rows 
# and % on odd rows thus print_left_triangle(4) will print

# %
# **
# %%%
# ****

# Use it to generate a triangle that is 10 characters at its base.  

def print_left_triangle(x):
    for i in range(1,x+1):
        if i % 2 == 1:
            print("%"*i)
        else:
            print("*"*i)
print_left_triangle(10)

#char=charactor
def print_char(c, char):
    for i in range(c):
        print(char, end="")

# w must be odd
def print_cone(baseSize):
    center = int((baseSize+1)/2)
    print(" "*(center-1) + "^")
    for i in range(1,center): # agerange ta center bashe head ro body savar nmishe
        print_char(center-i-1, " ")
        print_char(i, "/")
        print("|", end="")
        print_char(i, "\\")
        print()

print_cone(7)

for i in range(1,10,2):
    print_cone(i)