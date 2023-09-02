
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




