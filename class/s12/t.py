import turtle
import random
import math
fery = turtle.Turtle()  #ye moteghayere lakposht besaz beriz to fery

# fery.forward(100)
# fery.right(90)
# fery.fd(100)
# fery.left(170)
# fery.backward(80)
# fery.right(40)
# fery.bk(70)
# fery.goto(100,-100)
# fery.circle(50)
# turtle.mainloop()

def draw_sqaure(t, l):
    t.forward(l)
    t.right(90)
    t.forward(l)
    t.right(90)
    t.forward(l)
    t.right(90)
    t.forward(l)

def draw_sqaure2(tu, l):
    for i in range(4):
        tu.forward(l)
        tu.right(90)

def draw_polygen(t,l,n):
    angle = 360/n  #zavie khareji moheme
    for i in range(n):
        t.forward(l)
        t.right(angle)

# fery.penup()
# fery.setpos(50,50)
# fery.pendown()
# draw_sqaure2(fery,100)
# fery.penup()
# fery.setposition(-50,-50)
# fery.pendown()
# draw_polygen(fery,50,9)

# step = 20
# radius = 10
# for i in range(10):
#     fery.circle(radius)
#     radius = radius + step

# for radius in range(10,100,20):
#     fery.seth(0) #zavie ba jahat mosbat x
#     fery.circle(radius)
#     fery.setheading(-90)
#     fery.forward(10)


# fery.speed(0) # 0 = max
# fery.penup
# fery.setpos(0,-50)
# fery.pendown
# fery.pencolor("blue")
# set_random_color(fery)
# fery.pensize(6)


# for r in range(10,101,10):
#     fery.penup()
#     fery.setpos(0,-1*r)
#     fery.pendown()
#     fery.circle(r)
# turtle.mainloop()

turtle.colormode(255)  #***************

def set_random_color(t):
    r = random.randint(0,255)
    g = random.randint(0,255)
    b = random.randint(0,255)
    t.pencolor(r,g,b)

def draw_circle_inside(t):
    for r in range(10,101,10):
        set_random_color(fery)
        t.setpos(0,-1*r)
        t.circle(r)

# draw_circle_inside(fery)

def draw_circle_clock(tu):
    l = 150
    r = 25
    tu.penup()
    for theta in range(0, 360, 30):
        x = l * math.cos(theta * math.pi / 180)
        y = l * math.sin(theta * math.pi / 180)
        tu.setpos(x, y)
        tu.pendown()
        set_random_color(tu)
        tu.circle(r)
        tu.penup()

# draw_circle_clock(fery)

def draw_circle_clock2(tu):
    r = 25
    tu.penup()
    for i in range(12):
        tu.forward(150)
        tu.pendown()
        tu.circle(r)
        tu.penup()
        tu.backward(150)
        tu.right(30)



