# Документация для языка программирования HPP и WHP

## Введение

HPP (Hardware Performance Programming) — это интерпретируемый язык программирования, предназначенный для создания консольных приложений. WHP (Web Hardware Programming) — это расширение HPP для веб-разработки, которое позволяет создавать статические веб-страницы. Оба языка предлагают мощные команды для работы с переменными, математическими операциями, условиями и многим другим.

### Использование файлов

- Файлы для консольных приложений должны иметь расширение **`.hpp`**.
- Файлы для веб-разработки должны иметь расширение **`.whp`**.
- Что бы сделать исполняемый файл из .hpp нужно написать в консоли hppinstaller <полный путь к папке с файлом> <имя файла.vvm> , тогда скрипт создаст папку которая важна для работы программы и исполняемый батник который будет запускать скрипт на ос на которой может быть не установлен HPP (важно что бы файл и батник были в одной директории)
- Запустить скрипт можно через IDE, а можно через консоль Windows:
- hpp <полный_путь_к_файлу.hpp>
- Это действие создаст файл с таким же именем но расширением .vvm который сможет обработать интерпретатор.
- vvm <полный_путь_к_файлу.vvm>
- Это действие запускает скрипт.

## Команды для консольного приложения (HPP)

### Базовые команды

- **str \ int <имя> = <значение>**: объявляет переменную и присваивает значение.
  - Пример:
    ```HPP
    str a = Hello!
    int b = 5
    ```

- **str <имя> = split <переменная>**: разделяет str переменную на слова по пробелам и сохраняет каждое слово в указаные имена переменных.
  - Пример:
    ```HPP
    str name = "toika"
    str text = "My name is toika"
    str word1 word2 word3 word4 = split %text%
    if %word4% == %name% : System.out.print Hello %word4%
    ```

- **int <имя> = Random <значение 1> <значение 2>**: объявляет переменную и присваивает ей рандомное значение в диапозоне 1 значения до 2 значения.
  - Пример:
    ```HPP
    int b = Random 1 3
    System.out.print %b%
    ```

    либо 1 либо 2 либо 3

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

### Работа с реестром Windows (только для Windows)

- **System.reg.read <корень_ключа> <путь_к_ключу> <имя_значения> <переменная_для_сохранения>**: Читает значение из реестра Windows и сохраняет его в указанную переменную.
    - **<корень_ключа>**: Один из стандартных корневых ключей реестра (например, `HKEY_CURRENT_USER`, `HKEY_LOCAL_MACHINE`).
    - **<путь_к_ключу>**: Путь к разделу реестра (например, `Software\MyApp`).
    - **<имя_значения>**: Имя значения в разделе реестра (например, `MySetting`).
    - **<переменная_для_сохранения>**: Имя переменной, в которую будет сохранено прочитанное значение.
    - Пример:
      ```HPP
      System.reg.read HKEY_CURRENT_USER Software\MyApp MySetting myRegistryValue
      System.out.print Прочитанное значение: %myRegistryValue%
      ```
    - **Примечание:** Если ключ или значение не найдены, будет выведено сообщение об ошибке, и переменная не будет создана.

- **System.reg.write <корень_ключа> <путь_к_ключу> <имя_значения> <тип_значения> <значение>**: Записывает значение в реестр Windows. Если указанный ключ не существует, он будет создан.
    - **<корень_ключа>**: Один из стандартных корневых ключей реестра (например, `HKEY_CURRENT_USER`, `HKEY_LOCAL_MACHINE`).
    - **<путь_к_ключу>**: Путь к разделу реестра (например, `Software\MyApp`).
    - **<имя_значения>**: Имя значения, которое будет записано.
    - **<тип_значения>**: Тип значения реестра (например, `REG_SZ` для строки, `REG_DWORD` для 32-битного числа). Поддерживаются `REG_SZ`, `REG_DWORD`, `REG_BINARY`.
    - **<значение>**: Данные для записи. Для `REG_SZ` используйте строку в кавычках. Для `REG_DWORD` используйте число.
    - Пример:
      ```HPP
      System.reg.write HKEY_CURRENT_USER Software\MyApp MySetting REG_SZ "This is a test value"
      System.reg.write HKEY_CURRENT_USER Software\MyApp MyNumber REG_DWORD 12345
      ```

- **System.reg.delete <корень_ключа> <путь_к_ключу> <имя_значения>**: Удаляет указанное значение из раздела реестра.
    - **<корень_ключа>**: Один из стандартных корневых ключей реестра (например, `HKEY_CURRENT_USER`, `HKEY_LOCAL_MACHINE`).
    - **<путь_к_ключу>**: Путь к разделу реестра (например, `Software\MyApp`).
    - **<имя_значения>**: Имя значения, которое нужно удалить.
    - Пример:
      ```HPP
      System.reg.delete HKEY_CURRENT_USER Software\MyApp MySetting
      ```
    - **Примечание:** Если ключ или значение не найдены, будет выведено сообщение об ошибке.

### Время
- **System.timeout <время в секундах>**: ждет определенное количество времени
  - Пример:
    ```HPP
    System.timeout 0.5
    ```
- **System.pause**: ждет нажатия enter
  - Пример:
    ```HPP
    System.pause
    ```

### Базы данных

- **DB.open <файл_базы_данных>**: Открывает существующий файл базы данных SQLite (например, mydata.db) или создает его, если он не существует. Устанавливает активное соединение с базой данных.
  - Пример:
    ```HPP
    DB.open my_application.db
    ```

- **DB.close**: Закрывает текущее активное соединение с базой данных.
  - Пример:
    ```HPP
    DB.close
    ```

- **DB.execute <SQL_запрос>**: Выполняет SQL-запрос, который не возвращает набор данных (например, CREATE TABLE, INSERT, UPDATE, DELETE).
  - Пример:
    ```HPP
    DB.execute CREATE TABLE users (id INTEGER PRIMARY KEY, name TEXT, age INTEGER)

    str new_user = "Alice"
    int user_age = 30
    DB.execute INSERT INTO users (name, age) VALUES ('%new_user%', %user_age%)
    
    DB.execute UPDATE users SET age = 31 WHERE name = 'Alice'
    DB.execute DELETE FROM users WHERE name = 'Bob'
    ```

- **DB.query <SQL_запрос> <переменная_для_результата>**: Выполняет SQL-запрос, который возвращает набор данных (например, SELECT), и сохраняет результаты в указанную переменную HPP.
  - Пример:
    ```HPP
    DB.query SELECT * FROM users all_users
    System.out.print All users: %all_users%
    
    int min_age = 25
    DB.query SELECT name FROM users WHERE age > %min_age% young_names
    System.out.print Young users: %young_names%
    ```

- **DB.commit**: Сохраняет все изменения (операции INSERT, UPDATE, DELETE и т.д.), выполненные с момента последнего DB.commit или DB.rollback.
  - Пример:
    ```HPP
    DB.execute INSERT INTO products (name, price) VALUES ('Laptop', 1200)
    DB.commit
    ```

- **DB.rollback**: Отменяет все изменения (операции INSERT, UPDATE, DELETE и т.д.), выполненные с момента последнего DB.commit или DB.rollback. Возвращает базу данных в предыдущее состояние.
  - Пример:
    ```HPP
    DB.execute INSERT INTO temp_data (value) VALUES (1)
    DB.rollback
    ```

### Пример использования базы данных:

```HPP
public static void Main(String[] args) {

    DB.open myapp_database.db

    DB.execute CREATE TABLE IF NOT EXISTS products (id INTEGER PRIMARY KEY, name TEXT NOT NULL, price REAL)

    DB.execute INSERT INTO products (name, price) VALUES ('Keyboard', 75.50)
    DB.execute INSERT INTO products (name, price) VALUES ('Mouse', 25.00)
    
    DB.commit
    
    DB.execute INSERT INTO products (name, price) VALUES ('Monitor', 300.00)
    
    DB.rollback 
    
    DB.query SELECT * FROM products product_list
    
    System.out.print All Products:
    System.out.print %product_list%
    
    DB.query SELECT name FROM products WHERE price > 50 expensive_products_names
    
    System.out.print Expensive Products:
    System.out.print %expensive_products_names%

    DB.close

}
```

### Объяснение кода:

- start: Обозначает начало основной части программы.
- DB.open myapp_database.db: Эта команда открывает соединение с базой данных SQLite с именем myapp_database.db. Если файл базы данных не существует, он будет создан.
- Создаем таблицу, если она не существует (используем IF NOT EXISTS): Комментарий.
- DB.execute CREATE TABLE IF NOT EXISTS products (id INTEGER PRIMARY KEY, name TEXT NOT NULL, price REAL): Эта команда выполняет SQL-запрос на создание таблицы с именем products.
- IF NOT EXISTS: Гарантирует, что таблица будет создана только в том случае, если она еще не существует. Это предотвращает ошибку при повторном запуске скрипта.
- (id INTEGER PRIMARY KEY, name TEXT NOT NULL, price REAL): Определяет столбцы таблицы:
- id: Целочисленный столбец, который является первичным ключом (уникальный идентификатор для каждой строки) и автоматически увеличивается.
- name: Текстовый столбец, который не может быть пустым (NOT NULL).
- price: Столбец с плавающей точкой для цен.
- Вставляем данные: Комментарий.
- DB.execute INSERT INTO products (name, price) VALUES ('Keyboard', 75.50): Выполняет SQL-запрос на вставку новой строки в таблицу products со значениями 'Keyboard' для name и 75.50 для price. id будет присвоен автоматически.
- DB.execute INSERT INTO products (name, price) VALUES ('Mouse', 25.00): Вставляет еще одну строку со значениями 'Mouse' и 25.00.
- Сохраняем изменения: Комментарий.
- DB.commit: Эта команда сохраняет все изменения, внесенные с момента последнего коммита или открытия базы данных. В данном случае, она сохраняет вставку 'Keyboard' и 'Mouse'.
- Вставляем еще данные, но не коммитим: Комментарий.
- DB.execute INSERT INTO products (name, price) VALUES ('Monitor', 300.00): Вставляет еще одну строку со значениями 'Monitor' и 300.00. Важно: Это изменение пока не сохранено в базе данных, оно находится только в текущей транзакции.
- Отменяем последнее изменение: Комментарий.
- DB.rollback: Эта команда отменяет все изменения, внесенные с момента последнего коммита. В данном случае, она отменяет вставку 'Monitor'.
- Запрашиваем все данные: Комментарий.
- DB.query SELECT * FROM products product_list: Выполняет SQL-запрос на выборку всех столбцов (*) из таблицы products. Результат этого запроса (все строки таблицы после отмены вставки 'Monitor') будет сохранен в переменную с именем product_list. Формат сохранения в переменной, как показано в коде, будет строкой, где каждая строка данных из базы данных представлена - строкой в переменной, а столбцы разделены запятыми.
- Выводим результаты: Комментарий.
- System.out.print All Products:: Выводит на консоль строку "All Products:".
- System.out.print %product_list%: Выводит на консоль содержимое переменной product_list. Поскольку вставка 'Monitor' была отменена, здесь будут только строки для 'Keyboard' и 'Mouse'.
- Запрашиваем только названия продуктов дороже 50: Комментарий.
- DB.query SELECT name FROM products WHERE price > 50 expensive_products_names: Выполняет SQL-запрос на выборку только столбца name из таблицы products для строк, где значение столбца price больше 50. Результат будет сохранен в переменную expensive_products_names.
- Выводим названия дорогих продуктов: Комментарий.
- System.out.print Expensive Products:: Выводит на консоль строку "Expensive Products:".
- System.out.print %expensive_products_names%: Выводит на консоль содержимое переменной expensive_products_names. Поскольку только 'Keyboard' имеет цену выше 50, здесь будет только строка для 'Keyboard'.
- Закрываем соединение с базой данных: Комментарий.
- DB.close: Закрывает соединение с базой данных.
- end: Обозначает конец основной части программы.
- Ожидаемый вывод:

- Исходя из выполнения команд, ожидаемый вывод на консоль будет следующим:

```
Copy
All Products:
1,Keyboard,75.5
2,Mouse,25.0
Expensive Products:
Keyboard
```

Пояснения к выводу:


- All Products:: Эта строка выводится командой System.out.print All Products:.
- 1,Keyboard,75.5: Это первая строка из переменной product_list. Она соответствует записи 'Keyboard', которая была вставлена и закоммичена. 1 - это автоматически присвоенный id, Keyboard - name, 75.5 (или 75.50 в зависимости от форматирования REAL) - price.
- 2,Mouse,25.0: Это вторая строка из переменной product_list. Она соответствует записи 'Mouse', которая также была вставлена и закоммичена. 2 - это автоматически присвоенный id, Mouse - name, 25.0 (или 25.00) - price. Запись 'Monitor' отсутствует, потому что она была отменена командой DB.rollback.
- Expensive Products:: Эта строка выводится командой System.out.print Expensive Products:.
- Keyboard: Это содержимое переменной expensive_products_names. SQL-запрос SELECT name FROM products WHERE price > 50 выбрал только строки, где цена больше 50. Из оставшихся записей ('Keyboard' и 'Mouse'), только 'Keyboard' удовлетворяет этому условию. Поскольку запрос SELECT name выбирает только столбец name, результат содержит только "Keyboard".

### Процессы
- **System.process.kill <имя_файла_процесса>**: завершает процесс
  - Пример:
    ```HPP
    System.process.kill explorer.exe
    ```

### Вызов файла .vvm
- **include <имя_файла.vvm>**: вызывает файл .vvm
  - Пример:
    ```HPP
    include factorial.vvm
    ```
    
### Создание приложения
- **System.create.window <имя_окна> <разрешение> <разрешение>**: создает окно
  - Пример:
    ```HPP
    System.create.window Calculator 500 200
    ```
    
- **System.add_text.window <имя_окна> <координата> <координата> <текст>**: создает текст в указаном окне
  - Пример:
    ```HPP
    System.add_text.window Calculator 80 10 Hello, World!
    ```

- **System.get.window <имя_окна> <имя_переменной> <разрешение> <разрешение> <координата> <координата>**: создает поле для ввода и сохраняет ввод в переменную
  - Пример:
    ```HPP
    System.get.window Calculator myvar 100 100 10 10 
    ```

- **System.close.window <имя_окна>**: закрывает окно
  - Пример:
    ```HPP
    System.close.window Calculator
    ```

- **System.clear.window <имя_окна>**: очищает окно
  - Пример:
    ```HPP
    System.clear.window Calculator
    ```

- **System.clear_all_text.window <имя_окна>**: очищает весь текст в окне кроме кнопок и ввода информации
  - Пример:
    ```HPP
    System.clear_all_text.window Calculator
    ```
    
- **System.add_button.window <имя_окна> <имя_кнопки> <координата_X> <координата_Y> <размер> <размер> <имя_функции>**: создает кнопку с параметрами а затем при нажатии вызывает указанную функцию
  - Пример:
    ```HPP
    System.add_button.window Calculator + 20 20 50 50 plus
    ```
    
### Нажатие клавиш
- **System.keyboard.press <имя кнопки>**: нажимает кнопку

   
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

- **if <переменная/значение> == <переменная/значение> : <команда>**: выполняет команду, если условие истинно.
  - Пример:
    ```HPP
    if %a% == %b% : System.out.print a equal %b%
    ```

- **if <переменная/значение> != <переменная/значение> : <команда>**: выполняет команду, если условие ложно.
  - Пример:
    ```HPP
    if %b% != %a% : System.out.print b not equal %a%
    ```

- **if <переменная/значение> > <переменная/значение> : <команда>**: выполняет команду, если переменная больше указанного значения.
  - Пример:
    ```HPP
    int a = 70
    if %score% > %a% : System.out.print You passed!
    ```

- **if <переменная/значение> < <переменная/значение> : <команда>**: выполняет команду, если переменная меньше указанного значения.
  - Пример:
    ```HPP
    int a = 18
    if %age% < %a% : System.out.print You are a minor.
    ```

- **if.startswith <переменная/значение> == <переменная/значение> : <команда>**: выполняет команду, если переменная начинается с указанного значения.
  - Пример:
    ```HPP
    if.startswith %var% == hello : System.out.print Hi
    ```

- **if.endswith <переменная/значение> == <переменная/значение> : <команда>**: выполняет команду, если переменная заканчивается указанным значением.
  - Пример:
    ```HPP
    if.endswith %var% == goodbye : System.out.print gb
    ```

- **if.exist <переменная/значение> : <команда>**: выполняет команду, если в директории находится указанный файл.
  - Пример:
    ```HPP
    if.exist %a% : System.out.print %a% exist
    ```
    - **Примечание:** Обязательно нужно использовать полный путь.

- **if.notexist <переменная/значение> : <команда>**: выполняет команду, если в директории не находится указанный файл.
  - Пример:
    ```HPP
    if.notexist %a% : System.out.print %a% notexist
    ```
    - **Примечание:** Обязательно нужно использовать полный путь.

### Turtle

- **Turtle.setup <разрешение> <разрешение>**: создает окно Turtle с указаным размером.
  - Пример:
    ```HPP
    Turtle.setup 400 400
    ```
    
- **Turtle.screen.title <имя_окна>**: устанавливает заголовок окна.
  - Пример:
    ```HPP
    Turtle.screen.title Turtle
    ```

- **Turtle.create**: создает объект черепашку Turtle.

- **Turtle.pencolor <цвет>**: устанавливает цвет пера.

- **Turtle.screen.bgcolor <имя_цвета>**: устанавливает цвет background.
  - Пример:
    ```HPP
    Turtle.screen.bgcolor lightblue
    ```
- **Turtle.speed <число>**: устанавливает скорость Turtle.

- **Turtle.circle <число>**: создает круг.

- **Turtle.pensize <число>**: устанавливает толщену пера.
 
- **Turtle.pendown**: опускает перо.

- **Turtle.penup**: поднимает перо.

- **Turtle.goto <координаты> <координаты>**: перемещает перо

- **Turtle.hideturtle**: скрыть перо.

- **Turtle.showturtle**: показывает перо.

- **Turtle.write Hi from %my_name%! move=False align=center**: пишет текст в окне.

- **Turtle.forward <длинна>**: рисует пером.

- **Turtle.right <длинна>**: рисует пером.

- **Turtle.left <длинна>**: рисует пером.

- **Turtle.backward <длинна>**: рисует пером.

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
    
- **Math.factorial**: проводит операцию между двумя числами.
  - Пример:
    ```HPP
    int my_num = 5
    Math.factorial %my_num% result_factorial
    System.out.print %result_factorial%
    ```

- **Math.sqrt <число или %переменная%> <переменная_для_результата>: Вычисляет квадратный корень неотрицательного числа и сохраняет результат в указанную переменную.
  - Пример:
    ```HPP
    Math.sqrt 16 sqrt_result
    System.out.print %sqrt_result%
    ```

- **Math.pow <основание или %переменная%> <показатель или %переменная%> <переменная_для_результата>: Вычисляет степень числа (основание в степени показатель) и сохраняет результат в указанную переменную.
  - Пример:
    ```HPP
    int base_val = 2
    int exponent_val = 3
    Math.pow %base_val% %exponent_val% power_result
    System.out.print %power_result%
    ```
- **Math.log <число или %переменная%> [основание или %переменная%]? <переменная_для_результата>: Вычисляет логарифм числа по указанному основанию и сохраняет результат в переменную. Если основание не указано, вычисляется натуральный логарифм (по основанию e).
- Пример:
  ```HPP
  Math.log 100 10 log_base_10
  System.out.print %log_base_10%
  
  Math.log 5 log_natural
  System.out.print %log_natural%
  ```

- **Math.abs <число или %переменная%> <переменная_для_результата>: Вычисляет абсолютное значение числа и сохраняет результат в указанную переменную.
- Пример:
  ```HPP
  Math.abs -15.7 absolute_value
  System.out.print %absolute_value%
  ```

- **Math.round <число или %переменная%> [количество_знаков_после_запятой или %переменная%]? <переменная_для_результата>: Округляет число до указанного количества знаков после запятой и сохраняет результат в переменную. Если количество знаков не указано, округляет до ближайшего целого.
- Пример:
  ```HPP
  Math.round 3.14159 rounded_to_int
  System.out.print %rounded_to_int%

  Math.round 3.14159 2 rounded_to_two
  System.out.print %rounded_to_two%
  ```
    
### Массивы

- **array <имя_массива> = []**: Объявляет пустой массив с указанным именем.
  - Пример:
    ```HPP
    array my_list = []
    ```

- **array add <имя_массива> <значение>**: Добавляет элемент в конец массива. Значение может быть строковым литералом (в кавычках), числовым литералом или переменной (используя `%`).
  - Пример:
    ```HPP
    array my_list = []
    array add my_list first item
    str my_var = "test"
    array add my_list %my_var%
    array add my_list 123
    array print my_list
    ```
    - **Примечание:** Строковые литералы, заключенные в кавычки, добавляются в массив вместе с кавычками. Числовые литералы добавляются как строки.

- **array delete <имя_массива> <индекс>**: Удаляет элемент массива по указанному индексу. Индексация начинается с 0. Индекс может быть указан как число или как переменная (используя `%`).
  - Пример:
    ```HPP
    array numbers = []
    array add number 10
    array add number 20
    array add number 30
    array add number 40
    array delete numbers 1
    int index_to_delete = 0
    array delete numbers %index_to_delete%
    array print numbers
    ```
    - **Примечание:** Если индекс выходит за пределы массива, будет выведено сообщение об ошибке, и операция не будет выполнена.

- **array indexout <имя_массива> <индекс>**: Выводит элемент массива по указанному индексу в консоль. Индексация начинается с 0. Индекс может быть указан как число или как переменная (используя `%`).
  - Пример:
    ```HPP
    array fruits = []
    array add fruits apple
    array add fruits banana
    array add fruits cherry
    array indexout fruits 1
    int target_index = 2
    array indexout fruits %target_index% 
    ```
    - **Примечание:** Если индекс выходит за пределы массива, будет выведено сообщение об ошибке.Так же нельзя создавать массив уже с элементами, их нужно добавлять.

- **array print <имя_массива>**: Выводит содержимое массива в консоль.
  - Пример:
    ```HPP
    array print my_array
    ```

- **array out <имя_массива>**: Выводит слитно содержимое массива в консоль.
  - Пример:
    ```HPP
    array out my_array
    ```

- **array print <имя_массива> <имя_переменной>**: Не выводит содержимое массива в консоль,но сохраняет содержимое раздельно в указанную переменную.
  - Пример:
    ```HPP
    array print my_array myvar
    ```

- **array out <имя_массива> <имя_переменной>**: Не выводит содержимое массива в консоль,но сохраняет слитно содержимое в указанную переменную.
  - Пример:
    ```HPP
    array out my_array myvar
    ```

- **array remove <имя_массива>**: Удаляет массив.
  - Пример:
    ```HPP
    array remove my_array
    ```

- **array get <имя_массива> <индекс> <переменная_для_сохранения>**: Получает элемент массива по указанному индексу и сохраняет его в указанную переменную. Индексация начинается с 0. Индекс может быть указан как число или как переменная (используя `%`).
  - Пример:
    ```HPP
    array fruits = []
    array add fruits apple
    array add fruits banana
    array add fruits cherry
    array get fruits 1 second_fruit
    System.out.print second fruit: %second_fruit%
    int target_index = 0
    array get fruits %target_index% first_fruit
    System.out.print first fruit: %first_fruit% 
    ```
    - **Примечание:** Если индекс выходит за пределы массива, будет выведено сообщение об ошибке, и переменная не будет создана.

- **array split <переменная_строки> <имя_массива>**: Разделяет содержимое строковой переменной на подстроки по пробельным символам и сохраняет их как элементы нового массива. Исходная переменная должна быть указана в формате `%переменная_строки%`.
  - Пример:
    ```HPP
    str sentence = "This is a sample sentence."
    array split %sentence% words_array
    array print words_array
    ```
    - **Примечание:** Команда `array split` по умолчанию использует пробельные символы (пробелы, табуляции, переводы строк) в качестве разделителя.


### Команды для управления с сетью

- **nbtstat <аргументы>**: команда из Windows.
  - Пример:
    ```HPP
    nbtstat -s
    ```

- Все команды для управления с сетью:
  - ```HPP
    nbtstat
    ipconfig
    netstat
    tracert
    traceroute
    telnet
    ping
    pathping
    nslookup
    getmac
    apr
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

- **System.file.copy <путь к файлу> <путь к копии файла>**: копирует файл в указаную директорию.
  - Пример:
    ```HPP
    System.file.copy file.txt file_copy.txt
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

- **System.file.read <имя файла> <переменная>**: читает файл и сохраняет содержимое файла в переменную.
  - Пример:
    ```HPP
    System.file.read file.txt myvar
    ```

- **System.file.rename <имя файла> <новое имя файла>**: переименовывает файл.
  - Пример:
    ```HPP
    System.file.rename file.txt file2.txt
    ```
    
- **System.file.move <путь к файлу> <новый путь к файлу>**: перемещает файл.
  - Пример:
    ```HPP
    System.file.move C:\files\file.txt C:\file.txt
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

## Заключение

Эта документация охватывает основные команды и конструкции, доступные в языках HPP и WHP. Вы можете использовать эти команды для создания как консольных приложений, так и веб-страниц. Надеемся, что она окажется для вас полезной при изучении и разработке на HPP и WHP.
