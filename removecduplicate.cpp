#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int j=0;

void removeduplicate(char arr[])
{if(arr[0] =='\0')
{
return;
}
if(arr[0]!=arr[1])
{removeduplicate(arr+1);
}
else
{int i=1;
for(;arr[i]!='\0';i++)
{arr[i-1]=arr[i];
}
arr[i-1]='\0';
removeduplicate(arr);
}
}

int main()
{
char arr[100];
cin>>arr;
removeduplicate(arr);
cout<<arr;
return 0;
}