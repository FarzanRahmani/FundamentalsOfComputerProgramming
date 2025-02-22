import matplotlib.pyplot as plt
import math


def equation(a,b,c):
    delta = math.pow(b,2) - (4*a*c)
    if delta < 0 :
        return 0
    if(delta==0):
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
            return result1
        else: #mitonesti else nazari
            return result2
    




