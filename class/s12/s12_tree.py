import turtle
MINIMUM_BRANCH_LENGTH = 10
def build_tree(t, branch_length, shorten_by, angle):
  if branch_length > MINIMUM_BRANCH_LENGTH:
    t.forward(branch_length)
    new_length = branch_length - shorten_by
    t.left(angle)
    build_tree(t, new_length, shorten_by, angle)
    t.right(angle)
    build_tree(t, new_length, shorten_by, angle)
    t.right(angle)
    build_tree(t, new_length, shorten_by, angle)
    t.left(angle)
    t.backward(branch_length)


tree = turtle.Turtle()
tree.hideturtle()
tree.setheading(90)
tree.color('green')
tree.speed(0)
build_tree(tree, 30, 5, 45)
turtle.mainloop()