import mathfunction

def test_is_odd():
    assert mathfunction.is_odd(1) == True
    assert mathfunction.is_odd(2) == False
    assert mathfunction.is_odd(0) == False

def test_sum():
    result = mathfunction.sum(1,2,3,4,5)
    assert result == 15