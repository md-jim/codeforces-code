#include<iostream>
using namespace std;

class cse{
public:
   string name;
    int roll;
    int gpa;
     cse(string z,int x,int y){
      roll=x;
      gpa=y;
      name=z;
      cout<<name<<"  "<<roll<<"   "<<gpa<<endl;
     }

    void output(){
cout<<name<<"  "<<roll<<"   "<<gpa<<endl;}

    };
    int main()
{
    cse jim("JIM",1,2),mahim("MAHIM",2,3);
    }


