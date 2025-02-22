def print_cone():
    """prints a cone using ASCII characters"""
    print(r"   ^")
    print(r"  /|\ ")
    print(r" //|\\ ")

def main():
    """prints a cone using ASCII characters""" #hamon comment e
    print_cone()
    print_cone()
    print_cone()

main()

#that after defining print_code, when 'pr' is typed print_cone shows up as a possibility 
# and that it is selected, the description you placed in your triple quote comment is displayed.   Very useful!

def print_n_lines(str, n):
    """Print the 'str' 'n' times one on each line"""
    for i in range(n):
        print(str)
print_n_lines("Hello", 5)

def print_n_times(str, n):
    """Print the 'str' 'n' all on one line
        It does not generate a newline ever.
    """
    for i in range(n):
        print(str, end="") # we pass the 'end' parameter explicitly
print_n_times("Hello", 5)

