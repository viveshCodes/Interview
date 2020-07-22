#include <bits/stdc++.h>
using namespace std;

void balance(string expression, int n){
    stack<char>s;
    int i=0;
    for(i=0;i<n;i++){
        if(expression[i]=='[' || expression[i]== '{' || expression[i]== '('){
           s.push(expression[i]); 
        }
        if(!s.empty()){
            if(expression[i]==']' && s.top()=='[') s.pop();
            else if(expression[i]=='}' && s.top()=='{') s.pop();
            else if(expression[i]==')' && s.top()=='(') s.pop();
        }else{
            cout<<"Invalid.\n";
            return;
        }
            
    }
    
    if(!s.empty()){
        cout<<"Parentheses are unbalanced.\n";
    }
    else{
        cout<<"Parentheses are balanced.\n";
    }
   
}


int main(){
     
    string expression;
    cout << "Enter expression here.\n";
    getline(cin,expression);
    balance(expression,expression.length());

}