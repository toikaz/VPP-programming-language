public static void Main(String[] args) {

    Turtle.setup 800 800
    Turtle.screen.title MyProgram
    Turtle.create
    Turtle.screen.bgcolor black
    int n = 190
    int i = 1
    Turtle.speed 100
    Turtle.pencolor red
    Turtle.circle %n% 90
    Turtle.left 90
    Turtle.circle %n% 90
    Turtle.left 18
    int n = %n% - 1
    if %n% == 0 : exit()
    if %n% != 0 : goto 6
    
    
}