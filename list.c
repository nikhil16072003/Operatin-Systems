#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *head;
void insert(int x){
    struct node*ptr;
    ptr=malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=head;
    head=ptr;
   
}
void deleatstart(){
    struct node* ptr;
    ptr=head;
    head=ptr->next;
    free(ptr);
    
}
void display(){
    struct node*temp=head;
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

int main() {
    
  insert(2);
  insert(3);
  insert(4);
  deleatstart();
  display();

    return 0;
}
