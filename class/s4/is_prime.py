for i in range(101):
    is_prime = True
    for n in range(i):
        if n>1 and i % n == 0:
            is_prime=False
    if is_prime and i>1:
        print(i)
#az b=0,1 be jaye is_prime baraye alalmat gozari estefade mikonim(be jaye boolean az 0 and 1 estefade konim)
#for i in range(1,101)
#vaghti masalan i = 10 hast angah for n in rang 10 hast yani az 0 ta 9 khat 3 ta 4
#for i in range(end)
#             (0,end-1)
#for i in range(start , end(baze baz) , step)

