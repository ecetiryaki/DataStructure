#include <stdio.h>

struct node{
  int data;
  char key;
  struct node *next;
  struct node *prev;
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *current=NULL;

 void insert(int data, char key){
   struct node *link=(struct node*) malloc(sizeof(struct node));
   link->data=data;
   link->key=key;
   link->prev=current->prev;
   link->next=current;
   current=link;
 }

void delete(){
  struct node *temp=current;
  current= current->next;
  current->prev=temp->prev;
}

void moveRight(){
  struct node *temp=current;
  current=current->next;
  current->prev= temp;
}
void moveLeft(){
  struct node *temp=current;
  current=current->prev;
  current->next= temp;
}

void printList()
{
  struct node *ptr=current;
  printf("\n[\n");
  while(ptr->prev!=NULL)
  {
    ptr = ptr->prev;
  }
  while (ptr!=NULL && ptr->prev==NULL)
  {
    printf("%d", ptr->data);
    printf("%c\n", ptr->key);
    ptr=ptr->next;
  }
  printf("]\n");
}

int main(void){
  insert(1,'a');
  insert(3,'c');
  insert(4,'d');
  moveRight();
  //moveLeft();
  insert(7,'k');
  insert(5,'e');
  printList();
  //delete();
  //printList();
}
