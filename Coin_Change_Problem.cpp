#include<iostream>
#include<array>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of coins : ";
    cin>>m;
    
    int d[m+1];
    cout<<endl<<"Enter the denominations of the coin in inc. value  : ";
    for(int i=1;i<=m;i++)
    {
        cin>>d[i];
    }

    cout<<endl<<"Enter the value of n : ";
    cin>>n;
    
    int s[n+1];
    
    s[0] = 0;
    
    for(int i=1;i<=n;i++)
    {
        int temp = 999;
        int j = 1;
        while(j<=m && d[j]<= i)
        {
            temp = min( s[i - d[j]] , temp);
            j++;
        }
        s[i] = temp + 1;
        cout<<" "<<s[i];
    }
    
    cout<<endl<<"The minimum no of coins required is : "<<s[n];
    
    return 0;
    
}
