#include<iostream.h>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    int a=0;
    for(int i=2;i<=n-1;i++)
    {   
        if(n%i==0)
        {   

            cout<<"not a prime number";
           a=1;
           break;
        }
        
    }
    if(a==0)
    {
        cout<<"prime number";
    }
   
    return 0;
    }   
        
        
        
    
    

