#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *link;
};
struct node *head;

void display()
{
 struct node *ptr;
 if(head==NULL)
 printf("\nLinked list is empty");
 else
 {
  ptr=head;
  printf("\nLinked list elements are:");
  while(ptr!=NULL)
  {
   printf("%d ",ptr->data);
   ptr=ptr->link;
  }
 }
}

void insertfront(int x)
{
 struct node *new;
 new=(struct node *)malloc(sizeof(struct node));
 new->data=x;
 new->link=head;
 head=new;
}

void insertend(int x)
{
 struct node *new,*ptr;
 new=(struct node *)malloc(sizeof(struct node));
 new->data=x;
 new->link=NULL;
 if(head==NULL)
 head=new;
 else
 {
  ptr=head;
  while(ptr->link!=NULL)
  ptr=ptr->link;
  ptr->link=new;
 }
}

void insertafter(int key,int x)
{
 struct node *new,*ptr;
 if(head==NULL)
 printf("Insertion is not possible");
 else
 {
  ptr=head;
  while(ptr->data!=key && ptr->link!=NULL)
  ptr=ptr->link;
  if(ptr->data!=key)
  printf("Insertion not possible");
  else
  {
   new=(struct node *)malloc(sizeof(struct node));
   new->data=x;
   new->link=ptr->link;
   ptr->link=new;
  }
 }
}

void deletefront()
{
 struct node *temp;
 if(head==NULL)
 printf("Deletion not possible");
 else
 {
  temp=head;
  head=head->link;
  free(temp);
 }
}

void deleteend()
{
 struct node *prev,*curr,*temp;
 if(head==NULL)
 printf("Deletion not possible");
 else if(head->link==NULL)
 {
  temp=head;
  head=NULL;
  free(temp);
 }
 else
 {
  prev=head;
  curr=head->link;
  while(curr->link!=NULL)
  {
   prev=curr;
   curr=curr->link;
  }
  prev->link=NULL;
  free(curr);
 }
}

void deleteany(int key)
{
 struct node *prev,*curr,*temp;
 if(head==NULL)
 printf("Deletion not possible");
 else if(head->data==key)
 {
  temp=head;
  head=head->link;
  free(temp);
 }
 else
 {
  prev=head;
  curr=head;
  while(curr->data!=key && curr->link!=NULL)
  {
   prev=curr;
   curr=curr->link;
  }
  if(curr->data!=key)
  printf("Deletion is not possible");
  else
  {
   prev->link=curr->link;
   free(curr);
  }
 }
}

void main()
{
 int ch,x,key;
 do
 {
  printf("\n1.Insert front\n2.Insert end\n3.Insert after\n4.Delete front\n5.Delete end\n6.Delete any\n7.Display\n8.Exit\n");
  printf("Enter the choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1 : printf("Enter new data:");
            scanf("%d",&x);
            insertfront(x);
            break;
   case 2 : printf("Enter new data:");
            scanf("%d",&x);
            insertend(x);
            break;
   case 3 : printf("Enter search key:");
            scanf("%d",&key);
            printf("Enter new data:");
            scanf("%d",&x);
            insertafter(key,x);
            break;
   case 4 : deletefront();
            break;
   case 5 : deleteend();
            break;
   case 6 : printf("Enter node to be deleted:");
            scanf("%d",&key);
            deleteany(key);
            break;
   case 7 : display();
            break;
   case 8 : break;
   default: printf("Invalid choice");
  }
 }while(ch!=8);
}
