# Homework 3
## Question 1
A liter is 0.264179 gallons. Write a program that will read in the number of liters of gasoline consumed by the user’s car and the number of miles traveled by the car and will then output the number of miles per gallon the car delivered. Your program should allow the user to repeat this calculation as often as the user wishes. Define a function to compute the number of miles per gallon. Your program should use a globally defined constant for the number of liters per gallon.
## Question 2
Write a program to gauge the rate of inflation for the past year. The program asks for the price of an item (such as a hot dog or a one-carat diamond) both one year ago and today. It estimates the inflation rate as the difference in price divided by the year-ago price. Your program should allow the user to repeat this calculation as often as the user wishes. Define a function to compute the rate of inflation. The inflation rate should be a value of type double giving the rate as a percentage, for example 5.3 for 5.3%.
## Question 3
Enhance your program from the previous exercise by having it also print out the estimated price of the item in one and in two years from the time of the calculation. The increase in cost over one year is estimated as the inflation rate times the price at the start of the year. Define a second function to determine the estimated cost of an item in a specified number of years, given the current price of the item and the inflation rate as arguments.
## Question 4
The gravitational attractive force between two bodies with masses m1 and m2 separated by a distance d is given by the following formula, F = Gm1m2/d^2
where G is the universal gravitational constant:
* G = 6.673 * 10-8 cm3/(g • sec2 )
Write a function definition that takes arguments for the masses of two bodies and the distance between them and returns the gravitational force between them. Since you will use the previous formula, the gravitational force will between them.
Since you will use the previous formula, the gravitational force will be in dynes.
One dyne equals a
* g • cm/Sec2
You should use a globally defined constant for the universal gravitational constant. Embed your function definition in a complete program that computes the gravitational force between two objects given suitable inputs. Your program should allow the user to repeat this calculation as often as the user wishes.
## Question 5
Write a program that asks for the user’s height, weight, and age, and then computes clothing sizes according to the following formulas.
* Hat size = weight in pounds divided by height in inches and all that multiplied by 2.9.
* Jacket size (chest in inches) = height times weight divided by 288 and then adjusted by adding one-eighth of an inch for each 10 years over age 30. (Note that the adjustment only takes place after a full 10 years. So, there is no adjustment for ages 30 through 39, but one-eighth of an inch is added for age 40.)
* Waist in inches = weight divided by 5.7 and then adjusted by adding one-tenth of an inch for each 2 years over age 28. (Note that the adjustment only takes place after a full 2 years. So, there is no adjustment for age 29, but one-tenth of an inch is added for age 30.)
Use functions for each calculation. Your program should allow the user to repeat this calculation as often as he or she wishes.
## Question 6
Write a function that computes the average and standard deviation of four scores. The standard deviation is defined to be the square root of the average of the four values: (s i - a ) 2 , where a is the average of the four scores s1 , s2 , s3 , and s4 . The function will have six parameters and will call two other functions. Embed the function in a program that allows you to test the function again and again until you tell the program you are finished.
## Question 7
In cold weather, meteorologists report an index called the wind chill factor , which takes into account the wind speed and the temperature. The index provides a measure of the chilling effect of wind at a given air temperature. Wind chill may be approximated by the following formula,
* w=33-((10√v-v+10.5)(33-t)/23.1)
* where v = wind speed in m/sec
* t = temperature in degrees Celsius: t 6= 10
* W = wind chill index (in degrees Celsius)
Write a function that returns the wind chill index. Your code should ensure that the restriction on the temperature is not violated. Look up some weather reports in back issues of a newspaper in your library and compare the wind chill index you calculate with the result reported in the newspaper.
