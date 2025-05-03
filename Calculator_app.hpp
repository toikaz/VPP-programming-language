public static void Main(String[] args) {

    System.create.window Calculator 200 200
    System.add_text.window Calculator 10 10 Enter first number:
    System.get.window Calculator fn 60 20 20 30
    System.add_text.window Calculator 10 45 Enter second number:
    System.get.window Calculator sn 60 20 20 65
    System.add_text.window Calculator 10 80 Enter sing + - * /:
    System.get.window Calculator si 60 20 20 100
    str p = "+"
    str m = "-"
    str y = "*"
    str r = "/"
    if %si% == %p% : int result = %fn% + %sn%
    if %si% == %p% : System.out.print %result%
    if %si% == %m% : int result = %fn% - %sn%
    if %si% == %m% : System.out.print %result%
    if %si% == %y% : int result = %fn% * %sn%
    if %si% == %y% : System.out.print %result%
    if %si% == %r% : int result = %fn% / %sn%
    if %si% == %r% : System.out.print %result%
    System.add_text.window Calculator 10 120 Result:
    System.add_text.window Calculator 60 120 %result%
    
}
