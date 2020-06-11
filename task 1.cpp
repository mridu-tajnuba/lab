#include<iostream>
using namespace std;
void display(int);
void display(float);
void display(int,double);
int main(){

int a =2;
float b=2.3;
double c=5.005;

display(a);
display(b);
display(a,c);
return 0;
}
void display(int var){
cout<<"Integer number:"<<var<<endl;
}
void display(float var){
cout<<"Float number:"<<var<<endl;
}
void display(int a,double c){
cout<<"Integer number:"<<var<<endl;
cout<<"double number:"<<var<<endl;
}
void display(int var1,float var2){
cout<<"Integer number:"<<var1;
cout<<"float number:"<<var2;
cout<<"double number:"<<var3;
}
