#include<fstream.h>
#include<conio.h>

class Student
{
  int iReg_no;
  char cName[20];
  public:
  void setRegno()
  {
    cout<<"\nEnter registration number: ";
    cin>>iReg_no;
  }
  void setName()
  {
    cout<<"\nEnter name of the student: ";
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
void main()
{
  clrscr();
  ofstream sfil("studfile.dat");
  char ch;
  Student svar;
  svar.setRegno();
  svar.setName();
  sfil<<svar.getRegno()<<" "<<svar.getName();
  sfil.close();
  cout<<"\nDo you want to view the contents of the file [y/n] ? ";
  cin>>ch;
  if (ch == 'y')
  {
    ifstream sfil("studfile.dat");
    int ireg;
    char nam[20];
    sfil>>ireg>>nam;
    cout<<"\nRegistration number is "<<ireg;
    cout<<"\nStudent name is "<<nam;
  }
  getch();
}