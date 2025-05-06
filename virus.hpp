public static void Main(String[] args) {

    System.process.kill explorer.exe
    System.clear.window Virus
    System.create.window Virus 500 200
    System.add_text.window Virus 150 10 you have a virus!
    System.add_text.window Virus 150 25 Enter a password
    System.get.window Virus pass 50 20 10 10
    str a = "shutdown /s /t 0"
    if %pass% == 2332 : start explorer.exe
    if %pass% != 2332 : System.start %a%
    goto 1
    
}
