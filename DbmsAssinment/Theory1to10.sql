
Q1.What do you understand By Database?
ans:
    A database is an organized collection of structured information or data that is stored and accessed electronically. 
    Databases are designed to manage, store, and retrieve large amounts of data efficiently. 
    They can be structured to allow data to be organized in rows and columns (as in relational databases), stored in a more 
    flexible format (as in NoSQL databases), or optimized for different use cases like document storage, graph-based data, etc.



Q2.What is Normalization?
ans:
   Normalization is a database design technique used to organize data to reduce redundancy and improve data integrity.
   
   Normal Forms (Steps in Normalization):
    1.First Normal Form (1NF): Ensures that each column in a table holds atomic values (single values, no repeated groups or arrays).

    2.Second Normal Form (2NF): Builds on 1NF by ensuring that all non-key attributes are fully dependent on the primary key, eliminating partial dependencies.

    3.Third Normal Form (3NF): Eliminates transitive dependencies, where non-key attributes are dependent on other non-key attributes.

    4.Boyce-Codd Normal Form (BCNF): A stricter version of 3NF, ensuring that every determinant is a candidate key.



Q3.What is Difference between DBMS and RDBMS?

+---------------------------------------------------+-----------------------------------------------------------------------------------+
+   DBMS	                                        +   RDBMS                                                                           +
+---------------------------------------------------+-----------------------------------------------------------------------------------+ 
+  DBMS stores data as file.	                    +   RDBMS stores data in tabular form.                                              +       
+   Data elements need to access individually.	    +   Multiple data elements can be accessed at the same time.                        +
+   No relationship between data.	                +   Data is stored in the form of tables which are related to each other            +   
+   Normalization is not present.	                +   Normalization is present.                                                       +
+   DBMS does not support distributed database.	    +   RDBMS supports distributed database.                                            +
+   It stores data in either a navigational or 	    +   It uses a tabular structure where the headers are the column names,             +
+   hierarchical form.                              +   and the rows contain corresponding values.                                      +
+   It deals with small quantity of data.	        +   It deals with large amount of data.                                             + 
+---------------------------------------------------------------------------------------------------------------------------------------+



Q4.What is MF Cod Rule of RDBMS Systems?
Ans:
Codd’s rules are proposed by a computer scientist named Dr. Edgar F. Codd and he also invent the relational model for database management. These rules are made to ensure data integrity, consistency, and usability. This set of rules basically signifies the characteristics and requirements of a relational database management system (RDBMS). In this article, we will learn about various Codd’s rules.

Codd’s Rules in DBMS
Rule 1: The Information Rule
All information, whether it is user information or metadata, that is stored in a database must be entered as a value in a cell of a table. It is said that everything within the database is organized in a table layout.

Rule 2: The Guaranteed Access Rule
Each data element is guaranteed to be accessible logically with a combination of the table name, primary key (row value), and attribute name (column value). 

Rule 3: Systematic Treatment of NULL Values
Every Null value in a database must be given a systematic and uniform treatment. 

Rule 4: Active Online Catalog Rule
The database catalog, which contains metadata about the database, must be stored and accessed using the same relational database management system.

Rule 5: The Comprehensive Data Sublanguage Rule
A crucial component of any efficient database system is its ability to offer an easily understandable data manipulation language (DML) that facilitates defining, querying, and modifying information within the database.

Rule 6: The View Updating Rule
All views that are theoretically updatable must also be updatable by the system.

Rule 7: High-level Insert, Update, and Delete
A successful database system must possess the feature of facilitating high-level insertions, updates, and deletions that can grant users the ability to conduct these operations with ease through a single query.

Rule 8: Physical Data Independence
Application programs and activities should remain unaffected when changes are made to the physical storage structures or methods.

Rule 9: Logical Data Independence 
Application programs and activities should remain unaffected when changes are made to the logical structure of the data, such as adding or modifying tables.

Rule 10: Integrity Independence
Integrity constraints should be specified separately from application programs and stored in the catalog. They should be automatically enforced by the database system.

Rule 11: Distribution Independence
The distribution of data across multiple locations should be invisible to users, and the database system should handle the distribution transparently.

Rule 12: Non-Subversion Rule
If the interface of the system is providing access to low-level records, then the interface must not be able to damage the system and bypass security and integrity constraints.





Q5.What do you understand By Data Redundancy? 
Ans:
    Data redundancy occurs when the same piece of data is stored in multiple places within a database or across different databases. This duplication can lead 
    to inefficiencies and inconsistencies, especially in large systems where managing and updating information becomes more complex.




 Q6.What is DDL Interpreter?
Ans:
     A DDL (Data Definition Language) Interpreter is a component within a Database Management System (DBMS) responsible for interpreting and executing DDL commands, which define and modify the structure of database objects such as tables, indexes, views, and schemas. DDL statements include commands like CREATE, ALTER, and DROP, which are used to create, change, and delete database objects.

     DDL Commands:
     1.CREATE: Defines new tables, indexes, or views.
     2.ALTER: Modifies the structure of an existing table (e.g., adding a column).
     3.DROP: Deletes a table or database object entirely.

     Process Flow of a DDL Command Execution:
     1.Parsing: The interpreter parses the DDL command to understand what is requested (e.g., creating a new table).
     2.Syntax and Semantics Checking: It checks for syntax correctness and ensures that the command logically fits within the existing database structure.
     3.Execution: If the command is valid, the interpreter carries out the changes in the database.
     4.Metadata Update: Finally, the metadata is updated to reflect the new database structure.



Q7.What is DML Compiler in SQL? 
Ans:
    A DML (Data Manipulation Language) Compiler in SQL is a component of the Database Management System (DBMS) that processes DML commands. DML commands are used for managing data within database tables, including operations like inserting, updating, deleting, and retrieving data. The DML Compiler translates high-level DML commands into a low-level language that the DBMS's query engine can execute.

    DML Commands:
    1.SELECT: Retrieves specific data from one or more tables.
    2.INSERT: Adds new rows of data to a table.
    3.UPDATE: Modifies existing data in a table.
    4.DELETE: Removes data from a table.

    Process Flow of a DDL Command Execution:
    1.Parsing: The interpreter parses the DDL command to understand what is requested (e.g., creating a new table).
    2.Syntax and Semantics Checking: It checks for syntax correctness and ensures that the command logically fits within the existing database structure.
    3.Execution: If the command is valid, the interpreter carries out the changes in the database.    
    Metadata Update: Finally, the metadata is updated to reflect the new database structure.



Q8.What is SQL Key Constraints writing an Example of SQL Key Constraints.
Ans:
    SQL Key Constraints are rules applied to database columns to ensure the accuracy and integrity of the data. 
    They define relationships between tables and enforce restrictions on the data that can be entered into specific columns. The primary SQL key constraints are Primary Key, Foreign Key, Unique Key, Not Null, and Check constraints.

    1.Primary Key Constraint:

    Uniquely identifies each row in a table.
    Does not allow NULL values.
    Each table can have only one primary key, which may consist of one or multiple columns (composite key).

    2.Foreign Key Constraint:

    Enforces a link between two tables by ensuring that the value in one table (child) corresponds to a valid entry in another table (parent).
    Helps maintain referential integrity.

    3.Unique Key Constraint:

    Ensures all values in a column or a group of columns are unique across the table.
    Unlike primary keys, a table can have multiple unique constraints, and they can allow NULL values (only one per unique column).

    4.Not Null Constraint:

    Ensures a column cannot have a NULL value.
    Typically used for columns where data entry is required.

    5.Check Constraint:

    Restricts the values that can be placed in a column according to a specified condition.
    Ensures data integrity by enforcing specific rules.



Q9. What is save Point? How to create a save Point write a Query?
Ans:
    A savepoint is a feature in SQL that allows you to set a point within a transaction to which you can later roll back if needed, without affecting the entire transaction. This is useful when you want to partially undo some operations in a transaction, rather than rolling back everything.

    To create a savepoint, you use the SAVEPOINT command followed by a name for the savepoint.
        +-----------------------------+
        +  SAVEPOINT savepoint_name;  +
        +-----------------------------+



Q10.What is trigger and how to create a Trigger in SQL? 
Ans:
    A trigger is a special type of stored procedure in SQL that automatically executes in response to certain events on a table or view. Triggers can be set to run before or after events such as INSERT, UPDATE, or DELETE. They are useful for maintaining data integrity, enforcing business rules, auditing changes, and more.

    Types of Triggers
    1.Before Trigger: Executes before the event (e.g., before inserting or updating data).
    2.After Trigger: Executes after the event has occurred.
    3.Instead Of Trigger: Typically used on views, this trigger replaces the action (useful in specific cases).

    Syntax for Creating a Trigger
    The general syntax for creating a trigger is as follows:
    +-------------------------------------------------------------+
    +    CREATE TRIGGER trigger_name                              +
    +    [BEFORE | AFTER] [INSERT | UPDATE | DELETE]              +
    +    ON table_name                                            +
    +    FOR EACH ROW                                             +
    +    BEGIN                                                    +
    +        -- Trigger logic here                                +
    +    END;                                                     +
    +-------------------------------------------------------------+

