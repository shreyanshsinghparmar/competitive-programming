#include <stdio.h>

int main() {

	int count = 1, n, diff = 0, curr = 1;
	scanf("%d", &n);
	start:
		curr += diff;
		diff += 10;
		printf("%d ", curr);
		++count;
	if(count <= n) goto start;

	return 0;
}

/*
Problem Description

C program to print 1 11 31 61 ... n times using goto statement


Input:

Input consists of a number, and for that many times the series needs to be printed.

Rules:

Bugs will be mainly logical errors, syntax errors etc. They are specific to C language.
Since it is a debugging contest, you will be provided with a bugged solution below the Constraints section. Please, see that you must adhere to the problem code provided, make changes only where necessary.
Participants can copy the code and compile it using an online compiler (Eg. CodeChef IDE).
Once the bugs are eliminated from the code, the clean code should be submitted by using the "Submit" button on the top-right corner.
Participants will be penalised for changing the entire problem solution or writing their own solution, completely different from the buggy code as provided in the problem statement as our main intention is to test the debugging abilities of the participants.

Output:

Outupt consists of the series with 'n' numbers

Example

Input:

5


Output:

1 11 31 61 101


Buggy Code in C

Please copy the following code and paste it into your compiler for debugging.

#include<iostream>

int main()
{
	int count,n,diff;

	count=1;	//loop counter
	a=1;		//series starting number
	diffe=10;	//difference variable initialization
	
	start:	//label
	printf(" %d ",a);
	a=a+diff;
	diff=diff+10;
	count++;
	if(count<=10)
             start;

	return 0;
}
*/
