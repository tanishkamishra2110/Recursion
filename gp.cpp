#include<iostream>
#include <bits/stdc++.h>
using namespace std;
float gp(int k){
 if(k==0){
     return 1;
 }
 float r=pow(2,k);
 cout<<"r is "<<r<<endl;
 float sum = (1/r);
 cout<<"sum is "<<sum<<endl;
 float ans= gp(k-1);
 cout<<"ans is "<<ans<<endl;
 return ans+sum;}
 

int main(){
int k;
cin>>k;
float res= gp(k);
cout<<res<<endl;
return 0;
}