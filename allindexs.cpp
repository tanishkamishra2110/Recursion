#include<iostream>
using namespace std;




int helper(int input[],int size,int i, int m ,int x, int output[]){
    if(size==0){
        return 0;
    }
    
    int count=0;
    int a=0;
    if(input[i] == x){
        count++;
    
        output[m] = i;
       
        i++;
        m++;
        a =helper(input,size-1,i,m,x,output);
        
    }

    else{
        
          i++;
        a = helper(input,size-1,i,m,x,output);
        cout<<a<<" a is "<<endl;
      
    }
    
    count +=a;
    cout<<count<<" c is "<<endl;
   return count; 

}
int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    int ans = helper(input,size,0,0,x,output);
    cout<<" ans is "<<ans<<endl;
    return ans;

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

    int output[n];

    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    

return 0;
}