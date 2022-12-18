#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node *LINK;
};
struct node *header = NULL;
void InsertFirst()
{
struct node *ptr;
ptr=(struct node *)malloc(sizeof(struct node *));
if(ptr==NULL)
printf("\nNo space ");
else{
printf("\nEnter the element to be inserted : ");
scanf("%d",&ptr->data);
ptr->LINK=NULL;
if(header==NULL)
header=ptr;
else{
ptr->LINK=header;
header=ptr;
}
printf("\n%d inserted into the list",ptr->data);

}
}
void InsertLast()
{
struct node *temp,*ptr;
ptr=(struct node *)malloc(sizeof(struct node *));
ptr->LINK=NULL;
temp=header;
if(ptr==NULL)
printf("\nNo space available ");
else
{
while(temp->LINK!=NULL)
temp=temp->LINK;
printf("\nEnter the element to be inserted : ");
scanf("%d",&ptr->data);
temp->LINK=ptr;
printf("\n%d inserted ",ptr->data);
}
}
void InsertLocation()
{
int key;
struct node *temp,*ptr;
ptr=(struct node *)malloc(sizeof(struct node *));
ptr->LINK=NULL;
printf("\nEnter the value of the node after which the new node to be inserted : ");
scanf("%d",&key);
temp=header;
while(temp->data!=key){
temp=temp->LINK;
if(temp==NULL)
break;
}
if(temp==NULL){
printf("The %d value not exist ",key);
return;
}
if(temp->data==key){
if(ptr==NULL)

printf("\nNo space ");
else{
printf("\nEnter the element to be inserted : ");
scanf("%d",&ptr->data);
ptr->LINK=temp->LINK;
temp->LINK=ptr;
printf("\n%d inserted after %d ",ptr->data,key);
}
}
}
void DeleteFirst()
{
struct node *temp;
temp=header;
header=temp->LINK;
printf("%d deleted ",temp->data);
free(temp);
}
void DeleteLast()
{
struct node *temp,*p;
temp=header;
while(temp->LINK!=NULL)
{
p=temp;
temp=temp->LINK;
}
printf("%d deleted ",temp->data);
free(temp);
p->LINK=NULL;
}
void DeleteLocation()
{
struct node *temp,*p;
int key;
printf("\nEnter the value of the node to be deleted : ");
scanf("%d",&key);

temp=header;
while(temp->data!=key)
{
p=temp;
temp=temp->LINK;
if(temp==NULL)
break;
}
if(temp==NULL){
printf("The %d value not exist ",key);
return;
}
if(temp->data==key){
printf("%d deleted ",temp->data);
p->LINK=temp->LINK;
free(temp);
}
}

void Search()
{
struct node *temp;
int key,pos=0;
temp=header;
printf("\nEnter the element to be searched");
scanf("%d",&key);
while(temp->data!=key)
{
temp=temp->LINK;
pos++;
if(temp==NULL)
break;
}
if(temp==NULL){
printf("\nThe %d value not exist ",key);
return;
}
if(temp->data==key){
printf("\n%d is available in location '%d'",key,pos+1);
}

}

void Display()
{
struct node *p;
if(header==NULL)
printf("List is empty");
else{
printf("\nElements in link list are : ");
p=header;
while(p!=NULL){
printf("\t%d",p->data);
p=p->LINK;
}
}
}
void main()
{
int choice;
printf("\nSINGLY LINKED LIST \n");
do
{
printf("\n\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Display\n9.Exit");
printf("\nEnter a choice ");
scanf("%d",&choice);
switch(choice)
{
case 1:InsertFirst();break;
case 2:InsertLast();break;
case 3:InsertLocation();break;
case 4:DeleteFirst();break;
case 5:DeleteLast();break;
case 6:DeleteLocation();break;
case 7:Search();break;
case 8:Display();break;
case 9:exit(0);

default: printf("\n invalid option");
}
}while(choice!=9);
}