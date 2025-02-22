# The big difference between a ARRAY and a list is lists can change their size at any time.
# Basic List Operations

myList = [3, 8, 5]
print(myList)
# Prints 
# [3, 8, 5]

myList = [3, 8, 5]
for elem in myList:
    print("Elem ", elem)
# Will print
# Elem  3
# Elem  8
# Elem  5

myList = [3, 8, 5]
print("Len = ", len(myList))

myList[0] == 3
myList[1] == 8
myList[2] == 5

# Concatenation and Slicing
# you can concatenate lists with the + operator.  

myList1 = [3, 8, 5]
myList2 = [2, 4, 6]
both = myList1 + myList2
print(both)

# prints
# [3, 8, 5, 2, 4, 6]

# And all the slicing operators [:] work on lists as they did on strings.   Thus 
both = [3, 8, 5, 2, 4, 6]
both[2:4]== [5,2]           # pull out 3rd and forth element (index 2)
both[1:] == [8, 5, 2, 4, 6] # remove the first element
both[:-1]== [3, 8, 5, 2, 4] # remove the last element 


#Mutating lists
# The list data type has some more methods. Here are all of the methods of list objects:

# list.append(x)
# Add an item to the end of the list; equivalent to a[len(a):] = [x].

# list.extend(L)
# Extend the list by appending all the items in the given list; equivalent to a[len(a):] = L.

# list.insert(i, x)
# Insert an item at a given position. The first argument is the index of the element before which to insert, so a.insert(0, x) inserts at the front of the list, and a.insert(len(a), x) is equivalent to a.append(x).

# list.remove(x)
# Remove the first item from the list whose value is x. It is an error if there is no such item.

# list.pop([i])
# Remove the item at the given position in the list, and return it. If no index is specified, a.pop() removes and returns the last item in the list. (The square brackets around the i in the method signature denote that the parameter is optional, not that you should type square brackets at that position. You will see this notation frequently in the Python Library Reference.)

# list.index(x)
# Return the index in the list of the first item whose value is x. It is an error if there is no such item.

# list.count(x)
# Return the number of times x appears in the list.

# list.sort(cmp=None, key=None, reverse=False)
# Sort the items of the list in place (the arguments can be used for sort customization, see sorted() for their explanation).

# list.reverse()
# Reverse the elements of the list, in place.

# An example that uses most of the list methods:

# >>> a = [66.25, 333, 333, 1, 1234.5]
# >>> print a.count(333), a.count(66.25), a.count('x')
# 2 1 0
# >>> a.insert(2, -1)
# >>> a.append(333)
# >>> a
# [66.25, 333, -1, 333, 1, 1234.5, 333]
# >>> a.index(333)
# 1
# >>> a.remove(333)
# >>> a
# [66.25, -1, 333, 1, 1234.5, 333]
# >>> a.reverse()
# >>> a
# [333, 1234.5, 1, 333, -1, 66.25]
# >>> a.sort()
# >>> a
# [-1, 1, 66.25, 333, 333, 1234.5]
# >>> a.pop()
# 1234.5
# >>> a
# [-1, 1, 66.25, 333, 333]


#List and Tuples 
#In your own code, generally you can simply use lists for your collections, but Python has another structure 
#  that is very much like Lists called Tuples.   The main syntatic difference is you use () instead of [] to 
# create them.  For example, you can create a 3 tuple like this

myList = (3, 8, 5)          # use tuples instead of lists

#All the operations shown so far are the same for tuples as they are for lists, so you could use either.
# The main difference between the two that List DO have mutation operators, where tuples do NOT.
# Since I have not shown you the mutation operators, lists and tuples care effectively equivalent for your code,
#  and you can simply use lists for everything.
# However in others code you may see tuples and now you know that you can treat them just like lists.  
