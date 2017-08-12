#include<iostream.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char ch1;
    int ch;
    float a,l,d,ap_sum = 0,n;
    float r,gp_sum = 0;
    do {
    system("cls");
    cout<<"OPERATIONS ON PROGRESSIONS"<<endl<<endl;
    cout<<"1.Arithmetic Progression"<<endl;
    cout<<"2.Geometric Progression"<<endl;
    cout<<"3.EXIT"<<endl;
    select:
    cout<<"\nEnter your choice: ";
    cin>>ch;
    if (ch > 3 || ch < 1)
    {
        cout<<"INVALID CHOICE !! TRY AGAIN";
        goto select;
    }
    //===================ARITHMETIC PROGRESSION========================
    if (ch == 1)
    {
        cout<<"\n1.Summation of series"<<endl;
        cout<<"2.Finding 'n'th term"<<endl;
        cout<<"3.Arithmetic Mean"<<endl;
        select1:
        cout<<"\nEnter your choice: ";
        cin>>ch;
        if (ch == 1)
        {
            cout<<"\nEnter first term of A.P.: ";
            cin>>a;
            cout<<"\nEnter number of terms you want to sum: ";
            cin>>n;
            cout<<"\nEnter common difference: ";
            cin>>d;
            for (float i = a; i <= a+d*(n-1); i+=d)
                ap_sum = ap_sum + i;
            cout<<"Sum of "<<n<<" terms = "<<ap_sum<<endl;
        }
        else if (ch == 2)
        {
            cout<<"\nEnter first term of A.P.: ";
            cin>>a;
            cout<<"\nEnter common difference: ";
            cin>>d;
            cout<<"\nEnter the term you want to view: ";
            cin>>n;
            cout<<n<<" term is "<<a+d*(n-1)<<endl;
        }
        else if (ch == 3)
        {
            cout<<"\nEnter the first and last term: ";
            cin>>a>>l;
            cout<<"\nEnter no. of arithmetic means you want between the two numbers: ";
            cin>>n;
            d = (l-a)/(n+1);
            for (float j = a; j <= l; j+=d)
                cout<<j<<" ";
            cout<<"\n";
        }
        else
        {
            cout<<"INVALID CHOICE !! TRY AGAIN !!";
            goto select1;
        }
    }
    //======================GEOMETRIC PROGRESSION==============================
    else if (ch == 2)
    {
        cout<<"\n1.Summation of series"<<endl;
        cout<<"2.Finding 'n'th term"<<endl;
        cout<<"3.Geometric mean"<<endl;
        select2:
        cout<<"Enter your choice: ";
        cin>>ch;
        if (ch == 1)
        {
            cout<<"\nEnter first term of G.P.: ";
            cin>>a;
            cout<<"\nEnter common ratio: ";
            cin>>r;
            cout<<"1.Finite summation"<<endl;
            cout<<"2.Infinite summation"<<endl;
            cout<<"Enter your choice: ";
            cin>>ch;
            if (ch == 1)
            {
                 cout<<"Enter number of terms you want to sum: ";
                 cin>>n;
                 for (float k = a; k <= a*pow(r,n-1); k*=r)
                      gp_sum = gp_sum + k;
            cout<<"Sum of "<<n<<" terms = "<<gp_sum<<endl;
            }
            else if (ch == 2)
            {
                if (abs(int(r)) < 1)
                {
                    gp_sum = a/(1-r);
                    cout<<"\nSum of infinite terms = "<<gp_sum<<endl;
                }
                else
                    cout<<"Not possible";
            }
        }
        else if (ch == 2)
        {
            cout<<"\nEnter first term of G.P.: ";
            cin>>a;
            cout<<"\nEnter common ratio: ";
            cin>>r;
            cout<<"Enter the term you want to view: ";
            cin>>n;
            cout<<n<<" term is "<<a*pow(r,n-1)<<endl;
        }
        else if (ch == 3)
        {
            cout<<"\nEnter the first and last term: ";
            cin>>a>>l;
            cout<<"Enter no. of geometric means you want between the numbers: ";
            cin>>n;
            r = pow(l/a,1/(n+1));
            for (float m = a; m <= l; m*=r)
                cout<<m<<" ";
            cout<<"\n";
        }
        else
        {
            cout<<"INVALID CHOICE !! TRY AGAIN !!";
            goto select2;
        }
    }
    else if (ch == 3)
        break;
    getch();
    system("cls");
    cout<<"\nWant to try again ? [y/n] ";
    cin>>ch1;
    } while (ch1 == 'y' || ch1 == 'Y');
    return 0;
}
