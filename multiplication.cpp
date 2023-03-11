#include<iostream>
using namespace std;

int multiplication(int m, int n){
    if(n==0){
        return 0;
    }
    int ans = multiplication(m,n-1);
    ans = ans+m;
    return ans;
}



int main(){
int m,n;
cin>>m>>n;

int res= multiplication(m,n);
cout<<res<<endl;
return 0;
}