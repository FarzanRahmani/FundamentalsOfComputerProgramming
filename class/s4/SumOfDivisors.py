def SumOfDivisors(number):
    sum = 0
    for i in range(1,number+1):
        if number % i == 0 :
            sum = sum + i
    return sum

for num in range(30,41):
    print(SumOfDivisors(num))