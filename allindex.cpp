#include<iostream>
using namespace std;


int allIndexes(int input[], int size, int x, int output[]) {
    if(size == 0){
        return 0;
    }
	int m = allIndexes(input, size-1, x, output);
    if(input[size - 1] == x){
        output[m] = size-1;
        return m+1;
    }else{
        return m;
    }
}


int main(){
    int n;
    cin >> n;
  
    int input[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int output[n] ;
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    
}