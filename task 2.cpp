#include<iostream>
#include<fstream>
using namespace std;

int main()
{

int a[10];
ifstream myfile("example.txt");
for(int i=0; i<10; i++)
{
    myfile>>a[i];
}
    myfile.close();

    ofstream myfile1("test.txt");
    for(int i=0; i<10; i++)
    {
        myfile1<<a[i]<<endl;
    }
    myfile1.close();
}
