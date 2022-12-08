#include<stdio.h>
int stack[100],choice,i,n,top,x;
void push();
void pop();
void display();
int main()
{
top=-1;
printf("enter the size of the stack[max=100]:");
scanf("%d",&n);
printf("STACK OPERATION USING ARRAY");
printf("\n----------------------------:");
printf("\n\t 1.push \n\t 2.pop \n\t 3.display \n\t 4.exit:");
do
{
   printf("\n enter the choice:");
   scanf("%d",&choice);
    switch(choice)
     {
           case 1:
          {
           push();
           break;
          }
        case 2:
       {
       pop();
       break;
        }
        case 3:
        {
        display();
        break;
        }
        case 4:
        {
        printf("\n\t exit");
        break;
        }
        default:
        {       
        printf("\n\t please enter a valid choice");
        }
      }
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\t STACK is overflow");
}
else
{
printf("Enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\t Stack is under flow");
}
else
{
printf("\n\t the poped elements is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n the elements in stack \n");
for(i=top;i>=0;i--)
printf("\n %d",stack[i]);
printf("\n press next choice");
}
else
{
printf("\n the stack is empty");
}
}

