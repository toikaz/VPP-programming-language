public static void Main(String[] args) {

    System.out.print Enter a number 1.stone 2.scissors 3.paper or 0 to exit:
    int num = System.ReadInt()
    int o = 0
    if %num% == %o% : exit()
    int k = 1
    int n = 2
    int b = 3
    int pc = Random 1 3
    
    if %num% == %k% : System.out.print User choose stone
    if %num% == %b% : System.out.print User choose paper
    if %num% == %n% : System.out.print User choose scissors
    
    if %pc% == %k% : System.out.print PC choose stone
    if %pc% == %b% : System.out.print PC choose paper
    if %pc% == %n% : System.out.print PC choose scissors
    
    if %num% == %pc% : System.out.print Draw
    if %num% == %pc% : goto 1
    
    if %num% == %k% : if %pc% == %n% : System.out.print User win.
    if %num% == %k% : if %pc% == %b% : System.out.print PC win.
    
    if %num% == %n% : if %pc% == %b% : System.out.print User win.
    if %num% == %n% : if %pc% == %k% : System.out.print PC win.
    
    if %num% == %b% : if %pc% == %k% : System.out.print User win.
    if %num% == %b% : if %pc% == %n% : System.out.print PC win.
    goto 1 

}
