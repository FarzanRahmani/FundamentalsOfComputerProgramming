def maghloob(number):
    temp = number
    result = 0
    while temp > 0 :
        result = result*10 + temp%10
        temp = temp // 10
    return number == result

