#The meaning of the while statement is 

#	1. The condition is checked, if it is false skip the body, the while statement is complete
#	2. Otherwise execute the body
#	3. Go to step 1
for i in range(10):
    print(i)

#Can be achieved with 

i = 0
while(i < 10):
    print(i)
    i = i + 1

#You can also count down, and you can easily make it include the end points if you desire.
#   For example this loop counts down from 10 to 1 inclusive.  

i = 10
while(1 <= i):
    print(i)
    i = i - 1

#But as you can see, it is longer, so it is better style to use the 'for' statement when you can. 



