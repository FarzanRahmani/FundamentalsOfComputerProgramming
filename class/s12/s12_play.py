import turtle
import random
import math

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

def draw_polygon(tu, l, n):
    angle = 360 / n
    for i in range(n):
        tu.forward(l)
        tu.right(angle)

def set_random_color(t):
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    t.pencolor(r, g, b)

def draw_circle_inside(alex):
    for radius in range(10, 100, 20):     
        set_random_color(alex)
        alex.setpos(0, -1 * radius)
        alex.circle(radius)



def draw_throw(tu):
    x0 = -200
    y0 = -200
    v0 = 90
    theta = 45
    #vx = ...
    #vy0 = ...

    t = 0
    for i in range(1000):
        #your code
        t = t + 0.01
    pass

def draw_circle_clock(tu):
    l = 150
    r = 25
    tu.penup()
    for theta in range(0, 360, 30):
        x = l * math.cos(theta * math.pi / 180)
        y = l * math.sin(theta * math.pi / 180)
        tu.setpos(x, y)
        tu.pendown()
        tu.circle(r)
        tu.penup()

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


alex = turtle.Turtle()
# draw_sqaure(alex, 50)
# alex.penup()
# alex.setpos(50, 50)
# alex.pendown()
# draw_polygon(alex, 20, 6)
# alex.pensize(5)
# turtle.colormode(255)
# draw_circle_clock(alex)

draw_throw(alex)

turtle.mainloop()