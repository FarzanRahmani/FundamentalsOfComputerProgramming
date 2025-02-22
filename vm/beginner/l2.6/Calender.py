# Create new script called Calendar, and write a method 'print_month(monthNumber) that given a number
#  between 1 and 12 inclusive it prints the name of the month (Jan, Feb, Mar …)

#Use it to generate a table that shows the month number followed by its name.  



def print_month(monthNumber):
    if monthNumber == 1 :
        return "January"
    elif monthNumber == 2 :
        return "February"
    elif monthNumber == 3 :
        return "March"
    elif monthNumber == 4 :
        return "April"
    elif monthNumber == 5 :
        return "May"
    elif monthNumber == 6 :
        return "June"
    elif monthNumber == 7 :
        return "July"
    elif monthNumber == 8 :
        return 'Auguest'
    elif monthNumber == 9 :
        return 'Septemper'
    elif monthNumber == 10 :
        return 'October'
    elif monthNumber == 11 :
        return 'November'
    elif monthNumber == 12 :
        return 'December'


print("monthNumber","      ","month")
print("-----------------------------")
for i in range(1,13):
    print("   ",i,"           ",print_month(i))