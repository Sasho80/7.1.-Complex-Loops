
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

09.Example: Summing Up Digits
Let's practice the do-while loop with the following exercise:
Sum up the digits of a positive integer n. Examples:
• If n = 5634, the result will be: 5 + 6 + 3 + 4 = 18.
• If n = 920, the result will be: 9 + 2 + 0 = 11.

Hints and Guidelines
We can use the following idea to solve the problem: extract many times the last digit from the input 
number and sum the extracted digits until the input number reaches 0. Example:
• sum = 0
• n = 5634 → extract 4; sum += 4; n = 563
• n = 563 → extract 3; sum += 3; n = 56
• n = 56 → extract 6; sum += 6; n = 5
• n = 5 → extract 5; sum += 5; n = 0 → end
In more detail the above idea looks like this:
• We create the variable n, to which we assign a value equal to the number entered by the user.
• We create a second variable – sum, which initial value is 0. We will use it for the calculation and 
storage of the result.
• As a loop condition, we will use n > 0 because after each calculation of the result in the body 
of the loop, we will remove the last digit of n.
• In the body of the loop:
o We assign a new value of sum that is the result of the sum of the current value of sum with 
the last digit of n.
o We assign a new value to n, which is the result of removing the last digit of n.
• Outside the body of the loop, we print the final value of the sum.

10.Example: Prime Number Checking
The next problem we are going to solve is to check whether given number is prime. An integer is 
prime if it cannot be decomposed to a product of other numbers. For example: 2, 5 and 19 are primes, 
while 9, 12 and 35 are composite.

Hints and Guidelines
Before proceeding to the hints about solving the "prime checking" problem, let's recall in bigger detail 
what prime numbers are.
Definition: an integer is prime if it is divisible only by itself and by 1. By definition, the prime numbers 
are positive and greater than 1. The smallest prime number is 2.
We can assume that an integer n is a prime number if n > 1 and n is not divisible by a number between
2 and n-1.
The first few prime numbers are: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, …
Unlike the prime numbers, composite numbers are integers which can be obtained by multiplying 
several prime numbers.
Here are some examples of composite numbers:
• 10 = 2 * 5
• 42 = 2 * 3 * 7
• 143 = 13 * 11
Positive integers, greater than 1, can be either prime or composite (product of primes). Numbers like 
0 and 1 are not prime but are also not composite.
We can check if an integer is prime following the definition: check if n > 1 and n is divisible by 2, 3, 
…, n-1 without reminder.
• If it is divisible by any of the numbers, it is composite.
• If it is not divisible by any of the numbers, then it is prime.
We can optimize the algorithm instead of checking it to n-1, to check divisors to √n. 
Think what the reason for that is!
Prime Checking Algorithm
The most popular algorithm to check if a number n is prime is by checking if n is divisible by the 
numbers between 2 and √n.
The steps of the "prime checking algorithm" are given below in bigger detail:
• We create the variable n to which we assign an integer taken from the console input.
• We create an isPrime bool variable with an initial value true. We assume that a number is 
prime until proven otherwise.
• We create a for loop in which we set an initial value 2 for the loop variable, for condition the 
current value <= √n. The loop step is 1.
• In the body of the loop, we check if n, divided by the current value, has a remainder. If there is
no reminder from the division, then we change isPrime to false and we exit the loop through 
the break operator.
• Depending on the value of isPrime, we print whether the number is prime (true) or composite 
(false).

11.Example: Enter an Even Number
The next example will be to write a program that enters an even number from the console. If an odd 
number is entered, the program should enter a number again, until an even number is entered.
We shall use an infinite loop with break to solve this problem, because we don't know how many 
times the loop body will be repeated.
We shall check if a particular number n is even, and if it is, we will print it on the screen. An even 
number is one that can be divided by 2 without remainder. If an invalid number is entered, we will ask 
the user to enter a number again and will display a notification that the input number is not even.
Hints and Guidelines
Here is an idea how we can implement the above described logic:
• We create a variable n to which we assign an initial value of 0.
• We create an infinite while loop and as condition we will set true.
• In the body of the loop:
o We take an integer value from the console input and assign it to n.
o If the number is even, we exit the loop by break.
o Otherwise, we display a message stating that the number is not even. The iterations 
continue until an even number is entered.
• Finally, after the loop, print the even number on the screen.

12.Nested Loops and Break
Once we have learned what the nested loops are and how the break operator works, it is time to 
figure out how they work together. For a better understanding, let's step by step write a program that 
should make all possible combinations of pairs of numbers. The first number of the combination is 
increasing from 1 to 3 and the second one is decreasing from 3 to 1. The problem must continue 
running until i + j is not equal to 2 (i = 1 and j = 1). The desired result is:
![image](https://github.com/Sasho80/7.1.-Complex-Loops/assets/7139995/ad8f7e12-1feb-456e-85d2-7fa58b68ab5f)

13.Problem: Fibonacci Numbers
Fibonacci's numbers in mathematics form a sequence that looks like this: 1, 1, 2, 3, 5, 8, 13, 21, 
34, 55, 89, ….
The formula to form the Fibonacci sequence is:
F0 = 1
F1 = 1
Fn = Fn-1 + Fn-2
Sample Input and Output
Input (n) Output Comment               Input (n) Output
10        89     F(11) = F(9) + F(8)   0         1
5         8      F(5) = F(4) + F(3)    1         1
20        10946 F(20) = F(19) + F(18)  2         2
Enter an integer number n and calculate the n-number of Fibonacci.

Hints and Guidelines
An idea to solve the problem:
• We create a variable n to which we assign an integer value from the console input.
• We create the variables f0 and f1 to which we assign a value of 1, since the sequence starts.
• We create a for loop with condition the current value i < n - 1.
• In the body of the loop:
o We create a temporary variable fNext, to which we assign the next number in the 
Fibonacci sequence.
o To f0 we assign the current value of f1.
o To f1 we assign the value of the temporary variable fNext.
• Out of the loop we print the nth number of Fibonacci.

14.Problem: Numbers Table
Print the numbers 1 … n in a table as in the examples below.
Sample Input and Output
Input Output 
3
      1 2 3
      2 3 2
      3 2 1
Input Output
4
      1 2 3 4
      2 3 4 3
      3 4 3 2
      4 3 2 1
Input Output
2
      1 2
      2 1 
Input Output     
5
      1 2 3 4 5
      2 3 4 5 4
      3 4 5 4 3
      4 5 4 3 2
      5 4 3 2 1

Hints and Guidelines
We can solve the problem using two nested loops and little calculations inside them:
• We read from the console the table size in an integer variable n.
• We create a for loop that will be responsible for the rows in the table. We name the loop 
variable row and assign it to an initial value of 0. As a condition, we set row < n. The step is 1.
• In the body of the loop we create a nested for loop that will be responsible for the columns in 
the table. We name the loop variable col and assign it an initial value of 0. As a condition, we 
set col < n. The size of the step is 1.
• In the body of the nested loop:
o We create a num variable to which we assign the result of the current row + the current 
column + 1 (+1 as we start the count from 0).
o We check for num > n. If num is greater than n, we assign a new value to num which is 
equal to two times n – the current value for num. We do this in order not to exceed n in 
any of the cells in the table.
o We print the number from the current table cell.
• We print a blank line in the outer loop to move to the next row.


