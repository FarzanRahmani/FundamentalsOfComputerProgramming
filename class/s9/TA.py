import matplotlib.pyplot as plt
import math
def equation(a,b,c):
    delta = math.pow(b,2) - (4*a*c)
    if delta < 0 :
        return 0 #or return None
    if(delta==0):           #square root
        result = (-1*b+math.sqrt(delta))/(2*a)
        return result
    if delta>0 :
        results = []
        result1 = (-1*b+math.sqrt(delta))/(2*a)
        result2 = (-1*b-math.sqrt(delta))/(2*a)
        results.append(result1)
        results.append(result2)
        plt.stem(results) #plot=peyvaste    stem=gosaste    khodesh x ro khone haye [list] migire y ro az ma
        plt.show()
        if result1 > result2 :
            return result1 #return (result1,result2)
        else: #mitonesti else nazari
            return result2
equation(1,0,-1)
print(equation(1,2,1))

def khod_maghloob(number):
    temp = number
    result = 0
    while temp > 0 :
        result = result*10 + temp%10 #ragham yekane temp
        temp = temp // 10 #taghsim sahih baghi manda ro mizane
    return number == result
print(khod_maghloob(121))
print(khod_maghloob(654))
print(khod_maghloob(44444))
print(khod_maghloob(5454))


