#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int j=0;

void removex(char arr[])
{
   

if(arr[0] =='\0')
{
    return;
}

if(arr[0]!='x')
{
    
    removex(arr+1);

}
else
{
 int i=1;
 for(;arr[i]!='\0';i++)
 {
     arr[i-1]=arr[i];
 }
 arr[i-1]='\0';
 removex(arr);
 
}
}

int main()
{
char arr[100];
cin>>arr;
removex(arr);
cout<<arr;
return 0;
}