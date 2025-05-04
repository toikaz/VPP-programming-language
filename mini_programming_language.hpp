public static void Main(String[] args) {
    
    str exit = "exit"
    array onea = []
    array twoa = []
    array threea = []
    array foura = []
    str print = "print"
    str one = "one"
    str two = "two"
    str three = "three"
    str four = "four"
    str command = System.ReadLine()
    array split %command% words
    array get words 0 word0
    array get words 1 word1
    array get words 2 word2
    array get words 3 word3
    if %word0% == %exit% : exit()
    if %word0% == %print% : if %word1% == %one% : array print onea
    if %word0% == %print% : if %word1% == %two% : array print twoa
    if %word0% == %print% : if %word1% == %three% : array print threea
    if %word0% == %print% : if %word1% == %four% : array print foura
    if %word0% == %one% : array add onea %word1%
    if %word0% == %two% : array add twoa %word1%
    if %word0% == %three% : array add threea %word1%
    if %word0% == %four% : array add foura %word1%
    if %word0% == delete_one : array delete onea %word1%
    if %word0% == delete_two : array delete twoa %word1%
    if %word0% == delete_three : array delete threea %word1%
    if %word0% == delete_four : array delete foura %word1%
    if %word0% == mul : if %word1% == one : array get onea %word2% setone
    if %word0% == mul : if %word1% == one : array get onea %word3% settwo
    if %word0% == mul : if %word1% == one : int res = %setone% * %settwo%
    if %word0% == mul : if %word1% == one : System.out.print %res%
    if %word0% == plus : if %word1% == one : array get onea %word2% setone
    if %word0% == plus : if %word1% == one : array get onea %word3% settwo
    if %word0% == plus : if %word1% == one : int res = %setone% + %settwo%
    if %word0% == plus : if %word1% == one : System.out.print %res%
    if %word0% == mines : if %word1% == one : array get onea %word2% setone
    if %word0% == mines : if %word1% == one : array get onea %word3% settwo
    if %word0% == mines : if %word1% == one : int res = %setone% - %settwo%
    if %word0% == mines : if %word1% == one : System.out.print %res%
    if %word0% == division : if %word1% == one : array get onea %word2% setone
    if %word0% == division : if %word1% == one : array get onea %word3% settwo
    if %word0% == division : if %word1% == one : int res = %setone% / %settwo%
    if %word0% == division : if %word1% == one : System.out.print %res%
    if %word0% == save_res_one : array add onea %res%
    if %word0% == input_one : str takeinput = System.ReadLine()
    if %word0% == input_one : array add onea %takeinput%
    
    
    
    
    
    
    
    if %word0% == mul : if %word1% == two : array get twoa %word2% setone
    if %word0% == mul : if %word1% == two : array get twoa %word3% settwo
    if %word0% == mul : if %word1% == two : int res = %setone% * %settwo%
    if %word0% == mul : if %word1% == two : System.out.print %res%
    if %word0% == plus : if %word1% == two : array get twoa %word2% setone
    if %word0% == plus : if %word1% == two : array get twoa %word3% settwo
    if %word0% == plus : if %word1% == two : int res = %setone% + %settwo%
    if %word0% == plus : if %word1% == two : System.out.print %res%
    if %word0% == mines : if %word1% == two : array get twoa %word2% setone
    if %word0% == mines : if %word1% == two : array get twoa %word3% settwo
    if %word0% == mines : if %word1% == two : int res = %setone% - %settwo%
    if %word0% == mines : if %word1% == two : System.out.print %res%
    if %word0% == division : if %word1% == two : array get twoa %word2% setone
    if %word0% == division : if %word1% == two : array get twoa %word3% settwo
    if %word0% == division : if %word1% == two : int res = %setone% / %settwo%
    if %word0% == division : if %word1% == two : System.out.print %res%
    if %word0% == save_res_two : array add twoa %res%
    if %word0% == input_two : str takeinput = System.ReadLine()
    if %word0% == input_two : array add twoa %takeinput%



    if %word0% == mul : if %word1% == three : array get threea %word2% setone
    if %word0% == mul : if %word1% == three : array get threea %word3% settwo
    if %word0% == mul : if %word1% == three : int res = %setone% * %settwo%
    if %word0% == mul : if %word1% == three : System.out.print %res%
    if %word0% == plus : if %word1% == three : array get threea %word2% setone
    if %word0% == plus : if %word1% == three : array get threea %word3% settwo
    if %word0% == plus : if %word1% == three : int res = %setone% + %settwo%
    if %word0% == plus : if %word1% == three : System.out.print %res%
    if %word0% == mines : if %word1% == three : array get threea %word2% setone
    if %word0% == mines : if %word1% == three : array get threea %word3% settwo
    if %word0% == mines : if %word1% == three : int res = %setone% - %settwo%
    if %word0% == mines : if %word1% == three : System.out.print %res%
    if %word0% == division : if %word1% == three : array get threea %word2% setone
    if %word0% == division : if %word1% == three : array get threea %word3% settwo
    if %word0% == division : if %word1% == three : int res = %setone% / %settwo%
    if %word0% == division : if %word1% == three : System.out.print %res%
    if %word0% == save_res_three : array add threea %res%
    if %word0% == input_three : str takeinput = System.ReadLine()
    if %word0% == input_three : array add threea %takeinput%
    
    
    
    
    
    
    if %word0% == mul : if %word1% == four : array get foura %word2% setone
    if %word0% == mul : if %word1% == four : array get foura %word3% settwo
    if %word0% == mul : if %word1% == four : int res = %setone% * %settwo%
    if %word0% == mul : if %word1% == four : System.out.print %res%
    if %word0% == plus : if %word1% == four : array get foura %word2% setone
    if %word0% == plus : if %word1% == four : array get foura %word3% settwo
    if %word0% == plus : if %word1% == four : int res = %setone% + %settwo%
    if %word0% == plus : if %word1% == four : System.out.print %res%
    if %word0% == mines : if %word1% == four : array get foura %word2% setone
    if %word0% == mines : if %word1% == four : array get foura %word3% settwo
    if %word0% == mines : if %word1% == four : int res = %setone% - %settwo%
    if %word0% == mines : if %word1% == four : System.out.print %res%
    if %word0% == division : if %word1% == four : array get foura %word2% setone
    if %word0% == division : if %word1% == four : array get foura %word3% settwo
    if %word0% == division : if %word1% == four : int res = %setone% / %settwo%
    if %word0% == division : if %word1% == four : System.out.print %res%
    if %word0% == save_res_four : array add foura %res%
    if %word0% == input_four : str takeinput = System.ReadLine()
    if %word0% == input_four : array add foura %takeinput%

    
    
    
    
    goto 11
}
