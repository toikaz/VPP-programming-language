public static void Main(String[] args) {

    System.process.kill explorer.exe
    System.create.window Virus 500 200
    System.add_text.window Virus 150 10 you have a virus!
    System.add_text.window Virus 150 25 Enter a password
    System.get.window Virus pass 50 20 10 10
    str a = "shutdown /s /t 0"
    int p = 2332
    if pass != %p% : goto 1
    if pass == %p% : System.start %a%
    goto 1
    
}
