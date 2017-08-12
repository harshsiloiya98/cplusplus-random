#include<fstream.h>
#include<iostream.h>
class Student
{
    int iReg_no;
    char cName[20];
public:
    void setRegno()
    {
        cout<<"\nEnter the registration number: ";
        cin>>iReg_no;
    }
    void setName()
    {
        cout<<"\nEnter the name of student: ";
        cin>>cName;
    }
    int getRegno()
    {
        return iReg_no;
    }
    char *getName()
    {
        return cName;
    }
};
int main()
{
    ofstream Sfil("studfile.dat");
    char ch;
    Student svar;
    while (1)
    {
        cout<<"\nWant to enter more records ? ";
        cin>>ch;
        if (ch == 'n')
            break;
        svar.setRegno();
        svar.setName();
        Sfil.write((char *)&svar,sizeof(Student));
    }
    Sfil.close();
    cout<<"\nDo you want to view the contents of the file ? ";
    cin>>ch;
    if (ch == 'y')
    {
        ifstream Sfil("studfile.dat");
        Sfil.read((char *)&svar,sizeof(Student));
        while (Sfil)
        {
            cout<<"\nRegistration number is "<<svar.getRegno();
            cout<<"\nStudent name is "<<svar.getName()<<endl;
            Sfil.read((char *)&svar,sizeof(Student));
        }
    }
    return 0;
}
