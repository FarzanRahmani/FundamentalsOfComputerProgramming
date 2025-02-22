import s3


def test_dirReduc():
    '''
        NORTH = شمال | SOUTH = جنوب | EAST = شرق | WEST = غرب
        می‌خواهیم که کمترین مسیر را برویم
        اگر حرکتی به سمت شمال است و سپس به سمت جنوب می‌رود. این دو حرکت یکدیگر را خنثی می‌کنند. و اصلا حرکتی نمی‌کنیم
        *** ترتیب حرکت‌ها نباید به هم بخورد ***
        *** از توابع اماده استقاده نکنید و تنها چیزهایی را که خوانده‌اید به‌کار گیرید. ***
    '''
    assert s3.dirReduc(['NORTH', 'WEST', 'EAST']) == ['NORTH']
    assert s3.dirReduc(['NORTH', 'WEST', 'NORTH']) == ['NORTH', 'WEST', 'NORTH']
    assert s3.dirReduc(['NORTH', 'SOUTH']) == []
    assert s3.dirReduc(["NORTH", "SOUTH", "SOUTH", "EAST","WEST", "NORTH", "WEST"]) == ['WEST']
    assert s3.dirReduc(['SOUTH', 'EAST', 'WEST', 'SOUTH']) == ['SOUTH', 'SOUTH']
    assert s3.dirReduc(['SOUTH', 'EAST', 'NORTH', 'NORTH', 'WEST', 'NORTH', 'NORTH', 'WEST', 'SOUTH', 'EAST', 'NORTH', 'SOUTH', 'WEST']) == ['SOUTH', 'EAST', 'NORTH', 'NORTH', 'WEST', 'NORTH', 'NORTH', 'WEST', 'SOUTH']
    assert s3.dirReduc(['NORTH', 'WEST', 'WEST', 'EAST', 'NORTH', 'EAST', 'SOUTH', 'SOUTH', 'EAST', 'NORTH', 'EAST']) == ['NORTH', 'WEST', 'NORTH', 'EAST', 'SOUTH', 'SOUTH', 'EAST', 'NORTH', 'EAST']
    assert s3.dirReduc(['NORTH', 'EAST', 'WEST', 'SOUTH', 'EAST', 'SOUTH', 'WEST', 'NORTH', 'WEST', 'SOUTH']) == ['EAST', 'SOUTH', 'WEST', 'NORTH', 'WEST', 'SOUTH']
    assert s3.dirReduc(['EAST', 'NORTH', 'SOUTH', 'EAST', 'EAST', 'SOUTH', 'EAST', 'EAST', 'EAST', 'NORTH', 'WEST', 'NORTH']) == ['EAST', 'EAST', 'EAST', 'SOUTH', 'EAST', 'EAST', 'EAST', 'NORTH', 'WEST', 'NORTH']
    assert s3.dirReduc(['EAST', 'NORTH', 'EAST', 'WEST','WEST', 'NORTH', 'WEST', 'NORTH']) == ['EAST', 'NORTH', 'WEST', 'NORTH', 'WEST', 'NORTH']
    assert s3.dirReduc(['EAST', 'EAST', 'WEST', 'NORTH', 'WEST', 'NORTH', 'NORTH', 'WEST', 'WEST', 'WEST', 'WEST','SOUTH', 'EAST', 'SOUTH', 'WEST', 'NORTH', 'WEST', 'SOUTH', 'SOUTH', 'EAST', 'EAST', 'EAST', 'EAST']) == ['EAST', 'NORTH', 'WEST', 'NORTH', 'NORTH', 'WEST', 'WEST', 'WEST', 'WEST', 'SOUTH', 'EAST', 'SOUTH', 'WEST', 'NORTH', 'WEST', 'SOUTH', 'SOUTH', 'EAST', 'EAST', 'EAST', 'EAST']


# def test_pig_it():
#     '''
#         رشته ورودی را از کاربر گرفته
#         حرف اول هر کلمه به انتهای آن منتقل می‌شود و سپس دو حرف
#         ay
#         به آن‌ها اضافه می‌شود
#         مثال : 
#         کلمه = Happy
#         تبدیل شده = appyHay
#         *** از توابع اماده استقاده نکنید و تنها چیزهایی را که خوانده‌اید به‌کار گیرید. ***
#     '''
#     assert s3.pig_it('I am very happy') == 'Iay maay eryvay appyhay'
#     assert s3.pig_it('Less is More') == 'essLay siay oreMay'
#     assert s3.pig_it('I Love Python') == 'Iay oveLay ythonPay'
#     assert s3.pig_it('I Love Linux') == 'Iay oveLay inuxLay'
#     assert s3.pig_it(
#         'Thanks for attending in TA Session') == 'hanksTay orfay ttendingaay niay ATay essionSay'
#     assert s3.pig_it('Hello world') == 'elloHay orldway'
#     assert s3.pig_it('Pig latin is cool') == 'igPay atinlay siay oolcay'
#     assert s3.pig_it('This is my string') == 'hisTay siay ymay tringsay'
