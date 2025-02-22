# Create a script called ComputeChange.py that has a method compute_change that takes any number less than 100 
# and returns the number of quarters(25cents), dime(10cents), and nickels(5cents) and pennies(1cent) needed to 
# make change for that number.
#   For example 

# compute_change(8) 

# Will print

#     Create a script called ComputeChange.py that has a method compute_change that takes any number less than 100 and returns the number of quarters, dime, and nickels and pennies needed to make change for that number.  For example 
#            The change from a dollar for 8 cents is
#           3 quarters
#           1 dime
#           1 nickel
#           2 pennies.  

# Hint: break the problem up into pieces, writing code that computes the number of quarters.
#   With what is left compute the number of dimes needed etc.   

# Hint: What does int(X/Y) do?  Is it useful in this case? 

def compute_change(num):
    print("The change from a dollar for {} cents is".format(num))
    change = 100 - num
    print(int(change/25) , " quarter(s)")
    change = change - int(change/25)*25
    print(int(change/10)," dime(s)")
    change = change - int(change/10)*10
    print(int(change/5) , " nickel(s)")
    change = change - int(change/5)*5
    print(change , " pennies")

compute_change(8)
compute_change(45)