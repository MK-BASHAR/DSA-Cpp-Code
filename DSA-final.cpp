
#include<stdio.h>

#include<iostream>
using namespace std;


class Stack{
    public:
    int top = -1;
    int arr[4];
    int size = 4;


    void push(int n){
    if(top+1==size){
        printf("Stack Overflow");
        return;
    }
    top++;
    arr[top]=n;
}

    int pop(){
        if(top==-1){
            printf("Stack Underflow");
            return -1;
        }
        top--;
        return arr[top+1];
    }

    void printStack(){
        printf("\n**************\n");
        for(int i=0;i<=top;i++){
            printf("%d ",arr[i]);
        }
        printf("\n**************\n");

    }

};

int main(){
    printf("Hello World using C\n");
    cout<<"Hello World using C++"<<endl;

    //struct Stack s1;
    Stack s1;
    Stack s2;

    s1.push(10);
    s1.push(20);
    s1.push(30);


    s2.push(100);
    s2.push(200);


    s1.printStack();
    s2.printStack();

    printf("top value for s1 is %d\n",s1.top);
    cout<<"top value for s2 is "<<s2.top<<endl;

    int n;
    cout<<"Enter the value of n"<<"\n";
    cin>>n;

    return 0;
}

