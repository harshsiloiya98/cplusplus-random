#include<iostream.h>
#include<conio.h>
template <class DT>
class Mix
{
  DT val1,val2;
  public:
  Mix (DT first, DT second)
  {
    val1 = first;
    val2 = second;
  }
  DT FindoutMax();
};
template <class DT> DT Mix<DT>::FindoutMax()
{
  DT rval;
  rval = (val1 > val2) ? val1 : val2;
  return rval;
}
void main()
{
  clrscr();
  Mix<int> myobject(20,8);
  cout<<myobject.FindoutMax();
  getch();
}