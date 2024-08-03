#include<iostream>
using namespace std;

int main()
{
    int k, n;
    
    cout<<"Enter the number of items : ";
    cin>>n;
    
    int v[n+1];
    int w[n+1];
    
    cout<<"\nEnter the weights of the items : ";
    for(int i=1 ;i<=n;i++)
    {
        cin>>w[i];
    }
    
    cout<<"\nEnter the values of the items : ";
    for(int i =1;i<=n ;i++)
    {
        cin>>v[i];
    }
    
    cout<<"Enter the capacity of the knapsack : ";
    cin>>k;
    
    int a[n+1][k+1];
    
    for(int i=0;i<=k;i++) a[0][i] = 0;
    
    for(int i=0;i<=n;i++) a[i][0] = 0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(j - w[i] >= 0)
            {
                a[i][j] = max( a[i-1][j] , a[i-1][j-w[i]] + v[i] );
            }
            else
            {
                a[i][j] = a[i-1][j];
            }
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    
    cout<<"\nThe maximum value is : "<<a[n][k];
}
