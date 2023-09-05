
01.Example: Numbers 1...N with Step 3
Write a program that prints the numbers from 1 to n with step of 3. For example, if n = 100, the result 
will be: 1, 4, 7, 10, …, 94, 97, 100.

02.Example: Numbers N...1 in Reverse Order
Write a program that prints the numbers from n to 1 in reverse order (step of -1). For example, if n = 
100, the result will be: 100, 99, 98, …, 3, 2, 1.

Hints and Guidelines
We can solve the problem in the following way:
• We read the number n from the console input.
• We create a for loop by assigning int i = n.
• We reverse the condition of the loop: i >= 1.
• We define the size of the step: -1.
• In the body of the loop, we print the value of the current step.

03.Example: Numbers from 1 to 2^n with a For Loop
In the following example, we will look at using the usual step with size of 1, combined with a calculation 
at each loop iteration.
Write a program that prints the numbers from 1 to 2^n (two in power of n). For example, if n = 10, 
the result will be: 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024.

04.Example: Even Powers of 2
Print the even powers of 2 to 2
n: 2^0,2^2,2^4, 2^6,2^8, …, 2^n
. For example, if n = 10, the result will be: 1, 
4, 16, 64, 256, 1024.

Hints and Guidelines
Here is how we can solve the problem using a for-loop with a step:
• We create a num variable for the current number to which we assign an initial value of 1.
• For a step of the loop, we set a value of 2.
• In the body of the loop: we print the value of the current number and increase the current 
number num 4 times (according to the problem's description).

05.Example: Sequence of Numbers 2k+1
Write a program that prints all numbers ≤ n of the series: 1, 3, 7, 15, 31, …, assuming that each next 
number = previous number * 2 + 1.
Here is how we can solve the problem:
• We create a num variable for the current number to which we assign an initial value of 1.
• For a loop condition, we put the current number <= n.
• In the body of the loop: we print the value of the current number and increase the current 
number by using the formula from the problem's description.

06.Example: Number in Range [1…100]
Enter an integer in the range [1 … 100]. If the entered number is invalid, enter it again. In this case, an 
invalid number will be any number that is not within the specified range.

Hints and Guidelines
To solve the problem, we can use the following algorithm:
• We create a num variable to which we assign the integer value obtained from the console input.
• For a loop condition, we put an expression that is true if the number of the input is not in the 
range specified in the problem's description.
• In the body of the loop: we print a message "Invalid number!" on the console, then we assign a 
new value to num from the console input.
• Once we have validated the entered number, we print the value of the number outside the 
body of the loop.

07.Greatest Common Divisor (GCD)
Before proceeding to the next problem, we will get familiar with the definition of the greatest common 
divisor (GCD), widely used in mathematics and numbers theory, and will learn how to calculate GCD.
Definition of GCD: the greatest common divisor of two natural numbers a and b is the largest number
that divides both a and b without reminder.
a   b   GCD  a  b  GCD  a  b  GCD
24 16   8   12 24  12   10  10  10
67 18   1   15 9   3    100 88  4

The Euclidean Algorithm
In the next problem we will use one of the first published algorithms for finding the GCD – Euclid's 
algorithm.
Until we reach a remainder of 0:
• We divide the greater number by the smaller one.
• We take the remainder of the division.
Euclid's algorithm pseudo-code:
while b ≠ 0
 var oldB = b;
 b = a % b;
 a = oldB;
 print a;
 
08.Example: Calculating Factorial
For natural n number, calculate n! = 1 * 2 * 3 * … * n. For example, if n = 5, the result will be:
5! = 1 * 2 * 3 * 4 * 5 = 120.
Here is how we can specifically calculate factorial:
• We create the variable n to which we assign an integer value taken from the console input.
• We create another variable – a fact which initial value is 1. We will use it for the calculation 
and storage of the factorial.
• For a loop condition, we will use n > 1, because each time we perform the calculations in the 
body of the loop, we will decrease the value of n by 1.
• In the body of the loop:
o We assign a new value to fact that is the result of multiplying the current fact value to 
the current value of n.
o We decrease the value of n by -1.
• Outside the body of the loop, we print the final factorial value.





