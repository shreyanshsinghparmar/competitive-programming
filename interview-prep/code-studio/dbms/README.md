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

It is the structural view of the database

Schema diagram represents database as a diagram

Represents relationship between the tables, but does not contain the data in the tables

Types:

* Physical
* Logical
* View

Defined by Data Definition Language (DDL)

State in DBMS that satisfies constraints and schems structure is a valid state

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

## ER Models

Entity Relationship Diagram (ERD) is a visual representation of different data using conventions that describe how these data are related to each other

Elements inside rectangles are called entities and elements inside diamonds denote relationship between these entities

For example, programmer, user and software can be entities and relationships can be create and use. Straight lines can be used to connect entities and relationships
Programmer creates software and user uses the software

### ER Diagram

ER modelling is a data modelling technique used in software engineering to produce a conceptual data model of an information system

Creates a conceptual diagram to represent information in ER model form

Diagrams created using this model are called ER diagrams, Entity Relationship Diagrams (ERDs)

### Entity

Collection of objects

Entity is an object distinguishable from other objects by a set of attributes

It may be an 'object' with a physical existence

Example: In a school database, teachers, students, classes and courses can be entities

All entities have a set of attributes that give the, identity

Types:
* Strong
	- Exists independently of amy other entity type
* Weak
	- Existence depends on another entity type. Cannot be identified by it's own attributes
* Recursive
	- Occurs in unary relationship. Relationships can exist between occurences of same entity type. For example an employee can be a manager, but a manager is also an employee that may be managed by other people
* Composite
	- Many to many relationship can be converted into one to many by using bridge entity, also known as composite entity. Bridge entity is composed of the primary keys of each of the entities to be connected. Represented by diamond shape
* Entity sets
	- Collection of similar types of entities. May contain entities with attrbutes sharing similar values
	- Example: a students set may contain all students of a school
	- Entity sets don't have to be disjoint

### Attributes

Properties of entities are called attributes

Attributes of an entity have their values

For example, student entity may contain attributes name, class and age

There exist a domain or range of values that can be assigned to an attribute, like name cannot be numeric

Types:
* Simple
	- Atomic, indivisible values
* Composite
	- Comprises of other attributes
	- For example, name may contain first_name and last_name
* Derived attribute
	- Does not exist in physical database
	- Derived from other attributes present in the database
	- For example, age can be derived from date_of_birth
* Multi-valued attribute
	- May contain more than one value
	- For example, a person can have more than one email address

Weak entity can be processed into a strong entity by adding appropriate attributes

ER modelling technique is a top-down approach

Descriptive attribute has type and condition of relation specified in a relation between entities

Not applicable condition can be represented in relation entry as NULL

## Relationships

Entity sets A and B

### One to one

Each entity of set A can be associated with at most one entity of set B and vice versa

### One to many

Each entity of set A can be associated with more than one entity of set B

### Many to one

More than one enitities of set A can be associated with at most one entity of set B

### Many to many

One entity from A can be associated with more than one entity from set B and vice bersa

### Participation

* Partial
	- Not all entities get involved in the relationship
	- Indicated by single lines drawn from entity to relationship
* Total
	- Each entity in the entity set occurs in at least one relationship in that relationship set
	- Indicated by double lines from entity to relationship

### Creating an ER diagram

* Entity
	- Object or concept about which to store information
	- Rectangular box
	- Weak entity defined by foreign key relationship with another entity (double rectangular boxes)
* Relatiionships
	- Show how two entities share information
	Diamond shape
* Attributes
	- Information about entities
	- Oval shape
	- Key attribute is the distinguishing unique characteristic of the entity
* Multivalued attribute
	- May have more than one value
	- Double ovals

Many: *
One: 1
Example: many-to-one = entity *----1 entity

### Generalization

A number of entities brought together into one generalized entities
The entities participating in generalization share some characteristics

Example: tigers, lions and leopards are all cats

### Specialization

Group of entities are divided into subgroups based on their characteristics

Opposite of generalization

Example: A person may be an employee or a customer

### Aggregation

Multiple entities are combined to form a single meaningful entity

Building composite objects from their component objects

Represents relationship between a whole object and it's component parts

Used to express relationship among relationships
