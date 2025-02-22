import turtle

import time
delay=0.1

import random

#set up the screen
win = turtle.Screen() #win = window
win.title("Farzan's snake game")
win.bgcolor("black")
win.setup(width=600,height=600) #barpaee sahne sakhtan sahne chon ma az screen pisd farz estefade nemikonim khodemoon jadid sakhtim
win.tracer(0) #tracer = asar gozar = rassam = naghshe kesh   tracer(0) != update

                # Screen = win = variable(class)   title,bgcolor,setup,tracer=function

#Snake Head
head = turtle.Turtle()
head.speed(0)
head.shape("square")
head.color("green")
head.penup()
head.goto(0, 100)
head.direction = "stop"  #darim too class-e-head  moteghayere direction ro misazim
                # Turtle=class=head     class yesery tabe dare mesle:speed shape color pen up goto


def move():
    if head.direction == "up":
        y = head.ycor() #y coordinate(mokhtasat) of the turtle
        head.sety(y + 20)

    if head.direction == "down":
        y = head.ycor() #y coordinate of the turtle
        head.sety(y - 20)

    if head.direction == "right":
        x = head.xcor() #x coordinate of the turtle
        head.setx(x + 20)

    if head.direction == "left":
        x = head.xcor() #x coordinate of the turtle
        head.setx(x - 20)

def go_up():
    if head.direction != "down":
        head.direction = "up"

def go_down():
    if head.direction != "up":
        head.direction = "down"

def go_right():
    if head.direction != "left":
        head.direction = "right"

def go_left():
    if head.direction != "right":
        head.direction = "left"

# keyboard bindings(etesalat)
win.listen()
win.onkey(go_up, "w")  #We use the function win.onkeypress(function(esme tabe bedoone parantez), “key”) for the same.
win.onkey(go_down, "s") #miton Up , Down , Right , Left bezari
win.onkey(go_right, "d")
win.onkey(go_left, "a")

# Snake food
food = turtle.Turtle()
food.speed(0)
food.shape("circle")
food.color("red")
food.penup()
food.shapesize(0.50, 0.50)
food.goto(0, 0)



segments = [] #ghataat   bakhsh ha


# score 
score = 0 
high_score = 0

# score turtle
pen = turtle.Turtle()
pen.speed(0)
pen.shape("square")
pen.color("white")
pen.penup()
pen.hideturtle()
pen.goto(0, 260)
pen.write("Score: {} High Score: {}".format(score, high_score), align="center", font=("Courier", 24, "normal"))




# Main game loop  (This function basically updates my screen continuously with the loop.)  kare turtle.mainloop()  mikone
while True:
    move()

    # Check for self collision
    for segment in segments:
        if segment.distance(head) < 20:
            time.sleep(1)
            head.goto(0, 0)
            head.direction = "stop"

            # Hide the segments
            for segment in segments:
                segment.goto(1000, 1000)

            # clear segment list
            segment.clear()

            # reset score
            score = 0


    win.update()   #baraye inke sar rangesh josa az badane bashe aval move ro mizarim
    time.sleep(delay) #because snake moves very fast

    if head.distance(food) <15: #calculate the distance between the two objects with the function head.distance(food)
        # move the food to a random position on screen
        x = random.randint(-290, 290)
        y = random.randint(-290, 290)
        food.goto(x, y)

        # Increase the score
        score = score + 10
 
        if score > high_score:
            high_score = score

        # add a segment
        new_segment = turtle.Turtle()
        new_segment.speed(0)
        new_segment.shape("triangle")
        new_segment.color("grey")
        new_segment.penup()
        segments.append(new_segment)

    # move the end segment in reverse order
    for index in range(len(segments)-1, 0, -1):  #mesl ordak va mamanesh
        x = segments[index-1].xcor()
        y = segments[index-1].ycor()
        segments[index].goto(x, y)
    
    # Move segment 0 to where the head is
    if len(segments) > 0: 
        x = head.xcor()
        y = head.ycor()
        segments[0].goto(x, y)

    # Check for border collision
    if head.xcor() > 290 or head.xcor() < -290 or head.ycor() > 290 or head.ycor() < -290: #chon az markaz dar nazar migire 300 nemazare
        time.sleep(1)
        head.goto(0, 0)
        head.direction = "stop"


        # reset score
        score = 0

    
    # Hide the segments
        for segment in segments: #agar nazani segmants ha hamoon ja baghi mimoonan
            segment.goto(1000, 1000)
    # clear segment list
        segments = []

    # update score
    pen.clear()
    pen.write("Score: {} High Score: {}".format(score, high_score), align="center", font=("Courier", 24, "normal"))

    
    
