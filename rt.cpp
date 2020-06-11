#include<iostream>
using namespace std;
class box
{
private :
    double length ;
public:
    void setlength (double d);
    double getlength (void);
    box();
};
box::box()
{
    cout<<"Object is being created "<<endl;



}
    void  box :: setlength (double d)
{
    length=d;
}
double box :: getlength (void)
{
    return length;
}
  int main()
  {
      box box1;
      box1.setlength(10.0);
      cout<<"value:" <<box1.getlength();
  }
