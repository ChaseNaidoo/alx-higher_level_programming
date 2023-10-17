# 0-list_databases.sql
- Script that lists all databases of your MySQL server.

# 1-create_database_if_missing.sql
- Script that creates the database hbtn_0c_0 in your MySQL server.

# 2-remove_database.sql
- Script that deletes the database hbtn_0c_0 in your MySQL server.

# 3-list_tables.sql
- Script that lists all the tables of a database in your MySQL server.
- The database name will be passed as argument of mysql command.

# 4-first_table.sql
- Script that creates a table called first_table in the current database in your MySQL server
  - first_table description:
    - id INT
    - name VARCHAR(256)

# 5-full_table.sql
- Script that prints the full description of the table first_table from the database hbtn_0c_0 in your MySQL server.

# 6-list_values.sql
- Script that lists all rows of the table first_table from the database hbtn_0c_0 in your MySQL server.

# 7-insert_value.sql
- Script that inserts a new row in the table first_table (database hbtn_0c_0) in your MySQL server.
  - id = 89
  - name = Best School

# 8-count_89.sql
- Script that displays the number of records with id = 89 in the table first_table of the database hbtn_0c_0 in your MySQL server.

# 9-full_creation.sql
- Script that creates a table second_table in the database hbtn_0c_0 in your MySQL server and add multiples rows.
  - second_table description:
    - id INT
    - name VARCHAR(256)
    - score INT

# 10-top_score.sql
- Script that lists all records of the table second_table of the database hbtn_0c_0 in your MySQL server.
- Results should display both the score and the name
- Records should be ordered by score

# 11-best_score.sql
- Script that lists all records with a score >= 10 in the table second_table of the database hbtn_0c_0 in your MySQL server.
- Results should display both the score and the name
- Records should be ordered by score

# 12-no_cheating.sql
- Script that updates the score of Bob to 10 in the table second_table.
- Not allowed to use Bob’s id value, only the name field

# 13-change_class.sql
- Script that removes all records with a score <= 5 in the table second_table of the database hbtn_0c_0 in your MySQL server.

# 14-average.sql
- Script that computes the score average of all records in the table second_table of the database hbtn_0c_0 in your MySQL server.
- The result column name should be average

# 15-groups.sql
- Script that lists the number of records with the same score in the table second_table of the database hbtn_0c_0 in your MySQL server.
  - The result should display:
    - the score
    - the number of records for this score with the label number
  - The list should be sorted by the number of records (descending)

# 16-no_link.sql
- Script that lists all records of the table second_table of the database hbtn_0c_0 in your MySQL server.
  - Don’t list rows without a name value
  - Results should display the score and the name (in this order)
  - Records should be listed by descending score

