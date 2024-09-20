EX1: "shapes calculator"

Names:
Nicole Kazantsev 208258095
Herut Partner 205741333

General explanation of the program:
In this program we implemented a "shapes calculator". The calculator calculates the results of the requested operations on shapes according to the input from the user.
The calculator maintains a list of operations on shapes that it is capable of performing. The actions are:
● CREATE - create new shape according to the chosen letter, with the given size.
● ENLARGE - enlarge the size of the sides of the shape
● REDUCE -  reduce the size of the sides of the shape.
● DUPLICATE - create a new shape which is a doplication of other shape
● STACK - create a new shape by stacking one shape over other shape.
● DELETE – deletes the shape numbered num from the list of functions.
● HELP – prints a help screen with the list o possible commands and a brief explanation of them.
● EXIT – prints to the screen "Goodbye" and exits the program.

Each shape in the list has a serial number that is printed next to it when printing the list of shapes, with the help of which the user can refer to it in the commands he types.

Classes we created and the relationship between them:
The departments:
For each class there is a header file and a cpp file:
Shape - an abstract class from which all functions are inherited.
below:
Triangle - a class for the triangle shape.
Square - a class for the square shape.
Rectangle - a class for the rectangle shape.
Dup - a class for the dup action.
Stack - a class for the stack action 

In addition there is a Calculator class:
This class applies the user commands to the calculator, creating the shapes and executing the functions according to the user's input.

Main data structures and their functions
Vectors <vector> to save the shapes.
Shard pointer - common pointers to the various shapes.
enum- for the names of the functions

Noteworthy algorithms -
Known bugs -
Other notes -