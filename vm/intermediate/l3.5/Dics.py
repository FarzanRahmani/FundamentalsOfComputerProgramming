#Mapping things (typically strings) too other data

months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]

# This implicitly maps 0 -> "Jan", 1 -> "Feb",  …  for example if I  Have 

monthNum = 2  # means March

# I can convert it to a string by doing

print(months[monthNum])

#You can define a new dictionary with the {} like so

toMonthNum = { "Jan":0, "Feb":1, "Mar":2, "Apr":3, "May":4, "Jun":5,
                "Jul":7, "Aug":7, "Sep":8, "Oct":9, "Nov":10, "Dec":11 }

#As you can see a dictionary is a list of pairs (each pair separated by a ':').
#Once defined, you can look up using the [] operators.   Thus I can look up 'Feb' 
print("Feb =", toMonthNum["Feb"])  # looking up the key "Feb" in dictionary.   
#And it will print 
Feb = 1

#You can also add new keys:value pairs using the [] syntax.   For example I could also add entries like this
fullNames = {}                  # define an empty map
fullNames["January"] = 0;       # add an entry to the map
fullNames["February"] = 1;      # and another .. 
# ...
print(fullNames["February"])    # use the entries I built up.  

#The 'keys()' method returns a list of all the keys in a dictionary, which you can then use with the for statement for example

for key in toMonthNum.keys():
    print("month {} = {}".format(key, toMonthNum[key]))
# will print 
# month Jul = 7
# month Sep = 8
# month Jun = 5
# month Mar = 2
# month Jan = 0
# month Dec = 11
# month May = 4
# month Nov = 10
# month Aug = 7
# month Feb = 1
# month Apr = 3
# month Oct = 9
# #Notice that the order is NOT preserved (it is effectively random).  

# If you need them sorted you can do that as well but we will save that for later.
# If you wish to sort the elements in the dictionary you can use the 'sorted' method which sorts a list 
for key in sorted(toMonthNum.keys()):
    print("month {} = {}".format(key, toMonthNum[key]))
#Will print
# month Apr = 3
# month Aug = 7
# month Dec = 11
# month Feb = 1
# month Jan = 0
# month Jul = 7
# month Jun = 5
# month Mar = 2
# month May = 4
# month Nov = 10
# month Oct = 9
# month Sep = 8
#Which is sorted by key (alphabetically).  

#Proving Keys from a Dictionary
#If you wish to just detect if a key is present you can use the 'in' operator.  
print("Jan" in toMonthNum)
# Prints
# True
print("X" in toMonthNum)
# Prints
# False

# Removing Keys from a Dictionary
# You can remove an item in a dictionary with the pop method.  
toMonthNums.pop("Feb")
for key in toMonthNum.keys():
    print("month {} = {}".format(key, toMonthNum[key]))
# Will now be missing February. 


# Sorting by key value
# You can sort by any way that you wish by making a function that maps the key to what you want to sort by.For example
# if we want to sort by the month number rather than the month name you can do this by defining a function that 
# takes a key (e.g. 'Aug') and returns a value that you should sort it by (e.g. 7).Here we define a function called
#  'toMonthNumber' that takes a key and returns the month number. 
#   tabe          moteghyer=x
def toMonthNumber(monthName): 
    return toMonthNum[monthName];
#           dictionary    x
# Armed with this function you can pass it as the 'key' parameter to 'sorted' and the routine will assume the 
# 'value' to sort by is what is returned from this function.   Thus the code 
#                 dictionary             function
for key in sorted(toMonthNum.keys(), key=toMonthNumber):
    print("month {} = {}".format(key, toMonthNum[key]))
# Which prints 
# month Jan = 0
# month Feb = 1
# month Mar = 2
# month Apr = 3
# month May = 4
# month Jun = 5
# month Jul = 7
# month Aug = 7
# month Sep = 8
# month Oct = 9
# month Nov = 10
# month Dec = 11
# Which was our goal.  


#Lambda Expressions
#Python gives a 'shortcut' syntax for defining functions without giving them a name called 'lambda'.Its general sytnax is
lambda ARGS: EXPRESSION
#For example           dictionary
tomonthNum = lambda x: toMonthNum[x]
#Does exactly what 
def toMonthNumber(monthName): 
    return toMonthNum[monthName]
#Does, namely create a function with one argument (montName) that returns a value (toMonth[monthName)) and give that 
#function a name called 'toMonthNum'.Notice however, that lambdas are optimized so you don't need to put the () around
#the arguments (you can have several if you wish however), and you DON'T use return to return a value (you only have
# one value to return.  Lambdas are meant for 'short' functions that do very little, (and thus many not deserve having
#  a name).   We can use a lambda here to make the sorting more concise.Instead of defining a method using 'def' we
#  define it 'on the spot' using a lambda expression and never even give it a name.   
for key in sorted(toMonthNum.keys(), key=lambda name: toMonthNum[name]):
    print("month {} = {}".format(key, toMonthNum[key]))





