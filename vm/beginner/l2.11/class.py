import math
#	1. A class is given a name (in the example above called 'Point') and has inside it a list of 
# function definitions.

# Every such function has a first argument of 'self'.  This argument is called the object instance of the 
# class.  This argument does not NEED to be called 'self' but it is a strong convention
#  (you will confuse your readers if you don’t follow it).  

class Point:
    def __init__(self, x, y): #There is this weird function call '__init__' that typically comes first in the set
        #of definitions.   This is called a constructor.   Its job it the 'empty' 'self' it is 
        #given and initialize(meghdar dehi avalie) it (in our case with given x and y values).  
        """Creates a new point (x, y)"""
        self.x = x  #This 'self' variable is what is called an OBJECT.      assign = taeeen kardan
        self.y = y  # Objects can have things called PROPERTIES (or fields) that are basically cells with the object
                    #  that can be given names and assigned values.    You use the  OBJECT.PROPERTY_NAME
                    #  syntax to  access them.   They work like other variables in that you can assign them and get
                    #  their value.  The point class above has two fields called 'x' and 'y'.    
                    # The constructor assigns to these fields and the other routines simply access them. 
                    #   Each new object has its OWN set of values for the properties.   Thus different points have
                    #  different x and y values.  

    def add(self, other): #Other than the special 'self' argument, the function definitions are normal.  
                        # However because these function are special (they 'belong' to this class') we call 
                        # them METHODS and as we will see we call them with different syntax.
        """Adds two points componentwise"""
        return Point(self.x + other.x, self.y + other.y)

    def subtract(self, other):
        """Subtracts two points componentwise""" #componentwise=moalefe be moalefe = joz be joz
        return Point(self.x - other.x, self.y - other.y)

    def magnitude(self):
        """Returns the magnitude (square root of component squares)""" #magnitude = ghadre motlagh = meghdar = fasele
        return math.sqrt(self.x * self.x + self.y * self.y)

    def __str__(self): 
        """ prints the point in a nice way"""
        # Three is another weird function called __str__ This function is called by the built in 'str' 
        # function that converts things to strings.   Thus by defining __str__ we have defined what  
        # str(aPoint) does.   Since 'print' calls str() when it prints things, this make points print 
        # the way we wish.  (Notice the output when we print p1 and p2)  line 57
        return "(x={}, y={})".format(self.x, self.y)

#We also notice things about how we use the class
# 1. You make a new INSTANCE of a CLASS by 'invoking' the class name as if it were a function.
#    For example we can create a new Point by the expression Point(1,2).    When you do this two things happen
# 	a. Python makes a new object represent the new point
# 	b. It calls the __init__ function with the new object as the first argument (which becomes 'self')  
# 2. When you call a METHOD you OBJECT.METHOD(ARGS) syntax.    Thus to add two points we call p1.Add(p2). 
#  Python knows to take the thing before the '.' and pass it as the 'self' parameter.   

p1 = Point(3,4)
print("p1 =", p1)
print("p1.x =", p1.x)
print("p1.y =", p1.y)
print("str(p1) =", str(p1))  #age str() nabood nemitonesti ke tyoe koni chon bayad dakhel "" mizashti on vaght dige nemifahmid ke in tabe ro bayad seda bezane
print("p1.magnitude() =", p1.magnitude())
p2 = Point(1,1)
print("p2 =", p2)
print("p1.add(p2) =",  p1.add(p2))
print("p1.subtract(p2) =",  p1.subtract(p2))



#The None Value#

#A rule that python enforces is that you are not allowed to fetch the value of a property (like x or y), 
# until some value is assigned into it.   If you try the Python runtime will cause stop the program with an error.
# Thus it is a VERY GOOD CONVENTION to assign EVERY property you are going to ever use in the __int__ method.
# That way you will never get this 'attribute not found' error at runtime.    
# Sometimes you want to follow this convention, but you don’t have a value to assign to something in the constructor.
# For this  python has a *special value* called 'None' that can be used for this.
# Thus you can assign 'None' to your variables if you have no other suitable value to put there.   

