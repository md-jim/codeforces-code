#include<iostream>
using namespace std;
int main(){

    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
    string a;
    cin>>a;
    if(a=="Tetrahedron"){
        count=count+4;
    }
  else if(a=="Cube"){
        count=count+6;
    }
    else if(a=="Octahedron"){
        count=count+8;
    }
   else if(a=="Dodecahedron"){
        count=count+12;
    }
   else if(a=="Icosahedron"){
        count=count+20;
    }


}
cout<<count<<endl;
}