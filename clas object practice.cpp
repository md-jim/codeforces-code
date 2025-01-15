#include<iostream>
using namespace std;

class cse
{
    public:
        string name;
    int roll;
    double cgpa;
   void display(){
      cout<<name<<"  "<<roll<<"   "<<cgpa<<endl;

    }
cse(string x,int y,double z){
name=x;
roll=y;
cgpa=z;}
};
int main ()
{
    cse jim("JIM",230120,3.00),mahim("MAHIM" ,230121,3.4);

    jim.display();
    mahim.display();
}
