#Concatination and Slicing, len, comparision
#etesal , boresh , tool , moghayese

#Review String Literals
#We have already learned in Lesson 2.1: Strings, Print, Comments that you can make string literals by simply enclosing
#  them in double quotes and that r"XXX" allows you to use \  in your strings.  

X = "hello" 
Y = "there"
print(X + " " + Y)

#To make bigger strings out of smaller strings you use the 'slicing' operator [s,e] ( [s:e] ) where s and e are integers. 
#    The idea is that every string can be thought of as an list of characters STARTING AT 0 (in computer science things start at 0, not 1).   Thus if 

s = "hello you"
    # Characters   hello you
    # index        012345678

# Thus e has index 2 and the y has index 6.   Thus

	s[0:5] == "hello"
	
# That is if you take the characters from 0 and STRICTLY LESS THAN 5, you get "hello".   Thus

s[0:1]  == "h"
s[0]  == "h"
s[6:] = "you"
s[0:] == s

#Negative number refer to indexes from the end of the string.  Thus
	s[0:-1] == "hell"

	s[:] == "hello"

#You can get the length of a string with the 'len' function

len("hello") == 5

#Thus 
s[6:] == s[6:len(s)]

"hello" == "hello"
"Hello" != "hello"

#String supports a number of operations that use this new syntax.  The first of these is the 'find' method.  You 
# can do 
s = "hello you"
i = s.find("you")
	
#Will set I to be 6 (the index of the "you" string inside s).It will always find the first such occurrence and will
#  return -1 if it cannot be found.   Thus
s.find("l") == 2
s.find("xxx") == -1
s1 = s.upper()  # new string with every char uppercased.  
s1 = s.lower()  # new string with every char uppercased.

s1 = str(3.5) 	
#s1 will have the value "3.5".  

#Strings are Immutable

#Basically you use {} to leave 'holes' in a string and then fill them in with values.  Often the resulting value is
#  then passed to 'print'   For example
	x = 3
	y = 5.6434
	print("The values X = {} and Y = {}".format(x, y))
	
# Will print 
# The values X = 3 and Y = 5.6434

x = 3
y = 5.6434             #MIN width      #folating point
print("The values X=({:6d}) and Y=({:6.2f})".format(x, y))

# Will print the result (the 123456 was added for clarity)

# The values X=(     3) and Y=(  5.64)
            #   123456         123456
                            
# Basically if you add a ':' the next number is a minimum width(hadahgal arz age value character haye bishtari dashte bashe ham chap mikone chon had aghale),
#  and the string will be padded so it takes up that
#  many characters.  After that is an option '.' number (only for floating point) which indicates how many digits
#  after the decimal point should be printed, and then finally a letter that specifies how you want the item printed.  'd' means 'decimal integer' and 'f' means floating point number.    See String formatting for complete details.

# As you can imagine, having precise control over the formatting of your numbers is very useful, especially when you are trying to make tables (and want it to line up).  



line = "hello there this is a test"
words = line.split()
print(words)

# Will create a list (see next lesson) of strings where each string is a single word.Thus print(words) will print 
# ['hello', 'there', 'this', 'is', 'a', 'test']



