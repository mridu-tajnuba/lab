
#include<iostream>
using namespace std;
class printData
{
    public:
    void print(int i){
    cout<<"Printing int:"<<i<<endl;
    }
    void print(double f){
    cout<<"printing float:"<<f<<endl;
    }
    void print(char* c ){
    cout<<"printing character:"<<c<<endl;
    }
    void print(int a, int b){
    cout<<"printing int:"<<a<<b<<endl;
    }

};

int main(void)
{
   printData pd;

   pd.print(5);
   pd.print(500.45);
   pd.print("mridu is the best");
   pd.print("5,10");

    return 0;
}




