def count_letter(word,letter):#word and letter must be string
    count = 0
    for ch in word:
        if ch == letter:
            count = count + 1
    return count

print(count_letter("fantabulos","a"))