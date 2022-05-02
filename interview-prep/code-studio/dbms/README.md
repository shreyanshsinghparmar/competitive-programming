# Database Management System

## Basic terminology

DBMS is system software used to manage the data in an organization, including it's storage, access, modification and integrity

DBMS is an interface between the database and end users, keeping data organized and accessible consistently

### Uses of DBMS

* Manages big amounts of data impossible to do through software like spreadsheets

* Improved data sharing and data security

* Accuracy of data through built-in constraints, checks, etc

* Easy to update data through Data Manipulation Languages (DMLs) like SQL

* Effective Data Integration. Easy to see how processes in one segment affect other segments

* Easy to research data using Data Query Language (DQL) which allow searching data and performing computations on it

### File system vs DBMS

| DBMS | Flat File System |
| -------- | ----------- |
| Collection of interrelated data and software to access and manipulate that data | Stores data in a plain text file. Records are specified in a single line |
| No problem of data redundancy | Problem of data redundancy |
| Very costly. Regular updates make it more costly | Cost effective |
| Large organizations use DBMS as they can afford it and have a large user base | Small organizations use it because of small user base and cost effectiveness |
| Views are created and all users can't see all the available information. Hence, security | All information can be seen by anyone |

### Instance

The data stored in a database at any given instant of time is an instance of the database

Schema defines the variable declaration in tables that belong to a database

Value of these variables at any instant constitute the instance of said database

Example: There is a database with a table students in it, containing 100 records today, so the instance today contains 100 records
Tomorrow the instance might contain 150 records

### Schema

Design of a database is it's schema

Types:

* Physical
* Logical
* View

### Subschema

Subset or proper subset of the schema

Plan for a view is often called subschema

Through subschema, user can view database partially, parts which are of interest at the moment

### Data administrator

Data admin is responsible for the overall management of data resources of an organization

DA must know system analysis and programming

Functions of DB admin

* Hardware and software selection
	- Keep up with trends
	- Predict future changes
	- Emphasis on established off the shelf products

* Managing data security and privacy
	- Protection against loss, destruction, misuse
	- User privileges establishment
	- Firewalls
	- Complex due to distributed systems like internet and client-server model
