# You should follow proper naming conventions and style.  In particular
# 	• Use descriptive names for you functions (lowercase and use _ to separate words)
# 	• Use # comments at the top to indicate authorship (you can use the template PyScripter generates)
# 	• The only 'action' in the script itself should be a 'main' function.   Everything else should be in a function
# 	• Use triple quote """ comments to give a human readable description to each function.  
# 	• Notice your descriptions show up in the statement completion.  

# # Divide and Conqure
# #char=charactor
# def print_char(c, char):
#     for i in range(c):
#         print(char, end="")

# # w must be odd
# def make_head(w):
#     center = int((w+1)/2)
#     print(" "*(center-1) + "^")
#     for i in range(1,center): # agerange ta center bashe head ro body savar nmishe
#         print_char(center-i-1, " ")
#         print_char(i, "/")
#         print("|", end="")
#         print_char(i, "\\")
#         print()
        
# def make_body(w,l):
#     for i in range(l):
#         print("+" + "*"*(w-2) + "+")
#     make_separator(w)

# def make_separator(w):
#     print("+" + "-"*(w-2) + "+")
        
# # w: rocket width
# # c: rocket body count
# # l: rocket body length
# def make_rocket(w,c,l): 
#     make_head(w)
#     make_separator(w)

#     for i in range(c):
#         make_body(w,l)

#     make_head(w)

# make_rocket(11,2,4)


def cone():
    """rocket head"""
    print(r"    ^ ")
    print(r"   /|\ ")
    print(r"  //|\\ ")
    print(r" ///|\\\ ")

def body():
    print(r"+-------+")
    print(r"+*******+")
    print(r"+*******+")
    print(r"+*******+")
    print(r"+*******+")

def seperator():
    print(r"+-------+")

cone()
body()
body()
body()
seperator()
cone()
