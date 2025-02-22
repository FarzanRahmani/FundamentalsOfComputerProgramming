import plot
def test1():
    ecpected=0
    actual=plot.equation(1,1,1)
    assert ecpected==actual

def test2():
    ecpected=2
    actual=plot.equation(1,-4,4)
    assert ecpected==actual


def test3():
    ecpected=5
    actual=plot.equation(1,-7,10)
    assert ecpected==actual