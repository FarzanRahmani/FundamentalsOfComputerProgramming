# Part8: Write a script called stats.py that prompts the user for numbers (floats) one per line until
#  -1 is inputted.   When that happens the program prints various stats of the numbers 
# 	1. The number of entries
# 	2. The average
# 	3. The minimum
#   4. The maximum
sum = 0
The_number_of_entries = 0
max = -1
min = -1
while True:
    x = float(input("please enter a number , -1 to finish "))

    sum = sum + x

    The_number_of_entries = The_number_of_entries + 1

    The_average = sum / The_number_of_entries

    if x > max :
        max = x

    if x < min :
        min = x

    if x == -1:
        break


print("1. The number of entries is" , The_number_of_entries )
print("2. The average is" ,The_average )     
print("3. The minimum is" ,min )
print("4. The maximum is" ,max )    
