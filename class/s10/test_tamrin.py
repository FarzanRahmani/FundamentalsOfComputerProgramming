import tamrin

def test_is_prime():
    assert tamrin.is_prime(17) == True
    assert tamrin.is_prime(29) == True
    assert tamrin.is_prime(51) == False
    assert tamrin.is_prime(56) == False
    
def test_find_prime_factors():
    assert tamrin.find_prime_factors(38) == [2,19]
    assert tamrin.find_prime_factors(10) == [2,5]
    assert tamrin.find_prime_factors(120) == [2,3,5]
    assert tamrin.find_prime_factors(286) == [2,11,13]
    assert tamrin.find_prime_factors(1260) == [2,3,5,7]
    
    prime_factors = tamrin.find_prime_factors(95)
    assert prime_factors == [5,19]

    prime_factors = tamrin.find_prime_factors(12)
    assert prime_factors == [2,3]    
