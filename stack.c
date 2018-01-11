#include <stdio.h>
#include <stdlib.h>
typedef struct node{
  int val;
  int runmin;
  struct node* prev;
}node;
int min(int a,int b)
{
  if(a<b)
    return a;
  return b;
}
node* push(int x,node* head)
{

  node* temp=(node*)malloc(sizeof(node));
  if(head == NULL){
    temp->val=x;
    temp->prev=NULL;
    temp->runmin=x;
  }
  else
    {
      temp->val =x;
      temp->prev=head;
      temp->runmin=min(x,temp->prev->runmin);
    }
  return temp;
}
node *pop(node *head)
{
  if(head == NULL)
    {
      printf("No element present\n");
      return head;
    }
  else if(head->prev == NULL)
    {
      printf("%d\n",head->val);
      return NULL;
    }
  else{
    node* temp=(node *)malloc(sizeof(node));
    temp =head;
    printf("%d\n",head->val);
    return temp->prev;
  }
}
int top(node* head)
{
  if(head == NULL) return -1;
  return head->val;
}
void display(node* head)
{
  node* temp = head;
  while(temp!=NULL)
    {
      printf("%d->",temp->val);
      temp=temp->prev;
    }
}
int main()
{
  node* head=NULL;
  int x,n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      scanf("%d",&x);
      head = push(x,head);
    }
  printf("%d\n",head->val);
  printf("min%d\n",head->runmin);
  head=pop(head);
  printf("%d\n",head->val);
  printf("min%d\n",head->runmin);
  return 0;
}
