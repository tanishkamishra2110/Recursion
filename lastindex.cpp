#include <iostream>

using namespace std;

int i=0;
int x=-1;
int is_check(int a[],int n,int ele)
{
    if(n==-1)    
    {
        if(x==-1)
        return -1;
        
        else
        return x-1;
    }
    if(a[0]==ele)
    { i++;
        x=i;
        is_check(a+1,n-1,ele) ; 
    }
    else
    {
        i++;
     is_check(a+1,n-1,ele) ;
     
    }

}

int main()
{
    int arr[7] = {6,7,7,2,5,3,6} ;
    int key;
    cin>>key;

    cout<<is_check(arr,7,key);
return 0;}