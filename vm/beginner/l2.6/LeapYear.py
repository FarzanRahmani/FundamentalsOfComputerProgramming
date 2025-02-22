def is_leap_year(year):
    if year % 400 == 0:
        print(True)
        return True
    elif (year % 4 == 0) and (year % 100 != 0): #elif == else + if
        print(True)
        return True
    else:
        print(False)
        return False
is_leap_year(2020)
is_leap_year(1988)
is_leap_year(1992)
is_leap_year(1992)
is_leap_year(2000)
is_leap_year(1700)
	# 1792
	# 1796
	# 1800
	# 1804
	# 1900
	# 1904
	# 2000
    # 2004