import session9
def test_get_x():
    x_result = session9.get_x(-1, 1, .5)
    expected = [-1, -0.5, 0, 0.5, 1]
    assert x_result == expected

def test_get_x2():
    x = [-1,0,2,-4]
    result = session9.get_x2(x)
    expected = [1,0,4,16]
    assert result == expected
    