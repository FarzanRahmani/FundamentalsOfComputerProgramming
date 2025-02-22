def factorial(n):
    product = 1
    for i in range(1,n+1):
        product = product * i
    return product
#test kardan function

assert factorial(4)==24 #assert=motmaen bash
assert factorial(0)==1
#bejaye assert mitavan az if estefade kard
if factorial(4) != 24 :
    print("Error incorrect factorial")
if __name__ == "__main__": #vaghti barnameye ejraee hamin mathfunctions bashe  (vaghti dare file test esh ro ejra mikone dige vared in nemishe)
    print(factorial(20))
    assert factorial(3) == 6