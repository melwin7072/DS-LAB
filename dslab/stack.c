#include<stdio.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top=-1;
void push(int value){
    if(top>=MAX_SIZE-1){
        printf("Stack overflow");
    }else{
        stack[++top]=value;
        printf("%d pushed into stack",value);
    }
}
void pop(){
    if(top<0){
        printf("stack underflow");
    }else{
        printf("%d poped from the stack\n",stack[top--]);
        
    }
}
int peek(){
    if(top<0){
        printf("stack is empty\n");
        return -1;
    }else{
        return stack[top];
    }
}

void display(){
    if(top<0){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements :\n");
        for(int i=0;i<=top;i++){
            printf("%d",stack[i]);
        }
        printf("\n");
    }
    
}
int main(){
    int choice,value;
    while(1){
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("Enter the value to push");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value==peek();
                if(value!=-1){
                    printf("Peek Value:%d\n",value);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                printf("exit");
                return 0;
            default:
                printf("Invalid choice");
                }
            
        }
        
    
       return 0; 
    }