#include <stdio.h>
#include <string.h>

struct node
{
	int data;
	char key;
	struct node *next;
	struct node *pre;
};

void printList(struct node *n)
{
  while (n!=NULL)
  {
      printf("%d", n->data);
      printf("%c\n", n->key);
      n=n->next;
  }
}

int main(void){
  int i;

  struct node *head= NULL;
  struct node *second= NULL;
  struct node *tail= NULL;

  head= (struct node*) malloc(sizeof(struct node));
  second= (struct node*) malloc(sizeof(struct node));
  tail= (struct node*) malloc(sizeof(struct node));

  head->data=1;
  head->key='a';
  head->next= second;

  second->data=2;
  second->key='b';
  second->next= tail;

  tail->data=3;
  tail->key='c';
  tail->next= NULL;

  printList(head);

}
