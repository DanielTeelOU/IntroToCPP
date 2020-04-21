# Final Coding Questions

## Question 4
Design and implement a C++ class Point  for a 2 dimensional Cartesian point with all the following requirements.
* Design the value members of the class and decide if they should be public or private (do not use protected).
* Design and implement two constructors for the class: a default constructor and another that takes as many arguments as the numbers of value members of the class and initializes the value members with values of these parameters.
* Overload the unary operator - (negation) as a member function of the class.
The negation operator negates the values of the value members of the class, creates a new object with these negated values as data members and returns a pointer to the newly created object.

## Question 5
Design and implement a C++ class Pair that keeps track of two dynamic arrays with the following requirements.
* Design and implement the value members of the class to allow for keeping track of these two dynamic arrays. 
* Design and implement a default constructor that allocates the two dynamic arrays of the class to be of random sizes (less than 100). You can use rand()%100 to generate random numbers that are less than 100.
* Design and implement a copy constructor that takes a Pair object as its parameter and copies the contents of its dynamic arrays into dynamic arrays of its calling object, along with other data members that your class has.
* Design and implement a destructor for the class.

## Question 6
Use protected inheritance to design and implement a superclass MyNumber and its subclass MyNumberWithBackup with the following requirements.
* The class MyNumber keeps track of an integer number x.
* MyNumber provides a setter and a getter to read and set the value of x. 
* MyNumberWithBackup not only keeps track of x  but also keeps a backup of it.
Before x is changed in the setter, a backup of it is stored and then x is changed.
* MyNumberWithBackup provides a restore method to access the backup value of x.
* Design and implement appropriate methods and their redefinings to allow for above functionalities.
