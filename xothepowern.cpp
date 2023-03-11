#include <iostream>

using namespace std;

int answer(int x, int n)
{
    if (n==0)
    {
        return 1;
    }
    int smallans=answer(x,n-1);
    cout<<"smallans is "<<smallans<<endl;
    cout<<"n is"<<n<<endl;
    int output=smallans*x;
    cout<<"output is"<<output<<endl;
    return output;
    
}

int main()
{
    int x,n;
    cin>>x>>n;
    int ans=answer(x,n);
    cout<<ans;
    return 0;
}