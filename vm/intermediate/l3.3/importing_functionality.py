# print(sin(pi))

# It would fail, saying that both 'pi' and 'sin' are undefined.   In truth both variables are in the python library
#  but they are 'in' a module called 'math'.     The 'import' statement tells Python that you want to use them.  

import math         # I want to use the 'math' module

print(math.sin(math.pi))   # use the sin function and pi variable

# Notice that the 'sin' function is not called just 'sin' but 'math.sin'..   
# That is to refer to something in a modules you have to give the module name followed by the name within the module.
#    This is so that different modules can use the same name over again (for sin that is unlikely, but for names
#  like 'open' or 'close', 'new', 'get', etc collisions are frankly very likely).  





# Now typing 'math.' in front of everything can get old, so there is a way of avoiding that.   If instead of typing just 'import math' we use the 'from math import *' we can use sin and pi without prefixing.  

from math import *
print(sin(pi))

# So what the 'from X import *' does is to take all the names in X and define them locally.    This is nice because you don't have to prefix things with their module name, however it has two significant disadvantages

# 	1. If you are dealing with multiple modules, the likelihood of a collision (two modules defining the same name) is high.  If that happens the last one 'wins'.  
# 	2. While the short names are nice, they don't distinguish the fact that these names are NOT your code.  Thus the code gets harder to read.   

