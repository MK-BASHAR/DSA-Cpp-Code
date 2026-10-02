#include<stdio.h>

#include<iostream>
using namespace std;


class Stack{
    public:
    int top = -1;
    int arr[50];
    int size = 50;


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

class Queue{
public:
    Stack inStack;
    Stack outStack;

    void enqueue(int n){
        inStack.push(n);
    }

    int dequeue(){
        if(outStack.top==-1 && inStack.top==-1){
            cout<<"Queue underflow"<<endl;
            return -1;
        }else if(outStack.top==-1){
            while(inStack.top!=-1){// while the instack is not empty
                int value = inStack.pop();
                outStack.push(value);
            }
            return outStack.pop();
        }else{
            return outStack.pop();
        }
    }

    void printQueue(){
        cout<<"Instack Condition"<<endl;
        inStack.printStack();
        cout<<"Outstack Condition"<<endl;
        outStack.printStack();
    }



};

int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.printQueue();
    q1.dequeue();
    q1.printQueue();
    return 0;
}
