#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a,b,result;
    char op;

    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter operator:";
    cin>>op;
    cout<<"Enter the value of b:";
    cin>>b;
    if(op=='+')
    {
        result= a+b;
        cout<<"The sum is"<<result;

    }
    else if(op=='-')
    {
        result=a-b;
        cout<<"The substraction is:"<<result;
    }

    else if(op=='*')
    {
        result=a*b;
        cout<<"The multiplication is:"<<result;

    }
    else if(op=='/')
    {
        result=a/b;
        cout<<"The division is:"<<result;

    }



 getch();


}
