def compute_sum(n):
    """Computes the sum of digits from 1 to n"""
    sum = 0
    for i in range(1, n+1):
        sum = sum + i
    return sum

# F5 = Run debug    F10 = next line     F11 = step into = boro dakhel tabe    shift+F11 = biroon az tabe  
# mitoni break point ro edit koni masalan ta vaghti ke i = 5


# create a table from 9 down to 1
print("N      compute_sum(N)")
print("---------------------")
for i in range(9, 0, -1):
    print(i, "         ", compute_sum(i))

    

