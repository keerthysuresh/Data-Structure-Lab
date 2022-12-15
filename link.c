#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node *link;
}
struct node *header=NULL;
void InsertFirst()
{
struct node *ptr;
ptr=(struct node*)malloc(size of(struct node*));
if(ptr==NULL)
printf("\n no space");
else
{
printf("\n enter the element to be inserted:");
scanf("%d",&ptr->data);
ptr->LINK=NULL;
if (header==NULL)
header=ptr;
else
{
ptr->LINK=header;
header=ptr;
}
printf("\n %d inserted into the list",ptr->data);
}
}
void InsertLast()
{
struct node *temp,*ptr;
ptr=(struct node*)malloc(size of(struct node*));
if(ptr==NULL)
printf("\n no space");
else
{
while(temp->LINK!=NULL)
temp=temp->LINK;
printf("\n enter the element to be inserted:");
scanf("%d",&ptr->data);
temp->LINK=ptr;
printf("\n %d inserted into the list",ptr->data);
}
}
void InsertLocation()
{
int key;
struct node *temp,*ptr;
ptr=(struct node*)malloc(size of(struct node*));
ptr->LINK=NULL;
printf("\n enter the value of the node to be inserted");
scanf("%d",&key);
temp=header;
while(temp->data!=key)
{
temp=temp->LINK;
if(temp==NULL)
break;
}
if(tem==NULL)
{
printf(" the %d  value not exist:",key);
return;{
}
if(temp->data==key){
if(ptr==NULL)
printf("\n no space");
else
{
printf("\n enter the value of the node to be inserted");
scanf("%d",&ptr->data);
ptr->LINK=temp->LINK;
temp->LINK=ptr;
printf("\n %d insert after %d",ptr->data,key);
}
}
}
void  DeleteFirst()
{
struct  node *temp;
temp=header;
header=temp->LINK;
printf("%d deleted",temp->data);
free(temp);
{
void DeleteLast()
{
struct node *temp,*p;
temp=header;
while(temp->LINK!=NULL)
{
p=temp;
temp=temp->LINK;
}
printf("%d deleted",temp->data);
free(temp);
p->LINK=NULL;
}
printf("%d deleted",temp->data);
free(temp);
p->LINK=NULL;
}
void DeleteLocation()
{
struct node *temp,*p;
int key;
printf("\n enter the value of the node to be detected");
scanf("%d",&key);
temp=header;
while(temp->data!=key)
{
p=temp;
temp=temp->LINK;
if(temp==NULL)
{
printf("the %d value not exist",key);
return;
}
if(temp-.data==key){
printf("%d deleted",temp->data);
p->LINK=temp->LINK;
free(temp);
}
}
void search()
{
struct node *temp;
int key,pos=0;
temp=header;
printf("\n enter the element to be searched");
scanf("%d",&key);
while(temp->data!=key)
{
temp=temp->LINK;
pos++;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("%d  value not exixt",key);
return;
}
if(temp->data==key)
{
printf("\n %d is available in location '%d '",key,pos+1);
}
}
void display()
{
strut node *p;
if(header==NULL)
printf("list is empty");
else
{
printf("\n element in link list are:");
p=header;
while(p!=NULL)
{
printf("\t%d",p->data);
p=p->LINK;
}
}
}
void main()
{
int choice;
printf("\n SINGLY LINKED LIST \n");
do
{
printf("\n\n1.Insert in begining \n2.Insert at last \n3.Insert at random location \n4.Delete bigining \n5.Delete last \n6.Delete a specified  location \n7.search \n8.Display \n9.exit");
printf("enter a choice");
scanf("%d",&choice);
switch(choice);
{
case 1:InsertFirst();
break;
case 2:InsertLast();
break;
case 3:InsertLocation();
break;
case 4:DeleteFirst();
break;
case 5:DeleteLast();
break;
case 6:DeleteLocation();
break;
case 7:search();
break;
case 8:display();
break;
case 9:exit();
default:
printf("\n Invalid option");
}
}
while(choice !=9);
}



