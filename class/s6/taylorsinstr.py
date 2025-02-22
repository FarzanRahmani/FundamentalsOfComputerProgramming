import math 
def taylor_str(n):
    s = ""
    sign = 1
    for i in range(n):
        w = 2*i +1
        sign_str = "+"
        if sign == -1:
            sign_str = "-"
        s = s + sign_str + "x^" + str(w) + "/" + str(w) + "! "
        sign = sign * -1
    return s
if __name__ == "__main__":
    print(taylor_str(8))