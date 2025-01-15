#include<iostream>
using namespace std;
class common_factor
{
    public:
        int result;
      int gcd(int a,int b)
    {
        if(b!=0)
        {
            return gcd(b,a%b);
        }
        else
        {
            return a;
        }
    }
};

int main()
{
    common_factor rakibul;
    int n1,n2;
    cout<<"enter number 1:";
    cin>>n1;
    cout<<"enter number 2:";
    cin>>n2;
    int value= rakibul.gcd( n1, n2);

     cout<<value<<endl;

}
