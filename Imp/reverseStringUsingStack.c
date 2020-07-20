#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString(char string[], int n){
    
    int stack[n];
    int top=0;
    int i=0;
    while(top<n){
        stack[top++]=string[i++];
    }
    top--;
    i=0;
    while(top>=0){
        string[i++]=stack[top--];
    }
    puts(string);
}
int main(){
    char string[50];
    
    printf("Enter the string.\n");
    fgets(string, sizeof(string),stdin);
    
    reverseString(string, strlen(string));
}
