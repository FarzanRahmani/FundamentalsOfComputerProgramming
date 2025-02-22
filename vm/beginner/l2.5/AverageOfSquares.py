
#In it create a function 'average_of_squares0(n) which prints out the  average of squares from 0 to n-1.
#   Use it to print out  average_of_squares0(5) (the output should make the output self-explanatory). 
def average_of_squares0(n): #starts from 0 to n-1
    sum = 0
    for i in range(n):
        sum = sum + i**2
    sum = sum/n
    return sum
print("The average squares of 0 to 4 is",average_of_squares0(5))

def average_of_squares1(n): #starts from 1 to n
    sum = 0
    for i in range(1,n+1):
        sum = sum + i**2
    sum = sum/n
    return sum
print("The average squares of 0 to 4 is",average_of_squares1(4))