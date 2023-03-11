#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
  cout << arr[i] << " ";
  cout << endl;
      
  }
}

void merge(int arr[],int si,int ei,int mid)
{
   int n1=mid-si+1;
   int n2=ei-mid;
   cout<<"start index"<<si<<endl;
   cout<<"end index"<<ei<<endl;
   cout<<"mid"<<mid<<endl;
   cout<<"n1="<<n2<<endl;
   cout<<"n2="<<n2<<endl;
   int a[n1];
   int b[n2];
   
  
   for(int i=0;i<n1;i++)
   {
       a[i]=arr[si+i];
       cout<<"a[i]"<<" "<<a[i]<<" "<<endl;
      
   }
   
   for(int i=0;i<n2;i++)
   {
       b[i]=arr[mid+1+i];
       cout<<"b[i]"<<" "<<b[i]<<" "<<endl;
       
   }
   
   int k=0;
   int i=0;
   int j=0;
   
   int t= n1+n2;
   int c[100];
   while(i<n1 && j<n2)
   {
     
       
       if(a[i]>b[j])
       {
           c[k]=b[j];
           j++;
         
       }
       else
       {
           c[k]=a[i];
           i++;
       }
       k++;
   }
   while(i<n1)
   {
       c[k]=a[i];
       i++;
       k++;
   }
   while(j<n2)
   {
       c[k]=b[j];
       j++;
       k++;
   }
   for(int i=0;i<t;i++)
   {
       arr[si+i]=c[i];
   }
   printArray(c,t);
   cout<<endl;
   
}


void mergesort(int arr[],int si,int ei)
{
   
if(si>=ei)
{
    return;
}
int mid=(si+ei)/2;
mergesort(arr,si,mid);
mergesort(arr,mid+1,ei);
merge(arr,si,ei,mid);

}



int main()
{
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
mergesort(arr,0,n-1);
cout<<"printArray"<<endl;
printArray(arr,n);
return 0;
}