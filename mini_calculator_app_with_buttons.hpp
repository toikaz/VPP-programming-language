public static void Main(String[] args) {
    
    int one = 0
    int two = 0
    
    System.create.window mini_calculator_app 350 460
    System.clear.window mini_calculator_app
    
    func one { int one = %one% + 1 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func two { int one = %one% + 2 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func three { int one = %one% + 3 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func four { int one = %one% + 4 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func five { int one = %one% + 5 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func six { int one = %one% + 6 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func seven { int one = %one% + 7 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func eight { int one = %one% + 8 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func nine { int one = %one% + 9 ^ System.add_text.window mini_calculator_app 220 15 first num: ^ System.add_text.window mini_calculator_app 300 15 %one% }
    func onea { int two = %two% + 1 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }
    func twoa { int two = %two% + 2 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }
    func threea { int two = %two% + 3 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }
    func foura { int two = %two% + 4 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }        
    func fivea { int two = %two% + 5 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }
    func sixa { int two = %two% + 6 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }
    func sevena { int two = %two% + 7 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }
    func eighta { int two = %two% + 8 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }
    func ninea { int two = %two% + 9 ^ System.add_text.window mini_calculator_app 220 30 second num: ^ System.add_text.window mini_calculator_app 300 30 %two% }
    func reset { int one = 0 ^ int two = 0 ^ move 1 ^ System.add_text.window mini_calculator_app first num = 0 ^ System.add_text.window mini_calculator_app second num = 0 ^ System.clear_all_text.window mini_calculator_app }
    func plus { int i = %one% + 0 ^ int b = %two% + 0 ^ jd_ch %i% + %b% ^ int ty = #res# ^ System.add_text.window mini_calculator_app 220 45 Result: ^ System.add_text.window mini_calculator_app 300 45 %ty% }
    func minus { int i = %one% + 0 ^ int b = %two% + 0 ^ jd_ch %i% - %b% ^ int ty = #res# ^ System.add_text.window mini_calculator_app 220 45 Result: ^ System.add_text.window mini_calculator_app 300 45 %ty% }
    func ym { int i = %one% + 0 ^ int b = %two% + 0 ^ jd_ch %i% * %b% ^ int ty = #res# ^ System.add_text.window mini_calculator_app 220 45 Result: ^ System.add_text.window mini_calculator_app 300 45 %ty% }
    func ra { int i = %one% + 0 ^ int b = %two% + 0 ^ jd_ch %i% / %b% ^ int ty = #res# ^ System.add_text.window mini_calculator_app 220 45 Result: ^ System.add_text.window mini_calculator_app 300 45 %ty% }
        
    System.add_button.window mini_calculator_app 1_1 10 50 30 30 one
    System.add_button.window mini_calculator_app 2_1 70 50 30 30 two
    System.add_button.window mini_calculator_app 3_1 130 50 30 30 three
    System.add_button.window mini_calculator_app 4_1 190 50 30 30 four
    System.add_button.window mini_calculator_app 5_1 10 90 30 30 five
    System.add_button.window mini_calculator_app 6_1 70 90 30 30 six
    System.add_button.window mini_calculator_app 7_1 130 90 30 30 seven
    System.add_button.window mini_calculator_app 8_1 190 90 30 30 eight
    System.add_button.window mini_calculator_app 9_1 10 130 30 30 nine
        
    System.add_button.window mini_calculator_app 1_2 10 170 30 30 onea
    System.add_button.window mini_calculator_app 2_2 70 170 30 30 twoa
    System.add_button.window mini_calculator_app 3_2 130 170 30 30 threea
    System.add_button.window mini_calculator_app 4_2 190 170 30 30 foura
    System.add_button.window mini_calculator_app 5_2 10 210 30 30 fivea
    System.add_button.window mini_calculator_app 6_2 70 210 30 30 sixa
    System.add_button.window mini_calculator_app 7_2 130 210 30 30 sevena
    System.add_button.window mini_calculator_app 8_2 190 210 30 30 eighta
    System.add_button.window mini_calculator_app 9_2 10 250 30 30 ninea
        
    System.add_button.window mini_calculator_app + 10 400 50 50 plus
    System.add_button.window mini_calculator_app - 60 400 50 50 minus
    System.add_button.window mini_calculator_app * 110 400 50 50 ym
    System.add_button.window mini_calculator_app \ 160 400 50 50 ra
    System.add_button.window mini_calculator_app Reset 290 400 50 50 reset
    System.pause
    
}
