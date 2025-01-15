#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,t1,t2,t3;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k=k*l;
    t1=k/n;
    t2=c*d;

    t3=p/np;

    if(t1<t2&&t2<t3){
        cout<<t1/n;
    }
    else if(t2<t3&&t2<t1){
        cout<<t2/n;
    }
    else if(t3<t2&&t3<t1){
        cout<<t3/n;
    }

}