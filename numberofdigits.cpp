#include<iostream>
using namespace std;

int finddigits(int n){
    if(n==0){
        return 0;
    }
    int so = finddigits(n/10);
    return so+1;
}

int main(){
int num;
cin>>num;
int res = finddigits(num);
cout<<res;
return 0;
}