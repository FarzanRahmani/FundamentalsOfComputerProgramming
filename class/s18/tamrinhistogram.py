file_man = open("tamrindata.txt")
paragraph = file_man.readlines()
file_man.close()

tokens = []
for p in paragraph:
    tokens += p.split(",")

tok = []
for t in tokens:
    tok += t.split(".")

to = []
for t in tok:
    to += t.split("-")


final = []
for t in to:
    final += t.split()

dic = {}
        #tokens
for t in final:
    if t not in dic:
        dic[t] = 1
    elif t in dic:
        dic[t] += 1
comulative = 0
sum_of_all = len(final)
print(r"Count |   %   | cum %  | Value"  )
print(r"------+-------+--------+--------")
#print(    4 | 57.14 | 57.14 | Matt   )
for key,value in dic.items():
    #esm_moteghayere    value=meghdare+moteghayer
    comulative += (value/sum_of_all)*100
    percentage = (value/sum_of_all)*100
    print("{:5}".format(value),"|","{:5.2f}".format(percentage),"|","{:6.2f}".format(comulative),"|",key)

# deghat kon ke {}ghabl va bad esh ye space khali mizare