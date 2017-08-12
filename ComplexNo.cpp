#include<iostream.h>
#include<math.h>
struct Complex
{
    float real,imaginary;
};
int main()
{
    Complex c1,c2,c3;
    float mod,arg;
    int ch1;
    char ch2;
    do
    {
        cout<<"\nEnter complex number 1 (real - imaginary): ";
        cin>>c1.real>>c1.imaginary;
        cout<<"\n1.Addition"<<"\n2.Subtract"<<"\n3.Multiply"<<"\n4.Divide"<<"\n5.Modulus"<<"\n6.Argument"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch1;
        if (ch1 == 1 || ch1 == 2 || ch1 == 3 || ch1 == 4)
        {
           cout<<"\nEnter complex number 2 (real - imaginary): ";
           cin>>c2.real>>c2.imaginary;
        }
        switch (ch1)
        {
        case 1:
            c3.real = c1.real + c2.real;
            c3.imaginary = c1.imaginary + c2.imaginary;
            break;
        case 2:
            c3.real = c1.real - c2.real;
            c3.imaginary = c1.imaginary - c2.imaginary;
            break;
        case 3:
            c3.real = (c1.real*c2.real) - (c1.imaginary*c2.imaginary);
            c3.imaginary = (c1.imaginary*c2.real) + (c1.real*c2.imaginary);
            break;
        case 4:
            c3.real = ((c1.real*c2.real) + (c1.imaginary*c2.imaginary)) / (pow(c2.real,2) + pow(c2.imaginary,2));
            c3.imaginary = ((c1.imaginary*c2.real) - (c1.real*c2.imaginary)) / (pow(c2.real,2) + pow(c2.imaginary,2));
            break;
        case 5:
            mod = sqrt(pow(c1.real,2) + pow(c1.imaginary,2));
            cout<<"\nModulus of complex number = "<<mod;
            break;
        case 6:
            arg = atan2(c1.imaginary,c1.real);
            cout<<"\nArgument of complex number = "<<arg;
            break;
        default:
            cout<<"Invalid input";
        }
        if (ch1 == 1 || ch1 == 2 || ch1 == 3 || ch1 == 4)
        {
            cout<<"\nResultant complex number = "<<c3.real;
            if (c3.imaginary < 0)
                cout<<" - "<<-c3.imaginary<<"i";
            else
                cout<<" + "<<c3.imaginary<<"i";
        }
        cout<<"\n\nDo you want to try again [y/n] ? ";
        cin>>ch2;
    } while (ch2 == 'y' || ch2 == 'Y');
    return 0;
}
