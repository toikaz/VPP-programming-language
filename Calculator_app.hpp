public static void Main(String[] args) {

    System.create.window Calculator 500 500
    System.add_text.window Calculator Enter first number:
    System.get.window Calculator fn
    System.add_text.window Calculator Enter second number:
    System.get.window Calculator sn
    System.add_text.window Calculator Enter sing + - * /:
    System.get.window Calculator si
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
    System.add_text.window Calculator Result:
    System.add_text.window Calculator %result%
    
}