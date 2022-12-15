#include<stdio.h>
int queue[30],n,front=0,rear=0,c,y;
void insert();
void delete();
void display();
void main()
{
printf("Enter the size of  queue\n");
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
if (front==-1)
front=0;
printf("Enter the element to be inserted\n");
scanf("%d",&y);
rear++;
}
queue[rear]=y;
}
void delete()
{
if (front ==-1)
{
printf("Queue is empty ");
}
else
{
printf("\n %d deleted", queue[front]);
front++;
}
}
void display()
{
int i;
printf("The  Queue is");
for (i = front; i <=n; i++)
printf("%d\t ", queue[i]);
}

