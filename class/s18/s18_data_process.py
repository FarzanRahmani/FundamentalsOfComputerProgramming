FILENAME = "children-per-woman-UN.csv"
def read_file_lines(file_name):
    file1 = open(file_name)
    entire_file = file1.read()
    lines = entire_file.splitlines() #list bar migardoone
    lines = lines[1:]  #az 1 be bad lines ro beriz to in chon khat 0 eteleat ee na dade
    return lines


def country_max_birth_rate(country,lines):
    max_rate = 0.0
    max_rate_year = 0
    country = country.lower()
    for line in lines:  #find bozorg va koochic barash moheme
        if line.lower().find(country) >= 0:#-1 nabbod = vojood dasht
            tokens = line.split((",")) #split lines kalame be kalame joda mikone val splitlines khat be khat jda mikone
            rate = float(tokens[3])
            year = int(tokens[2])
            if rate > max_rate :
                max_rate = rate
                max_rate_year = year
    return max_rate,max_rate_year

def get_line_info(line):
    tokens = line.split(",")
    country = tokens[0]
    year = int(tokens[2])
    rate = float(tokens[3])
    return country,year,rate  #(x,y,z) = korojii

def get_all_countries_max_birth_rate(lines):
    result = {}
    for line in lines:
        country,year,rate = get_line_info(line) 
        if country in result:
            _,current_rate = result[country] 
            if rate > current_rate:
                result[country] = year, rate 
        else:
            result[country] = year, rate
        result[country] = year,rate
    return result

lines = read_file_lines(FILENAME)
result = get_all_countries_max_birth_rate(lines)

for key,value in result.items():
    #esm_moteghayere    value=meghdare+moteghayer
    out_str = "country:{} year,rate : {}".format(key, value)
    print(out_str)