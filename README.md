# Документация для языка программирования HPP и WHP

## Введение

HPP (Hardware Performance Programming) — это интерпретируемый язык программирования, предназначенный для создания консольных приложений. WHP (Web Hardware Programming) — это расширение HPP для веб-разработки, которое позволяет создавать статические веб-страницы. Оба языка предлагают мощные команды для работы с переменными, математическими операциями, условиями и многим другим.

### Использование файлов

- Файлы для консольных приложений должны иметь расширение **`.hpp`**.
- Файлы для веб-разработки должны иметь расширение **`.whp`**.
- Что бы сделать исполняемый файл из .hpp нужно написать в консоли hppinstaller <полный путь к папке с файлом> <имя файла.vvm> , тогда скрипт создаст папку которая важна для работы программы и исполняемый батник который будет запускать скрипт на ос на которой может быть не установлен HPP (важно что бы файл и батник были в одной директории)

## Команды для консольного приложения (HPP)

### Базовые команды

- **str \ int <имя> = <значение>**: объявляет переменную и присваивает значение.
  - Пример:
    ```HPP
    str a = Hello!
    int b = 5
    ```

- **System.ReadLine() \ System.ReadInt()**: считывает ввод пользователя.
  - Пример:
    ```HPP
    System.out.print Enter your name:
    str name = System.ReadLine()
    ```

- **System.out.print <сообщение>**: выводит сообщение в консоль.Так же выводит значение переменных
  - Пример:
    ```HPP
    str b = Hello!
    System.out.print %a%
    ```

### Функции

- **func <имя_функции>() { <команда> }**: создает функцию с командой
- **call_fn <имя_функции>()**: вызывает функцию
- ** ^ : делит команды на строки в функции
  - Пример:
    ```HPP
    func print() { System.out.print %a% ^ System.out.print var a printed }
    str a = hello
    call_fn print()
    ```

### Условия

- **if <переменная> == <переменная> : <команда>**: выполняет команду, если условие истинно.
  - Пример:
    ```HPP
    if %a% == %b% : System.out.print a equal %b%
    ```

- **if <переменная> != <переменная> : <команда>**: выполняет команду, если условие ложно.
  - Пример:
    ```HPP
    if %b% != %a% : System.out.print b not equal %a%
    ```

- **if <переменная> > <переменная> : <команда>**: выполняет команду, если переменная больше указанного значения.
  - Пример:
    ```HPP
    int a = 70
    if %score% > %a% : System.out.print You passed!
    ```

- **if <переменная> < <переменная> : <команда>**: выполняет команду, если переменная меньше указанного значения.
  - Пример:
    ```HPP
    int a = 18
    if %age% < %a% : System.out.print You are a minor.
    ```

### Математические операции

- **System.calc <значение1> <операция> <значение2>**: выполняет математическую операцию с переменными и сохраняет результат в специальной переменной int со значением #res#.
  - Пример:
    ```HPP
    System.calc %x% + %y%
    int c = #res#
    System.out.print %c%
    ```

- **System.math**: проводит операцию между двумя числами.
  - Пример:
    ```HPP
    System.math 5 + 10
    int c = #res#
    System.out.print %c%
    ```

### Массивы

- **array <имя> = []**: создаёт новый массив.
  - Пример:
    ```HPP
    array myArray = []
    ```

- **array add <имя> <значение>**: добавляет элемент в массив.
  - Пример:
    ```HPP
    array add myArray 10
    array add myArray 20
    ```

- **array indexout <имя> <индекс>**: выводит объект из массива под индексом.
  - Пример:
    ```HPP
    array indexout myArray 1
    ```

- **array delete <имя> <индекс>**: удаляет объект из массива под индексом.
  - Пример:
    ```HPP
    array delete myArray 1
    ```

- **array print <имя>**: выводит все элементы массива.
  - Пример:
    ```HPP
    System.out.print Элементы массива:
    array print myArray
    ```

### Управление файлами

- **System.create.file <имя файла>**: создаёт новый файл.
  - Пример:
    ```HPP
    System.create.file new_file.txt
    ```

- **System.delete.file <имя файла>**: удаляет указанный файл.
  - Пример:
    ```HPP
    System.delete.file old_file.txt
    ```

- **System.create.folder <имя папки>**: создаёт новую директорию.
  - Пример:
    ```HPP
    System.create.folder new_folder
    ```

- **System.delete.folder <имя папки>**: удаляет указанную директорию.
  - Пример:
    ```HPP
    System.delete.folder old_folder
    ```

### Переменные для математических операций
 
- **int <имя_переменной>**: создает переменную в формате INT для вычислений так же служит переменной для вывода ответа вычислений.
  -Пример:
  ```HPP
  int a = 5
  int b = 7
  int c = %a% + %b%
  System.out.print %c%
  ```
  вывод: 12

  -Если написать str c то результат просто не выведится,если переменным a и b написать str a и str b то получится переменная в формате STR для сложения.
  -Пример:
  ```HPP
  str a = "Hello, "
  str b = "World!"
  str c = %a% + %b%
  System.out.print %c%
  ```

  вывод: Hello, World!

### Пример полного консольного приложения

```HPP
public static void Main(String[] args) {

    System.out.print Enter 1-st number

    int b = System.ReadInt()

    System.out.print Enter sign + or - or * or /

    str c = System.ReadLine()

    System.out.print Enter 2-nd number

    int a = System.ReadInt()

    str p = +
    str m = -
    str y = *
    str r = /

    System.out.print Result:
    if %c% == %p% : System.calc %b% + %a%
    int rp = #res#
    if %c% == %m% : System.calc %b% - %a%
    int rm = #res#
    if %c% == %y% : System.calc %b% * %a%
    int ry = #res#
    if %c% == %r% : System.calc %b% / %a%
    int rr = #res#

    if %c% == %p% : System.out.print %rp%
    if %c% == %m% : System.out.print %rm%
    if %c% == %y% : System.out.print %ry%
    if %c% == %r% : System.out.print %rr%

}
```

## Команды для веб-разработки (WHP)

### Основные команды

- **<WHP>**: указывает начало WHP файла. Каждый файл должен начинаться с этой строки.
- **<WHP_END>**: указывает конец WHP файла. Каждый файл должен заканчиваться этой строкой.

- **HTML <контент>**: добавляет HTML-контент в тело веб-страницы.
  - Пример:
    ```WHP
    HTML <h1>Добро пожаловать на мой сайт!</h1>
    ```

- **CSS <стили>**: добавляет стили в веб-страницу.
  - Пример:
    ```WHP
    CSS body { font-family: Arial, sans-serif; background-color: #f0f0f0; }
    ```

- **JS <скрипт>**: добавляет JavaScript код на веб-страницу.
  - Пример:
    ```WHP
    JS console.log(Страница загружена.);
    ```

- **PRINT <сообщение>**: выводит сообщение на странице, используя JavaScript.
  - Пример:
    ```WHP
    PRINT Привет, мир!
    ```

### Пример WHP файла

```WHP
<WHP>
HTML <h1>Добро пожаловать на мой сайт!</h1>
CSS body { font-family: Arial, sans-serif; background-color: #f0f0f0; }
JS console.log(Страница загружена.);
PRINT Привет, мир!
<WHP_END>
```

### Список абсолютно всех команд для консольного приложения

```HPP
System.out.print
System.timeout
System.cls
System.type
System.delete.file
System.delete.folder
System.create.file
System.create.folder
str
int
System.ReadLine - только в переменных
System.ReadInt - только в переменных
System.calc
System.math
exit()
if ==
if !=
if >
if <
%имя_перменной% - вызывает переменную в других функциях
goto
call - вызывает другой уже скомпилированный консольный файл с расширением .vvm
System.start
out.str.value
System.pause
$date$ - только с System.out.print
$time$ - только с System.out.print
array - создает массив
команды для массива:
indexout 
print 
delete
add
```

## Заключение

Эта документация охватывает основные команды и конструкции, доступные в языках HPP и WHP. Вы можете использовать эти команды для создания как консольных приложений, так и веб-страниц. Надеемся, что она окажется для вас полезной при изучении и разработке на HPP и WHP.
