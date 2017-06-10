#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
char num[101];
string f_transfor(int i)
{
    if(i==1)
    {
        return "yi";
    }
    else if(i==2)
    {
        return "er";
    }
    else if(i==3)
    {
        return "san";
    }
    else if(i==4)
    {
        return "si";
    }
    else if(i==5)
    {
        return "wu";
    }
    else if(i==6)
    {
        return "liu";
    }
    else if(i==7)
    {
        return "qi";
    }
    else if(i==8)
    {
        return "ba";
    }
    else if(i==9)
    {
        return "jiu";
    }
    else if(i==0)
    {
        return "ling";
    }
}
int main()
{
    int sum=0;
    cin>>num;

    int m[4];
    int i=0;
    while(num[i]!='\0')
    {
        char p[1];
        p[0]=num[i];
        sum+=atoi(p);
        i++;
    }

    i=0;
    while(sum>0)
    {
        m[i]=sum%10;
        sum=sum/10;
        i++;
    }


        for(int j=i-1;j>=0;j--)
        {
            if(j==0)
            {
                cout<<f_transfor(m[j]);
            }
            else
            {
                cout<<f_transfor(m[j])<<" ";
            }
        }

    if(i==0)
        cout<<f_transfor(0);
    return 0;

}
