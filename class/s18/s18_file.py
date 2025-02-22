def read_score_from_file(file_name):
    score_file = open(file_name)
    score_str = score_file.readline()
    score_file.close()
    return int(score_str)


def write_score_to_file(file_name):
    score_file = open(file_name,"w")
    score_file.write(str(score))
    score_file.close()

score = read_score_from_file("score.txt")

print("Current score is {:5}".format(score))
score += 10
print("New score is {:5}".format(score))

write_score_to_file("score.txt") #esm file ba double qoutation