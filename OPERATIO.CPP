#include<iostream.h>
#include<conio.h>
class Math
{
   int n1,n2;
   float s,d,p,q,r;

   public:
   float assign(float val1, float val2)    //Function to assign values
   {
     n1 = val1;
     n2 = val2;
     return n1,n2;
   }
   float add()                      //Function for addition
   {
     s = n1 + n2;
     return s;
   }
   float sub()                      //Function for substraction
   {
     d = n1 - n2;
     return d;
   }
   float mul()                      //Function for multiplication
   {
     p = n1 * n2;
     return p;
   }
   float div()                      //Function for division
   {
     if (n2 < 0 || n2 > 0)
     {
	q = n1 / n2;
     }
     else
     {
	cout<<"Error!!";
     }
     return q;
   }
   float mod()                      //Function for modulus operation
   {
     r = n1 % n2;
     return r;
   }
   void display()                   //Function for displaying results
   {
     cout<<"Result on adding the no.s = "<<s<<endl;
     cout<<"Result on subtracting the no.s = "<<d<<endl;
     cout<<"Result on multiplying the no.s = "<<p<<endl;
     cout<<"Result on dividing the no.s = "<<q<<endl;
     cout<<"Remainder on dividing both the no.s = "<<r<<endl;

   }
 };
 void main()
 {
   clrscr();
   float x,y;
   cout<<"Enter two numbers:";
   cin>>x>>y;
   Math m;
   m.assign(x,y);
   m.add();
   m.sub();
   m.mul();
   m.div();
   m.mod();
   m.display();
   getch();
 }