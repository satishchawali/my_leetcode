/* Q2. Evaluate Reverse Polish Notation
You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.
Evaluate the expression. Return an integer that represents the value of the expression.

Note that:
The valid operators are '+', '-', '*', and '/'.
Each operand may be an integer or another expression.
The division between two integers always truncates toward zero.
There will not be any division by zero.
The input represents a valid arithmetic expression in a reverse polish notation.
The answer and all the intermediate calculations can be represented in a 32-bit integer.

Example 1:
Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9

Example 2:
Input: tokens = ["4","13","5","/","+"]
Output: 6
Explanation: (4 + (13 / 5)) = 6

Example 3:
Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
Output: 22
Explanation: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22
*/

using namespace std;
#include <iostream>
#include <stack>
#include <vector>
#include <string>

class Solution{

public: 
    int evalRPN(vector<string>& tokens){
        stack<int> myStack;
        for(string token: tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                int num1 = myStack.top(); myStack.pop();
                int num2 = myStack.top(); myStack.pop();
                int result = -1;
                if(token == "+"){
                    result = num1 + num2;
                }else if(token == "-"){
                    result = num2 - num1;
                }else if(token == "*"){
                    result = num1 * num2;
                }else if(token == "/"){
                    result = num2 / num1;
                }
                myStack.push(result);
            }
            else{
                myStack.push(stoi(token));
            }
        }
        return myStack.top();

    }

};

int main(){
    Solution s;
    vector<string> tokens= {"2","1","+","3","*"};
    int ans = s.evalRPN(tokens);
    cout << ans;

    return 0;
}