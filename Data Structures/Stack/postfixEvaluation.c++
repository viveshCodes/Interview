#include<bits/stdc++.h>
using namespace std;

int calculate(int op2, int op1, char op){
 switch(op){
		case '+':
				return op1 + op2;

		case '-':
				return op1-op2;
		case '/':
				return op1/op2;
		case '*':
				return op1*op2;
		case '^':
				return pow(op1,op2);
	}   
    
}
int postfix(string expr){
    int i,op2,op1, result;
    stack<int>s;
    
    for(i=0;i < expr.length();i++){
        if(isalnum(expr[i])){
            int value = int(expr[i])-48;
            s.push(value);
        } 
        else if(expr[i]=='+'|| expr[i]=='-'||expr[i]=='*'||expr[i]=='/'||expr[i]=='^'){

             op2=s.top(); s.pop();
             op1=s.top(); s.pop();
             result=calculate(op2,op1,expr[i]);
             s.push(result);
        }
    }
    return s.top();
}
int main(){
 
    
    
         cout << "Enter the postfix expression here.\n";
         string expression;       
         getline(cin,expression);
         
         cout << "The result is :" << postfix(expression);
           
    
    
}