# Add to your MyAsciiArg.py program.   Write a method print_cone(baseSize) which prints a rocketShip cone of
#  a certain size.   The number  given to the routine must be odd. 
#  For example print_cone(7) will yield the following cone 

#      ^      
#     /|\     
#    //|\\    
#   ///|\\\   
def print_cone(base):
    space = int(base/2)
    print(" "*space + "^")
    space = space - 1
    for i in range(space + 1):
        print(" "*space + "/"*(i+1) + "|" + "\\"*(i+1))
        space = space - 1
#print_cone(7)

#much better
def make_head(w):
    center = int((w+1)/2)
    print(" "*(center-1) + "^")
    for i in range(1,center-1):
        print(" "*(center-1-i) + "/"*i + "|" + "\\"*i)


for i in range(1,10,2):
    print_cone(i)