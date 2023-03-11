#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool pallindrome(char arr[], int i, int n){

if(i>n){
    return 1;
}

if(arr[i]==arr[n]){
    pallindrome(arr,i+1,n-1);
}
else{
    return 0;
}}

int main(){
char arr[100];
cin>>arr;
int len= strlen(arr);

int i =0;
cout<<pallindrome(arr,i,len-1);
return 0;
}