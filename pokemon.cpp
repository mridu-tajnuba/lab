#include<iostream>
using namespace std;
class Tajnuba
{
public:
    void Display(){

    cout<<"Display the memories"<<endl;
    }
};
class DerivedClass:public Tajnuba
{
  public:
    void Display()
    {
        cout<<"Display the memories"<<endl;
    }
};

int main()
{
    Tajnuba t;
    DerivedClass dr;
    t.Display();
    dr.Display();
}
