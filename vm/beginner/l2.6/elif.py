#It is not uncommon that you may want to test many mutually exclusive things.
#    For example lets assume we encode the day of the week as an integer where Monday = 0, Tuesday=1, … Sunday=6.
#      Given such a number we might wish to make a function that prints the day as a string.
#    This is where the 'elif' statement comes in.
#     With it we can write our day_of_the_week method as 
def print_day_of_the_week(dayOfTheWeek):
    """prints 'Monday if dayOfTheWeek==0
    prints 'Tuesday if dayOfTheWeek==1 ...
    prints 'Sunday  if dayOfTheWeek==6 ...
    """
    if dayOfTheWeek == 0:
        print("Monday")
    elif dayOfTheWeek == 1:
        print("Tuesday")
    elif dayOfTheWeek == 2:
        print("Wednesday")
    elif dayOfTheWeek == 3:
        print("Thursday")
    elif dayOfTheWeek == 4:
        print("Friday")
    elif dayOfTheWeek == 5:
        print("Saturday")
    elif dayOfTheWeek == 6:  #ag az if estefade koni error mide elif=else if
        print("Sunday")
    else:
        print("Error")

print_day_of_the_week(5)
