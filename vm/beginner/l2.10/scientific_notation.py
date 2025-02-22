def print_with_scientific_notation(x):
    """ prints the number x in scientific notation.
        for example if x is 345 it will print 3.14E2

        TODO currently only works if 1 <= x
    """
    assert 1 <= x   # currently we don't work for other numbers FIX!

    # compute the exponent(tavan) of 10 needed
    exp = 0
    while 10 <= x :
        exp = exp + 1
        x = x / 10

    assert 1 <= x and x < 10
    print(x, "E", exp, sep="") #age , sep="" nazarim adad joda mishan

print_with_scientific_notation(123456)