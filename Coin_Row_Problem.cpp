#include<iostream>
#include<array>
using namespace std;

int main()
{
    int c[] = {0,5,1,2,10,6,2};

    int n = 7 ;

    int s[7] ;

    cout<<"The coins are : "<<endl ;

    for(int i =0;i<n;i++)
    {
        cout<<" "<<c[i] ;
    }
    cout<<endl;

    s[0] = 0;
    s[1] = c[1];

    for(int i =2; i<n;i++)
    {
        s[i] = max( c[i] + s[i-2], s[i-1] );
    }

    cout<<"The maximum amount is : "<<s[n-1];

    return 0;
    
}