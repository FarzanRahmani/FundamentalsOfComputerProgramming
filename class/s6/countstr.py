#ba in tedad horoof shemorde mishe
#number of letters in a word
def count_str(s,c):
    """s=word=sting c=letter=chraractor"""
    count = 0
    for ch in s: #az aval kalame horoofesho mizane ta halghe tamoom she 
        if ch == c :
            count = count +1 
    return count
print(count_str("sadssassadsass","d"))

print(count_str("hfghfuafafhcsdffjhsfjkfnklafkq","g"))

