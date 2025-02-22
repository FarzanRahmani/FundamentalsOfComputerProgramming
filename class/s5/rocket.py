# Divide and Conqure
#char=charactor
def print_char(c, char): # c = count
    for i in range(c):
        print(char, end="") #print by default mire khat bad

# w must be odd
def make_head(w):
    center = int((w+1)/2)
    print(" "*(center-1) + "^")
    for i in range(1,center): # agerange ta center bashe head ro body savar nmishe
        print_char(center-i-1, " ")
        print_char(i, "/")
        print("|", end="")
        print_char(i, "\\")
        print() #baraye khat bad raftan
        
def make_body(w,l):
    for i in range(l):
        print("+" + "*"*(w-2) + "+")
    make_separator(w)

def make_separator(w):
    print("+" + "-"*(w-2) + "+")
        
# w: rocket width
# c: rocket body count
# l: rocket body length
def make_rocket(w,c,l): 
    make_head(w)
    make_separator(w)

    for i in range(c):
        make_body(w,l)

    make_head(w)

make_rocket(11,2,5)