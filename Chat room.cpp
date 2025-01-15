#include<iostream>
using namespace std;
int main()
{

    string a;
    cin>>a;
    int j=0,h,e,l,o; 

    for(int i=0;i<a.length();i++){
        if(a[i]=='h'){
            h=i;
        }
        if(a[i]=='e'){
            e=i;
        }
        if(a[i]=='l'){
            l=i;
            j++;
        }
        if(a[i]=='o'){
            o=i;
        }
    }
    if(h<e&&e<l&&l<o&&j>1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}