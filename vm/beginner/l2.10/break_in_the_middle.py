# echo numbers until a negative number is encountered
while(True):
    x = float(input("Enter a number (-1 to end): ")) #mishe akharesh ; gozasht
    if (x < 0):break #mishe akharesh ; gozasht
    print(x)

#This code keeps prompting for input until a negative number is reached.
#   Notice that we use 'True' for the condition which would normally cause an infinite loop, but we insert an 'if' with a 'break' which causes it to break in the middle.  

#Note that the break statement works in for the 'for' loop as well.
#    In addition a 'return' statement will also break out of any loop as part of leaving the current function.  

