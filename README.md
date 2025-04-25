# Документация для языка программирования HPP и WHP

## Введение

HPP (Hardware Performance Programming) — это интерпретируемый язык программирования, предназначенный для создания консольных приложений. WHP (Web Hardware Programming) — это расширение HPP для веб-разработки, которое позволяет создавать статические веб-страницы. Оба языка предлагают мощные команды для работы с переменными, математическими операциями, условиями и многим другим.

### Использование файлов

- Файлы для консольных приложений должны иметь расширение **`.hpp`**.
- Файлы для веб-разработки должны иметь расширение **`.whp`**.

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
    System.out.str Enter your name:
    str name = System.ReadLine()
    ```

- **System.out.int <число>**: выводит число в консоль.Так же выводит значение переменной с #res# или переменную int
  - Пример:
    ```HPP
    int a = 5
    System.out.int %a%
    ```

- **System.out.str <сообщение>**: выводит сообщение в консоль.Так же выводит значение переменной str
  - Пример:
    ```HPP
    str b = Hello!
    System.out.str %a%
    ```

### Функции

- **func <имя_функции>() { <команда> }**: создает функцию с командой
- **call_fn <имя_функции>()**: вызывает функцию
- ** ^ : делит команды на строки в функции
  - Пример:
    ```HPP
    func print() { System.out.str %a% ^ System.out.str str a printed }
    str a = hello
    call_fn print()
    ```

### Условия

- **if.exist <имя_файла/переменная_с_именем_файла> : <команда>**: проверяет есть ли файл и если есть то выполняет команду.

- **if <переменная> == <переменная> : <команда>**: выполняет команду, если условие истинно.
  - Пример:
    ```HPP
    if %a% == %b% : System.out.str a equal %b%
    ```

- **if <переменная> != <переменная> : <команда>**: выполняет команду, если условие ложно.
  - Пример:
    ```HPP
    if %b% != %a% : System.out.str b not equal %a%
    ```

- **if <переменная> > <переменная> : <команда>**: выполняет команду, если переменная больше указанного значения.
  - Пример:
    ```HPP
    str a = 70
    if %score% > %a% : System.out.str You passed!
    ```

- **if <переменная> < <переменная> : <команда>**: выполняет команду, если переменная меньше указанного значения.
  - Пример:
    ```HPP
    str a = 18
    if %age% < %a% : System.out.str You are a minor.
    ```

### Математические операции

- **System.calc <значение1> <операция> <значение2>**: выполняет математическую операцию с переменными и сохраняет результат в специальной переменной `#res#`.
  - Пример:
    ```HPP
    System.calc %x% + %y%
    str c = #res#
    System.out.int %c%
    ```

- **System.math**: проводит операцию между двумя числами.
  - Пример:
    ```HPP
    System.math 5 + 10
    str c = #res#
    System.out.int %c%
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
    System.out.int Элементы массива:
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
  System.out.int %c%
  ```
  вывод: 12

  -Если написать str c то результат просто не выведится,если переменным a и b написать str a и str b то получится переменная в формате STR для сложения.
  -Пример:
  ```HPP
  str a = 5
  str b = 7
  int c = %a% + %b%
  System.out.int %c%
  ```

  вывод: 57

  -команда System.out.int служит дял вывода значений перемененных int в которых хранится результат вычислений 

### Пример полного консольного приложения

```HPP
public static void Main(String[] args) {

    System.out.str Enter 1-st number

    int b = System.ReadInt()

    System.out.str Enter sign + or - or * or /

    str c = System.ReadLine()

    System.out.str Enter 2-nd number

    int a = System.ReadInt()

    str p = +
    str m = -
    str y = *
    str r = /

    System.out.str Result:
    if %c% == %p% : System.calc %b% + %a%
    int rp = #res#
    if %c% == %m% : System.calc %b% - %a%
    int rm = #res#
    if %c% == %y% : System.calc %b% * %a%
    int ry = #res#
    if %c% == %r% : System.calc %b% / %a%
    int rr = #res#

    if %c% == %p% : System.out.int %rp%
    if %c% == %m% : System.out.int %rm%
    if %c% == %y% : System.out.int %ry%
    if %c% == %r% : System.out.int %rr%

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
System.out.str
System.out.int
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
System.pause
$date$ - только с System.out.str
$time$ - только с System.out.str
array - создает массив
команды для массива:
indexout 
print 
delete
add
```

## Заключение

Эта документация охватывает основные команды и конструкции, доступные в языках HPP и WHP. Вы можете использовать эти команды для создания как консольных приложений, так и веб-страниц. Надеемся, что она окажется для вас полезной при изучении и разработке на HPP и WHP.
