# 30 days has Sep,Apr,Jun,and Nov
# all the rest have 31
# except Feb alone,which has 28 daysclear and 29 in each leap year

def is_leap_year(year):
    if year % 400 == 0 :
        return True
    elif (year % 4 == 0) and (year % 100 != 0): #elif == else + if
        return True
    else:
        return False

def days_in_month(year,month_num):
    """Jan = 1 , Feb=2 , ... , Dec = 12"""
    if month_num == 2:
        if is_leap_year(year):
            return 29
        else:
            return 28
    if month_num == 4 :
        return 30
    if month_num == 6  :
        return 30
    if month_num == 9  :
        return 30
    if month_num == 11 :
        return 30
    return 31

print(days_in_month(2021,12))


# Add a function to the Date.py script called 'days_before_date(year, monthNumber, dayNumber) which returns 
# the number of days before that date.  Thus giving days_before_date(2014, 1,1) == 0 and 
# days_before_date(2014, 12, 31) == 364 .
#     Have it print out those two values and confirm they are correct.   

def days_before_date(year, monthNumber, dayNumber):
    sum = 0
    for i in range(1,monthNumber):
        sum += days_in_month(year,i)
    sum += (dayNumber-1)
    return sum

print(days_before_date(2014,1,1))
print(days_before_date(2014,12,31))


def day_of_the_week(year , monthNumber, dayNumber):
    """2014 = year    0=Monday, … 6=Sunday"""
    #first_day_of_2014 =wednesday
    first_day_of_2014 = 2
    sum = 0

    for i in range(1,monthNumber):
        sum += days_in_month(year,i)
    sum += (dayNumber-1)
    # sum = days_before_date(2014 , monthNumber , dayNumber) be jaye khat 55 ta 57
    
    hamnahesht = sum % 7
    first_day_of_2014 += hamnahesht
    return (first_day_of_2014%7)

print(day_of_the_week(2014,4,25))

