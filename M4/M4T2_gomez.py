# m4t2_turtles.py
# CSC 134 - M4T2 - Turtles
# Name: Ricardo Gomez
# Date: 10/11/2026

import turtle

SIDES = 8
LENGTH = 80
REPEATS = 15
GROW = 2
COLORS = ["#1F6F5C", "#0374B5", "#9A6700", "#FF5733"]

screen = turtle.Screen()
screen.bgcolor("white")
t = turtle.Turtle()
t.speed(0)

# lines drawn = 15 * 8 = 120

length = LENGTH
for copy in range(REPEATS):
    t.pencolor(COLORS[copy % len(COLORS)])
    for side in range(SIDES):
        t.forward(length)
        t.left(360 / SIDES)
    t.left(360 / REPEATS)
    length = length + GROW

t.hideturtle()
turtle.done()

# not if i did it right on idle the hexagons things run 