#include<iostream>
using namespace std;

int stack[100],n=100,top=-1;
void push(int val)
{
   if (top>=n-1)
   cout<<"stack overflow :"<<endl;
   else
   {
      top++;
      stack[top]=val;
   }
}

void pop()
{
   if(top==-1)
   cout<<"Empty stack :"<<endl;
   else
   {
      cout<<"popped element is :"<<stack[top]<<endl;
      top--;
   }
}

void display()
{
   if (top>=0)
   {
   cout<<"stack elements are :" <<endl;
   for (int i = top; i >= 0; i--)
      cout<<stack[i]<<" "<<endl;
   }   
   else
   {
      cout<<"stack is empty :"<<endl;
   }
}


int main()
{
   int ch ,val;
   cout<<"1]insert element :"<<endl;
   cout<<"2]pop the element :"<<endl;
   cout<<"3]Display the stack elements :"<<endl;
   cout<<"4]Exit :"<<endl;
   do
   {
      cout<<"Enter choice :"<<endl;
      cin>>ch;
      switch (ch)
      {
      case 1: 
      {
      cout<<"Enter the element which you want to insert: ";
      cin>>val;
      push(val);
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
      cout<<"Exit :) ";
      }

      default:
      {
      cout<<"Invalid choice entered : "<<endl;
      break;
      }
     }
   } while (ch!=4);
   return 0;
   
}