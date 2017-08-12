#include<iostream.h>
int main()
{
  int pin,ch1;
  char ch2;
  long int amt_d,amt_w,bal = 0;
  do
  {
    statement:
    cout<<"\n";
    cout<<"Enter pin: ";
    cin>>pin;
    if (pin == 32767)
    {
      cout<<"Welcome"<<endl;
      cout<<"1.Deposit"<<endl;
      cout<<"2.Withdraw"<<endl;
      cout<<"3.View bank balance"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Select your choice: ";
      cin>>ch1;
      if (ch1 == 1)
      {
	cout<<"Enter amount you want to deposit: ";
	cin>>amt_d;
	if (amt_d > 1000000)
	  cout<<"Too much money ! Unable to deposit !";
	else if (amt_d <= 1000000)
	{
	  bal = amt_d + bal;
	  cout<<"You have succesfully deposited Rs. "<<amt_d<<endl;
	  cout<<"Balance = Rs. "<<bal;
	}
	else
	  cout<<"ERROR !";
      }
      else if (ch1 == 2)
      {
	cout<<"Enter amount you want to withdraw: ";
	cin>>amt_w;
	if (amt_w > 1000000)
	  cout<<"Too much money ! Unable to withdraw !";
	else
	{
	  if (bal > 0)
	  {
	    bal = bal - amt_w;
	    cout<<"You have succesfully withdrawn Rs. "<<amt_w<<endl;
	    cout<<"Balance remaining = Rs. "<<bal;
	  }
	  else
	   cout<<"No money in the account ! Unable to withdraw !";
	}
      }
      else if (ch1 == 4)
      {
	cout<<"Goodbye !";
	goto exit;
      }
      else if (ch1 == 3)
      {
          if (bal < 0)
            bal = 0;
          cout<<"Balance in account = "<<bal<<endl;
      }
      else
	cout<<"ERROR";
      cout<<"\nDo you want to try again [y/n] ??";
      cin>>ch2;
      if (ch2 == 'n' || ch2 == 'N')
	cout<<"Goodbye !";
    }
    else
    {
      cout<<"Incorrect pin ! Try again ......"<<endl;
      goto statement;
    }
  }
  while (ch2 == 'Y' || ch2 == 'y');
  exit:
  return 0;
}



