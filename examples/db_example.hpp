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