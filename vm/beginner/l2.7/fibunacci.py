def Fi(n):
    """n must be natural"""
    if n <= 2:
        return 1
    return Fi(n-1) + Fi(n-2)

# for i in range(1,20):
#     print(Fi(i))
print("  index    value")
for i in range(1,21):
    print("{:5}   |    {}".format(i,Fi(i)) )
