#The key routines to know about are 'random' and 'randrange'

import random

print("A random number between 0 and 1: ", random.random()) #(0,1)
print("A random integer 0, 1, 2 : ", random.randrange(3)) # 0,1,2      
print("A random integer 4, 5 : ", random.randrange(4, 6)) # 4,5         end - 1

print("A random integer 4, 5 : ", random.randint(4, 6)) #tah baze baste ast yani mitone 6 ham bede :4,5,6           end

# The random() function is very straightforward, it gives you back a floating point number 
# between 0 and 1 (it CAN be 0 but CAN'T be 1).   
# If you need integers instead of a floating point number, use 'randrange'.
#   If you give it one number it will generate numbers from 0 up to but not including N.
#    If you give it two numbers it will do the range between them (so in the example above randrange(4, 6) WILL
#  include 4, but NOT 6 (thus just 4 and 5).  

