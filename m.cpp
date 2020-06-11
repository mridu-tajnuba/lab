#include <bits/stdc++.h>
using namespace std;
class Parent
{
    public:
      char id_p;
};
class Child : public Parent
{
    public:
      char id_c;
};
int main()
   {

        Child obj1;
        obj1.id_c = M;
        obj1.id_p = D;
        cout << "Child id is " <<  obj1.id_c << endl;
        cout << "Parent id is " <<  obj1.id_p << endl;

        return 0;
   }
