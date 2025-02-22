
mystr = "salam,chetory,man,khoobam,ali,chetore"
#      0123456789
nums = [5, 2, 3 ]

#for n in nums:
#    print(n) 

#for s in str:
#    print(s)

#if str.find("ali") != -1:
#    print("found")

#tokens = str.split(",")
#for tok in tokens[2:]: #2:  == 2 be bad
#    print("first token is " + tok)

for i in range(50):
    k = 1 * i
    f_str = "{:" + str(k) + "}"
    mystr = f_str.format(i)
    print(mystr, end="")
    if (i + 1) % 5 == 0:
        print()

gpa = 17.234234
print("this is you GPA: {:15.2f}".format(gpa))
                        #15 ta ja begire    .2f = 2ragham aashar