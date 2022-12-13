#include<stdio.h>
int queue[30],n,front=0,rear=0,c,y;
void insert();
void delete();
void display();
void main()
{
printf("Enter the size of circular queue\n");
scanf("%d",&n);
do
{
printf("\t\t\nMENU\t\t\n");
printf("\n1. Insert \n2. Delete\n3. Display\n4. Exit");
printf("\nEnter Choice 1-4? : ");
scanf("%d", &c);
switch (c)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:printf("exit\n");
}
}while (c!= 4);
}
void insert()
{
if ((front== 1 && rear == n) || (front == rear+ 1))
{
printf("queue is full");
return;
}
else
{ 
if (front==NULL)
front =rear=1;
else if (rear == n)
rear = 1;
else
rear++;
printf("Enter the element to be inserted\n");
scanf("%d",&y);
}
queue[rear]=y;
}
void delete()
{
if (front == NULL)
{
printf("Queue is empty ");
}
else
{
printf("\n %d deleted", queue[front]);
if (front == rear)
front = rear=NULL;
else
if(front==n)
front=1;
else
front++;
}
}
void display()
{
int i;
if (front > rear)
{
printf("The Circular Queue is");
for (i = front; i <=n; i++)
printf("%d\t ", queue[i]);
for (i = 1; i <= rear; i++)
printf("%d ", queue[i]);
}
else
{
for (i = front; i <= rear; i++)
printf("%d\t ", queue[i]);
}
}