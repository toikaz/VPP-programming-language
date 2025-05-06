public static void Main(String[] args) {

    Turtle.setup 400 400

    Turtle.screen.title Turtle

    Turtle.screen.bgcolor lightblue

    Turtle.create

    Turtle.speed 50

    Turtle.pencolor red

    Turtle.pensize 3

    Turtle.pendown

    Turtle.forward 100
    Turtle.right 90
    Turtle.forward 100
    Turtle.right 90
    Turtle.forward 100
    Turtle.right 90
    Turtle.forward 100
    Turtle.right 90

    Turtle.penup
    Turtle.goto -50 50
    Turtle.pendown

    Turtle.pencolor blue
    Turtle.pensize 2

    Turtle.circle 50

    Turtle.penup
    Turtle.goto -150 -100

    str my_name = "HPP"
    Turtle.write Hi from %my_name%! move=False align=center

    Turtle.hideturtle

}