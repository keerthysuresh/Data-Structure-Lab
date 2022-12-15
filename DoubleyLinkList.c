#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *prev,*next;
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
   printf("%d\t",ptr->data);
   ptr=ptr->next;
  }
 }
}

void insertfront(int x)
{
 struct node *new;
 new=(struct node *)malloc(sizeof(struct node));
 new->data=x;
 new->prev=new->next=NULL;
 if(head==NULL)
 head=new;
 else
 {
  new->next=head;
  head->prev=new;
  head=new;
 }
}

void insertend(int x)
{
 struct node *new,*ptr;
 new = (struct node *)malloc(sizeof(struct node));
 new->data=x;
 new->prev=new->next=NULL;
 if(head==NULL)
 head=new;
 else
 {
  ptr=head;
  while(ptr->next!=NULL)
  ptr=ptr->next;
  ptr->next=new;
  new->prev=ptr;
 }
}

void insertafter(int key,int x)
{
 struct node *new,*ptr;
 if(head==NULL)
  printf("Search key not found.Insertion is not possible");
 else
 {
  ptr=head;
  while(ptr->data!=key&&ptr->next!=NULL)
  ptr=ptr->next;
  if(ptr->data!=key)
   printf("Search data not found.Insertion not possible");
  else
  {
   new=(struct node *)malloc(sizeof(struct node));
   new-> data=x;
   new->prev=ptr;
   new->next=ptr->next;
   if(new->next!=NULL)
    new->next->prev=new;
   ptr->next=new;
  }
 }
}

void deletefront()
{
 struct node *temp;
 if(head==NULL)
  printf("list is empty.Deletion not possible");
 else if(head->next==NULL)
 {
  temp=head;
  head=NULL;
  free(temp);
 }
 else
 {
  head=head->next;
  free(head->prev=NULL);
  head->prev=NULL;
 }
}

void deleteend()
{
 struct node *ptr,*temp;
 if(head==NULL)
 printf("List is empty.Deletion not possible");
 else if(head->next==NULL)
 {
  temp=head;
  head=NULL;
  free(temp);
 }
 else
 {
  ptr=head;
  while(ptr->next!=NULL)
  ptr=ptr->next;
  ptr->prev->next=NULL;
  free(ptr);
 }
}

void deleteany(int pos)
{
 int i=1;
 struct node *temp;
 temp=head;
 while(i<pos)
 {
  temp=temp->next;
  i++;
 }
 temp->prev->next=temp->next;
 temp->next->prev=temp->prev;
 free(temp);
}

void search(int key)
{
 int count=1;
 struct node *ptr;
 if(head==NULL)
  printf("Key not found");
 else
 {
  ptr=head;
  while(ptr->data!=key && ptr->next!=NULL)
  {
   ptr=ptr->next;
   count++;
  }
 if(ptr->data=key)
  printf("Key found at %d",count);
 else
  printf("Key not found");
 }
}

void main()
{
 int ch,x,key,pos;
 do
 {
  printf("\n1.Insert front\n2.Insert end\n3.Insert after\n4.Delete front\n5.Delete end\n6.Delete any\n7.Display\n8.Search\n9.Exit");
  printf("\nEnter the choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter new data:");
          scanf("%d",&x);
          insertfront(x);
          break;
   case 2:printf("Enter new data:");
          scanf("%d",&x);
          insertend(x);
          break;
   case 3:printf("Enter search key:");
          scanf("%d",&key);
          printf("Enter new data:");
          scanf("%d",&x);
          insertafter(key,x);
          break;
   case 4:deletefront();
          break;
   case 5:deleteend();
          break;
   case 6:printf("Eneter position of node to be deleted:");
          scanf("%d",&pos);
          deleteany(pos);
          break;
   case 7:display();
          break;
   case 8:printf("Enter the the key to be sarched:");
          scanf("%d",&key);
          search(key);
          break;
   case 9:break;
   default:printf("Invalid choice");
  }
 }
 while(ch!=9);
}
