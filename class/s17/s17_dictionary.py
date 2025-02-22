
phone_book = {"farzan":"09128357533"}
phone_book["ali"] = "0912232323"
phone_book["zahra"] = "091034343"

while True:
    command = input("? ")
    command = command.lower()
    if command == "q":
        break

    tokens = command.split()
    if tokens[0] == "lookup":
        name = tokens[1]
        if name in phone_book:
            number = phone_book[name]
            print(number)
        else:
            print("not found")
    elif tokens[0] == "add":
        name = tokens[1]
        number = tokens[2]
        phone_book[name] = number
        print("entry added {} {}".format(name, number))


dic = {}
mynums = [1,3,5,7,9]
dic["nums"] = mynums

#moadel ast ba

dic2 = {"nums" : [1,3,5,7,9]}

