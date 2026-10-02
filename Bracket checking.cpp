#include<stdio.h>

#include<iostream>
using namespace std;

#include<string.h>

class Stack{
    public:
    int top = -1;
    char arr[50];
    int size = 50;


    void push(char n){
    if(top+1==size){
        printf("Stack Overflow");
        return;
    }
    top++;
    arr[top]=n;
    }

    char pop(){
        if(top==-1){
            printf("Stack Underflow");
            return '\0';
        }
        top--;
        return arr[top+1];
    }

    void printStack(){
        printf("\n**************\n");
        for(int i=0;i<=top;i++){
            printf("%c ",arr[i]);
        }
        printf("\n**************\n");

    }

};

int main(){
    char str[20];

    gets(str);
    cout<<"You entered the string "<<str<<endl;

    Stack s1;

    int isBracketingOK = 1;

    for(int i=0;str[i]!='\0';i++){

        char currentCharacter = str[i];

        if(currentCharacter =='(' || currentCharacter =='{' || currentCharacter =='['){
            s1.push(currentCharacter);
        }else if(currentCharacter ==')' || currentCharacter =='}' || currentCharacter ==']'){

            char poppedCharacter = s1.pop();
            if(poppedCharacter=='(' && currentCharacter==')'){
                // this is ok
            }else if(poppedCharacter=='{' && currentCharacter=='}'){
                // this is ok
            }else if(poppedCharacter=='[' && currentCharacter==']'){
                // this is ok
            }else{
                // not ok
                isBracketingOK = 0;
                break;
            }
        }else{
            // ignore
        }
    }
    cout<<"\n";
    if(isBracketingOK==0){
        cout<<"Incorrect bracketing";
    }else if(isBracketingOK==1){
         if(s1.top!=-1){ // if the stack is not empty
            cout<<"Incorrect bracketing";
         }else{
               cout<<"Correct bracketing";
         }
    }

    return 0;
}


