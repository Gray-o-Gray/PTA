#include <iostream>
using namespace std;
int f_count(int n)
{
    int count=0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            count++;
        }
        else
        {
            n=(3*n+1)/2;
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<f_count(n)<<endl;

    return 0;
}
