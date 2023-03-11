#include<iostream>
using namespace std;


int countdigits(int n ){
    static int res =0;
    if(n==0){
        return 1;
    }
    res = res+(n%10);
    int p = countdigits(n/10);
    return res;
}
int main(){
int n;
cin>>n;

int result = countdigits(n);
cout<<result<<endl;
return 0;
}