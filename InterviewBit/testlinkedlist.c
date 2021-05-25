#include<stdio.h>
#include<stdlib.h>

struct Node {

char data;
struct Node* next;
};
struct node *head = NULL;
struct node *current = NULL;
void insert(char letter){
struct node* new_node = (struct Node*) malloc(sizeof(struct node));
new_node->data=letter;
new_node->next=head;
head=new_node;
}
void  swap(){
struct Node* temp;
temp=head;
int k=temp->data;
temp->data=temp->next->data;
temp->next->data=k;
}
void printList(struct Node* node){
while(node=null){
    printf("%c",node->temp);
    node=node->next;
}
}
int main(){
  insert("H");
  insert("A");
  insert("R");
  insert("S");
  insert("H");
}
