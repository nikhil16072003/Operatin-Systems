//stack operations
#include<stdio.h>

#include<stdlib.h>
 
#define Size 4 
 
int Top=-1, inp_array[Size];
void Push();
void Pop();
void show();
 
int main()
{
	int choice;
	
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
}
 
void Push()
{
	int x;
	
	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		inp_array[Top]=x;
	}
}
 
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",inp_array[Top]);
		Top=Top-1;
	}
}
 
void show()
{
	
	
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",inp_array[i]);
	}
}


/////////////////////////////////
/*
#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main() {
   // push items on to the stack 
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data 
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}
////////////////////////////////////////////////
using link list

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next; 
}*top=NULL;
void push(int x){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=x;
    if (top==NULL){
     newnode->next=NULL;
    }
    else{
        newnode->next=top;
        
    }
    top=newnode;
    
}
void pop(){
    if(top==NULL){
        printf("empty stack");
   }
   else{
        struct node *temp=top;
        top=temp->next;
        free(temp);
   }
}
void display(){
     if(top == NULL){
      printf("\nStack is Empty!!!\n");
}
      
   struct node *temp = top;
   while(temp->next != NULL){
	 printf("%d ",temp->data);
     temp = temp -> next;
    }
    printf(" %d",temp->data);
}

int main() {
    
  
   push(4);
   push(10);
   push(11);
  
   display();

    return 0;
}*/
