# Matt
# Vance
# Jerry
# Matt
# Matt
# Matt
# Jerry

# And the goal is to output a table like this called a histogram

# Count |   %   | cum % | Value
# ------+-------+-------+--------
#     4 | 57.14 | 57.14 | Matt 
#     2 | 28.57 | 85.71 | Jerry 
#     1 | 14.29 |100.00 | Vance 

# Notice there are 7 total entries, and we have counted up how many time each entry occurs.   We have sorted the entry by the number of occurrences, then calculated what than number is as a % of the total (notice 1/7 = 14.29%),  and we have calculated the cumulative % (that is the sum of all preceding entries).   

# Build a script that prompts for a file name, opens the files and reads all the lines, and calculates a histogram.

# Create a  file called 'histogramData.txt' with the names listed above.  Run your script on it, and see that the resulting output matches the expected output above.  

# Hint: a Dictionary that holds the count for each value is good.  

file_man = open("histogramData.txt")
readed = file_man.readlines()
#tokens = readed.split()
file_man.close()

dic = {}
        #tokens
for t in readed:
    if t not in dic:
        dic[t] = 1
    elif t in dic:
        dic[t] += 1
comulative = 0
sum_of_all = len(readed)
print(r"Count |   %   | cum %  | Value"  )
print(r"------+-------+--------+--------")
#print(    4 | 57.14 | 57.14 | Matt   )
for key,value in dic.items():
    #esm_moteghayere    value=meghdare+moteghayer
    comulative += (value/sum_of_all)*100
    percentage = (value/sum_of_all)*100
    print("  ",value,"","|","{:5.2f}".format(percentage) ,"|","{:6.2f}".format(comulative),"|",key)

# deghat kon ke {}ghabl va bad esh ye space khali mizare