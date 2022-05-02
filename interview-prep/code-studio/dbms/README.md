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

## DB Architecture

### Two tier architecture

Client-Server architecture

Layers:
* Client: Runs the application. Handles business logic and presentation
* Server: Handles database backend. Processes data in the database

On client side, code is written for saving data in the SQL server database

Advantages:
* Easy to maintain and modify
* Fast communication

Disadvantages:
* Performance will degrade with increasing users
* Cost-ineffective

### Three Tier Architecture

Traditional client-server model, but from an application server that speaks to the client and the database

Client displays the GUI and data, but has no part in producing results

DB server only serves to few connections (application server, not clients)

Layers:
* Client layer (UI and presentation)
	- UI and presentation
	- Data is presented to and taken from the user
* Business layer (Business logic)
	- Business logic: data validation, calculations, insertions
	- Interface between client layer and application layer
	- Makes communication faster between client and data layer
* Data layer (Database)
	- Contains the database
	- Methods to connect with the database and perform CRUD (Create, Read, Update, Delete) operations as per input data

Advantages:

* Performance: Presentation tier can cache things, so data and application layers don't have to be loaded so much and network utilization is minimized
* Scalability: Each tier can scale horizontally (additon of nodes to increase performance)
* Reusablity
* Flexibility in deployment platform and configuration
* Better data integrity (Data is manipulated in layers different from the end-user client layer)
* Better data security (Client layer has no access to database)
* Maintaining and modification won't affect other modules
