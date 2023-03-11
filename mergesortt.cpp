#include<iostream>
using namespace std; 

void merge(int arr[],int s, int e,int m){
int n1,n2;
n1= m-s+1;
n2=e-m;
cout<<n2<<endl;
int a[n1];
int b[n2];

for(int i=0;i<n1;i++){
    a[i]=arr[s+i];
}
for(int j=0;j<n2;j++){
    b[j]=arr[m+1+j];
}
int i=0,j=0;
int k=s;
while(i<n1&&j<n2){
    if(a[i]<=b[j]){
        arr[k] = a[i];
        i++;
    }
    else{
        arr[k]=b[j];
        j++;
    }
    k++;
}
while (i < n1) {
    arr[k] = a[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = b[j];
    j++;
    k++;
  }
}





void mergesort(int arr[],int s,int e){
if(s>=e){
return;
}
int m = (s+e)/2;
mergesort (arr,s,m);
mergesort (arr,m+1,e);
merge(arr,s,e,m);
}


int main(){
 int arr[7]   = {5,2,7,4,1,6,3};
 int s = 0;
 int e = 6;
 mergesort(arr,s,e);
    
 for(int i = 0 ;i<7;i++){
    cout<<arr[i];
 }   
    
    return 0;
    

}