#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:
    string name;
    int room;
    float bill;
 void setdata (void);
 void display(void);
};
void student::setdata()
{
    cout<<"enter your name:";
    cin>>name;
    cout<<"enter your room:";
    cin>>room;
    cout<<"enter your bill:";
    cin>>bill;
}
void student ::display()
{
    cout<<"your info:"<<endl<<"Name:"<<name<<endl<<"Room:"<<room<<endl<<"Bill:"<<bill<<endl;
}
int main()
{
    int n,i=0;
    cout<<"Enter your number:";
    cin>>n;
    student ob;
    while(n!=0)
    {
        ob.setdata();
        ob.display();
        n--;
        }
return 0;
        }
