import session10

def test_reverse():
    l = [1, 2, 10, 3, 5]
    rl = session10.reverse(l)
    assert rl == [5, 3, 10, 2, 1]

def test_sort():
    l = [1, 2, 10, 3, 5]
    sl = session10.sort(l)
    assert sl == [10, 5, 3, 2, 1]

    l = [1, 2, 10, 3, 5, 15, -10]
    sl = session10.sort(l)
    assert sl == [15, 10, 5, 3, 2, 1, -10]

def test_find_max():
    l = [1, 2, 10, 3, 5]
    p_max = session10.find_max(l, 2, 4)
    assert 2 == p_max

    p_max = session10.find_max(l, 3, 4)
    assert 4 == p_max

def test_swap():
    mlist = [1, 5, 10]
    session10.swap(mlist, 0, 2)
    assert mlist == [10, 5, 1]

    mlist = [1, 14, -5, 5, 10]
    session10.swap(mlist, 1, 3)
    assert mlist == [1, 5, -5, 14, 10] 

def test_is_prime():
    assert session10.is_prime(17) == True
    assert session10.is_prime(29) == True
    assert session10.is_prime(51) == True
    assert session10.is_prime(56) == False
    
def test_find_prime_factors():
    assert session10.find_prime_factors(38) == [19,2]
    assert session10.find_prime_factors(10) == [5,2]
    assert session10.find_prime_factors(120) == [5,3,2]
    assert session10.find_prime_factors(286) == [13,11,2]
    assert session10.find_prime_factors(1260) == [7,5,3,2]
    
    prime_factors = session10.find_prime_factors(95)
    assert prime_factors == [19, 5]

    prime_factors = session10.find_prime_factors(12)
    assert prime_factors == [3, 2]    