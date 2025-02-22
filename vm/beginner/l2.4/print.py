for i in range(10):
    print("hello ", end="") #end is by default new line
print( "\n" )
def print_n_times(str, n=1):#The fact that we supply a default value  with the =1 means that that argument is now optional.
    print(str)

print_n_times("Hello", 5)
print_n_times("Hello", n=5)
print_n_times(str="Hello", n=5)
print_n_times("hello")
#Declaring Optional and Named parameters