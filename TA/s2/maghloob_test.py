import maghloob
def test1():
    ecpected=False
    actual=maghloob.maghloob(123)
    assert ecpected==actual

def test2():
    ecpected=True
    actual=maghloob.maghloob(222)
    assert ecpected==actual

def test3():
    ecpected=True
    actual=maghloob.maghloob(30203)
    assert ecpected==actual