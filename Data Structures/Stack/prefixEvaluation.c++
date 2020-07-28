#include<bits/stdc++.h>
using namespace std;


int calculate(int op2, int op1, char op){
 switch(op){
		case '+':
				return op2 + op1;

		case '-':
				return op2-op1;
		case '/':
				return op2/op1;
		case '*':
				return op2*op1;
		case '^':
				return pow(op2,op1);
	}   
    
}

int prefix(string expr){
    int i,op2,op1, result;
    stack<int>s;
    
    for(i< expr.length()-1;i>=0;i--){
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
 
    
    
         cout << "Enter the prefix expression here.\n";
         string expression;       
         getline(cin,expression);
         
         cout << "The result is :" << prefix(expression);
           
    
    
}