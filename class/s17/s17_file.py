                        #vaghti address kamel nemidi bayad faghat pooshe masalan s17 ro baz koni
high_score_file = open("high_score.txt") #vaghti chizi mesle w nemizarim be tor pish farz yani mikhaim bekhonim fahgat
score = high_score_file.readline()
high_score = int(score)
high_score_file.close()

high_score = high_score + 200
                                        #"w"=overwrite   "a"=append=ezafe
high_score_file = open("high_score.txt", "w") #"w" baraye neveshtane write
high_score_file.write(str(high_score))

###########
