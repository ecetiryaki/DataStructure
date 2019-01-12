#include <stdio.h>
//stack
struct node{
  int data;
  char key;
  struct node *next;
  struct node *prev;
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *current=NULL;

void insertHead(int data, char key){//insert to the begining
  struct node *link= (struct node*) malloc(sizeof(struct node));
  link->data=data;
  link->key=key;
  link->next= head;
  head=link;
}

void insertTail(int data, char key){//insert to the end
  struct node *link= (struct node*) malloc(sizeof(struct node));
  link->data=data;
  link->key=key;
  link->prev= tail;
  tail=link;
}

struct node* delete(){//delete 1st item
  struct node *tempLink=head;
  head= head->next;
  return tempLink;
}
void printList()
{
  struct node *ptr=head;
  printf("\n[\n");
  while (ptr!=NULL)
  {
      printf("%d", ptr->data);
      printf("%c\n", ptr->key);
      ptr=ptr->next;
  }
  printf("]\n");
}

int main(void){
  insertHead(1,'a');
  insertTail(2,'b');
  insertHead(3,'c');
  insertHead(4,'d');
  insertHead(5,'e');
  printList();
  delete();
  printList();
}
