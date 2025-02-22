sum=0  # moteghayere integer tarif kardim
for i in range(5):
    #sum = sum + i
    sum += i
print(sum)
#difference
x=5
for i in range(5):
    x = x + i
#5>6>8>11>15
print(x)
for y in range(5):
    sum = y + sum
print(sum)

#har bar ke y be for barmigarde har adadi bashe tabdil be 0.1.2.3.4.5.6.... mishe

def sum_to_n(n):
    return n*(n+1) / 2

def sum_to_n2(n):
    sum = 0
    for i in range(n+1):
        sum += i
    return sum

print(sum_to_n(5))
print(sum_to_n2(5))