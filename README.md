# Документация для языка программирования HPP и WHP

## Введение

HPP (Hardware Performance Programming) — это интерпретируемый язык программирования, предназначенный для создания консольных приложений. WHP (Web Hardware Programming) — это расширение HPP для веб-разработки, которое позволяет создавать статические веб-страницы. Оба языка предлагают мощные команды для работы с переменными, математическими операциями, условиями и многим другим.

### Использование файлов

- Файлы для консольных приложений должны иметь расширение **`.hpp`**.
- Файлы для веб-разработки должны иметь расширение **`.whp`**.

## Команды для консольного приложения (HPP)

### Базовые команды

- **var <имя> = <значение>**: объявляет переменную и присваивает значение.
  - Пример:
    ```HPP
    var a = 10
    ```

- **input()**: считывает ввод пользователя.
  - Пример:
    ```HPP
    System.out.print Введите ваше имя:
    var name = input()
    ```

- **System.output <сообщение>**: выводит сообщение в консоль.Так же выводит значение переменной с res
  - Пример:
    ```HPP
    System.output Hello, World!
    ```

### Функции

- **func <имя_функции>() { <команда> }**: создает функцию с командой
- **call_fn <имя_функции>()**: вызывает функцию
- ** ^ : делит команды на строки в функции
  - Пример:
    ```HPP
    func print() { System.out.print %a% ^ System.out.print var a printed }
    var a = hello
    call_fn print()
    ```

### Условия

- **if.exist <имя_файла/переменная_с_именем_файла> : <команда>**: проверяет есть ли файл и если есть то выполняет команду.

- **if <переменная> == <переменная> : <команда>**: выполняет команду, если условие истинно.
  - Пример:
    ```HPP
    if %a% == %b%| System.out.print a равно %b%
    ```

- **if <переменная> != <переменная> : <команда>**: выполняет команду, если условие ложно.
  - Пример:
    ```HPP
    if %b% != %a%| System.out.print b не равно %a%
    ```

- **if <переменная> > <переменная> : <команда>**: выполняет команду, если переменная больше указанного значения.
  - Пример:
    ```HPP
    var a = 70
    if %score% > %a% : System.output Вы прошли!
    ```

- **if <переменная> < <переменная> : <команда>**: выполняет команду, если переменная меньше указанного значения.
  - Пример:
    ```HPP
    var a = 18
    if %age% < %a% : System.output Вы несовершеннолетний.
    ```

### Математические операции

- **System.calc <значение1> <операция> <значение2>**: выполняет математическую операцию с переменными и сохраняет результат в специальной переменной `res`.
  - Пример:
    ```HPP
    System.calc %x% + %y%
    var c = res
    System.output Сумма: %c%
    ```

- **System.math**: проводит операцию между двумя числами.
  - Пример:
    ```HPP
    System.math 5 + 10
    var c = res
    System.output Сумма: %c%
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
    System.output Элементы массива:
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
 
- **set <имя_переменной>**: создает переменную в формате INT для вычислений так же служит переменной для вывода ответа вычислений.
  -Пример:
  ```HPP
  set a = 5
  set b = 7
  set c = %a% + %b%
  out.var.value %c%
  ```
  вывод: 12

  -Если написать var c то результат просто не выведится,если переменным a и b написать var a и var b то получится переменная в формате STR для сложения.
  -Пример:
  ```HPP
  var a = 5
  var b = 7
  set c = %a% + %b%
  out.var.value %c%
  ```

  вывод: 57

  -команда out.var.value служит дял вывода значений перемененных set в которых хранится результат вычислений 

### Пример полного консольного приложения

```HPP
public static void Main(String[] args) {

    System.out.print Enter 1-st number

    var b = input()

    System.out.print Enter sign + or - or * or /

    var c = input()

    System.out.print Enter 2-nd number

    var a = input()

    var p = +
    var m = -
    var y = *
    var r = /

    System.out.print Result:
    if %c% == %p% : System.calc %b% + %a%
    var rp = res
    if %c% == %m% : System.calc %b% - %a%
    var rm = res
    if %c% == %y% : System.calc %b% * %a%
    var ry = res
    if %c% == %r% : System.calc %b% / %a%
    var rr = res

    if %c% == %p% : System.output %rp%
    if %c% == %m% : System.output %rm%
    if %c% == %y% : System.output %ry%
    if %c% == %r% : System.output %rr%

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
System.output
System.timeout
System.cls
System.type
System.delete.file
System.delete.folder
System.create.file
System.create.folder
var
set
input() - только в переменных
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
out.var.value
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
