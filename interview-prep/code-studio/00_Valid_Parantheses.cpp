bool same(char a, char b) {
	if(a == '(' && b == ')') return true;
	if(a == '{' && b == '}') return true;
	if(a == '[' && b == ']') return true;
	return false;
}

bool isValidParenthesis(string expression)
{
    if(expression == "") return true;
	stack<char> s;
	for(char i : expression) {
		if(i == '{' || i == '(' || i == '[') s.push(i);
		else {
			if(s.empty()) return false;
			else if(same(s.top(), i)) s.pop();
			else return false;
		}
	}
	if(s.empty()) return true;
	else return false;
}


/*
For every opening bracket of one type, there should be a closing bracket of the same type
* If after an opening bracket of one type, a bracket of another type closes, the expression can no longer be balanced. Example (][)
* If the expression is empty, it is already balanced
* If the stack is empty, that is, the expression is balanced and a bracket is closed, expression can no longer be balanced

So, we can use a stack to push opening brackets and pop if the closing bracket is the same as the top opening bracket in the stack
* If we encounter a closing bracket and it isn't the same type as the top opening bracket of the stack, there is no longer any hope for the expression to be balanced no matter what follows

Used a helper function to determine if opening and closing brackets are of the same type
*/

/*
Valid Parentheses
Difficulty: EASY
Contributed By
Amandeep Kaur
|
Level 1
Avg. time to solve
10 min
Success Rate
80%
Problem Statement
You're given string ‘STR’ consisting solely of “{“, “}”, “(“, “)”, “[“ and “]” . Determine whether the parentheses are balanced.
Input Format:
The first line contains an Integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of input of each test case contains a string, as described in the task.
Output Format :
For each test case, the first and the only line of output prints whether the string or expression is balanced or not.

The output of every test case is printed in a separate line.
Note:
You are not required to print anything explicitly. It has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 10
1 <= N <= 10^5

Where N is the length of the input string or expression.

Time Limit: 1 sec
Sample Input 1 :
2
[()]{}{[()()]()}
[(])
Sample Output 1 :
Balanced
Not Balanced
Explanation Of The Sample Input 1 :
In TestCase 1 there is always an opening brace before a closing brace i.e ‘{‘ before ‘}’, ‘(‘ before ‘)’, ‘[‘ before ‘]’.

In TestCase 2 there is closing brace for ‘[‘ i.e. ‘]’ before closing brace for ‘(‘ i.e. ‘)’. The balanced sequence should be ‘[()]’.
Sample Input 2 :
2
[[}[
[]{}()
Sample Output 2 :
Not Balanced
Balanced
Explanation Of The Sample Input 2 :
In TestCase 1 there is no opening brace before a closing brace i.e no ‘{‘ for ‘}’.

In TestCase 2 there is exactly one closing for each opening braces and each closing brace is after their corresponding opening brace.
*/
