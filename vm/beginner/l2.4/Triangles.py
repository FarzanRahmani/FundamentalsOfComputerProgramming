def print_left_triangle(base):
    """prints an ASCII art right triangle of starts which grows 
        to 'base' stars.   For example print_left_triangle(3) prints
       *
       **
       ***
    """
    for i in range(base):
        print("*"*(i+1))

print_left_triangle(20)


def print_left_triangle1(base,char):
    for i in range(base):
        print( char*(i+1) )

print_left_triangle1(20,"$") #age "" nazari kar nmikone





def print_right_triangle(base):
    for i in range(20):
        print(" "*(base - i-1) , "*"*(i+1))

print_right_triangle(20)



