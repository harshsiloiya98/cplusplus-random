#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int m1[10][10],m2[10][10],m3[10][10];
  int i,j,m,n,p,q;
  cout<<"\nInput row and column of matrix A: ";
  cin>>m>>n;
  cout<<"\nInput row and column of matrix B: ";
  cin>>p>>q;
  //----------------------------------------------
  if ((m == p) && (n == q))                //tests the equality of the orders
    cout<<"Matrix can be added"<<endl;     //of the matrices
  else
  {
    cout<<"Matrix cannot be added"<<endl;
    goto end_program;
  }
  //----------------------------------------------
  cout<<"Input matrix A:"<<endl;           //code for input and display of
  for (i = 0; i < m; i++)                  //matrix A (i.e. m1)
  {
    for (j = 0; j < n; j++)
      cin>>m1[m][n];
  }
  cout<<"\n\nMATRIX A :- ";
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
      cout<<" "<<m1[i][j];
  }
  //----------------------------------------------
  cout<<"\nInput matrix B:"<<endl;         //code for input and display of
  for (i = 0; i < p; i++)                  //matrix B (i.e. m2)
  {
    for (j = 0; j < q; j++)
      cin>>m2[i][j];
  }
  cout<<"\n\nMATRIX B :- ";
  for (i = 0; i < p; i++)
  {
    for (j = 0; j < q; j++)
      cout<<" "<<m2[i][j];
  }
  //----------------------------------------------
  for (i = 0; i < m; i++)                  //code for adding both matrices
  {                                        //and displaying the sum
    for (j = 0; j < n; j++)
      m3[i][j] = m1[i][j] + m2[i][j];
  }
  cout<<"\nThe sum of two matrix is:"<<endl;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
      cout<<" "<<m3[i][j];
  }
  //----------------------------------------------
  end_program:
  getch();
}

