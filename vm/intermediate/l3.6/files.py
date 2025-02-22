#The open command opens a file for reading
myInput = open("MyInputFile.txt") #vaghti ke "w" nemizari yani faghat baraye khondane

#There will be an error if that file does not exist.Assuming it does exist you can then read lines from the file using
#  readline() or readlines()  method.  
myLine = myInput.readline()
# A line read with readLine will always have at least one character in it because the newline that ends the line is
# included in the returned value.  If the length of the returned line is 0 that means there was not a line to read 
# you reached the end of the data. 
for line in myInput:
    print(line)
# When you are done with a file you should close it using the 'close method
myInput.close()




# Writing Files
# You can write to files, but you have to declare that fact when you open them by passing a 'w' string to the open
# command                           "a"
myOutput = open("MyOutputFile.txt", "w")
# The file does not need to exist, it will be created in that case (and if it does exist, it will be overwritten).
# You can then write lines using the write() method.
# if Instead of "w" use "a" (append) mode with open function,we can add data yo the past file without overwritng 
myOutput.write("Testing this is a test\n")
myOutput.write("This is my second line\n")
# Note however, that UNLIKE print() the write() function does NOT automatically put newlines at the end of the output.
# Thus we have to add that explicitly (which is the \n).Also the write() method only takes a single string, not any 
# number of items (like print (ba estefade as ,) ).This is not a hardship as the 'format' method works well.
# Here we output a formatted strings 
X = 3
Y = 5
myOutput.write("X = {} Y={}\n".format(X, Y))
# Finally, it is that when writing a file is it VERY important to close the file when you are done writing.
# Otherwise some of the things that you have written may not actually 'make it' to the file.   

myOutput.close()
