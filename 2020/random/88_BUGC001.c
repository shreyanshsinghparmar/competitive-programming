#include <stdio.h>

int main() {

	int count = 1, t = 2, r;
	while(count <= 10) {
		r = t * count;
		printf("%d*%d=%d\n", t, count, r);
		++count;
	}

	return 0;
}

/*
Problem Description

Write a C progrm to print a table of 2.


Input:

There is no input required

Rules:

Bugs will be mainly logical errors, syntax errors etc. They are specific to C language.
Since it is a debugging contest, you will be provided with a bugged solution below the Constraints section. Please, see that you must adhere to the problem code provided, make changes only where necessary.
Participants can copy the code and compile it using an online compiler (Eg. CodeChef IDE).
Once the bugs are eliminated from the code, the clean code should be submitted by using the "Submit" button on the top-right corner.
Participants will be penalised for changing the entire problem solution or writing their own solution, completely different from the buggy code as provided in the problem statement as our main intention is to test the debugging abilities of the participants.

Output:

2*1=2
2*2=4
2*3=6
2*4=8
2*5=10
2*6=12
2*7=14
2*8=16
2*9=18
2*10=20

Buggy Code in C

Please copy the following code and paste it into your compiler for debugging.

#include< stdio.h >
int main()
{
	int count,t,r;
	t =1;
count=1;
	if(count>=10)
	{
		r=t*count;
		printf("%d * %d=%d\n",t,count,r)
		cout+;
		goto start;
	}
 }
*/
