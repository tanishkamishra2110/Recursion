#include<iostream>
using namespace std;
int multiplicATION(int m , int n){
    if(n==0){
        return 0;
    }
    int smalloutput = multiplicATION(m,n-1);
    int output = smalloutput+m;
    return output;
}
int main(){
int m;
int n;
cin>>m;
cin>>n;
int res= multiplicATION(m,n);
cout<<res;
return 0;
}