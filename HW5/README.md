# Homework 5
## Question 1
Write a function called deleteRepeats that has a partially filled array of characters as a formal parameter and that deletes all repeated letters from the array. Since a partially filled array requires two arguments, the function will actually have two formal parameters: an array parameter and a formal parameter of type int that gives the number of array positions used. When a letter is deleted, the remaining letters are moved forward to fill in the gap. This will create empty positions at the end of the array so that less of the array is used. Since the formal parameter is a partially filled array, a second formal parameter of type int will tell how many array positions are filled. This second formal parameter will be a call-by-reference parameter and will be changed to show how much of the array is used after the repeated letters are deleted. For example, consider the following code:<br/>
char a[10];<br/>
a[0] = 'a';<br/>
a[1] = 'b';<br/>
a[2] = 'a';<br/>
a[3] = 'c';<br/>
int size = 4;<br/>
deleteRepeats(a, size);<br/>
After this code is executed, the value of a[0] is 'a' , the value of a[1] is 'b' , the value of a[2] is 'c' , and the value of size is 3 . (The value of a[3] is no longer of any concern, since the partially filled array no longer uses this indexed variable.) You may assume that the partially filled array contains only lowercase letters. Embed your function in a suitable test program.

## Question 2
Write a program to assign passengers seats in an airplane. Assume a small airplane with seat numbering as follows:<br/>
1    A B C D<br/>
2    A B C D<br/>
3    A B C D<br/>
4    A B C D<br/>
5    A B C D<br/>
6    A B C D<br/>
7    A B C D<br/>
The program should display the seat pattern, with an 'X' marking the seats already assigned. For example, after seats 1A, 2B, and 4C are taken, the display should look like this:<br/>
1      X B C D<br/>
2      A X C D<br/>
3      A B C D<br/>
4      A B X D<br/>
5      A B C D<br/>
6      A B C D<br/>
7      A B C D<br/>
After displaying the seats available, the program prompts for the seat desired, the user types in a seat, and then the display of available seats is updated. This continues until all seats are filled or until the user signals that the program should end. If the user types in a seat that is already assigned, the program should say that that seat is occupied and ask for another choice.

## Question 3
The mathematician John Horton Conway invented the “Game of Life.” Though not a “game” in any traditional sense, it provides interesting behavior that is specified with only a few rules. This project asks you to write a program that allows you to specify an initial configuration. The program follows the rules of Life (listed shortly) to show the continuing behavior of the configuration.
LIFE is an organism that lives in a discrete, two-dimensional world. While this world is actually unlimited, we do not have that luxury, so we restrict the array to 80 characters wide by 22 character positions high. If you have access to a larger screen, by all means use it.
This world is an array with each cell capable of holding one LIFE cell. Generations mark the passing of time. Each generation brings births and deaths to the LIFE community. The births and deaths follow this set of rules:
* We define each cell to have eight neighbor cells. The neighbors of a cell are the cells directly above, below, to the right, to the left, diagonally above to the right and left, and diagonally below, to the right and left.
* If an occupied cell has zero or one neighbor, it dies of loneliness. If an occupied cell has more than three neighbors, it dies of overcrowding.
* If an empty cell has exactly three occupied neighbor cells, there is a birth of a new cell to replace the empty cell.
* Births and deaths are instantaneous and occur at the changes of generation. A cell dying for whatever reason may help cause birth, but a newborn cell cannot resurrect a cell that is dying, nor will a cell’s death prevent the death of another, say, by reducing the local population.<br/>
<br/>
                                      * <br/>
<br/>
Examples: *** becomes * then becomes *** again, and so on.<br/>
<br/>
                                      * <br/>
<br/>
Notes: Some configurations grow from relatively small starting configurations. Others move across the region. It is recommended that for text output you use a rectangular char array with 80 columns and 22 rows to store the LIFE world’s successive generations. Use an * to indicate a living cell and use a blank to indicate an empty (or dead) cell. If you have a screen with more rows than that, by all means make use of the whole screen.
Suggestions: Look for stable configurations. That is, look for communities that repeat patterns continually. The number of configurations in the repetition is called the period. There are configurations that are fixed, that is, that continue without change. A possible project is to find such configurations.
Hints: Define a void function named generation that takes the array we call world , an 80-column by 22-row array of type char , which contains the initial configuration. The function scans the array and modifies the cells, marking the cells with births and deaths in accord with the rules listed previously. This involves examining each cell in turn and either killing the cell, letting it live, or, if the cell is empty, deciding whether a cell should be born. There should be a function display that accepts the array world and displays the array on the screen. Some sort of time delay is appropriate between calls to generation and display . To do this, your program should generate and display the next generation when you press Return. You are at liberty to automate this, but automation is not necessary for the program.
