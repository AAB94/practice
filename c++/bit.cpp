#include<iostream>
#include<vector>
using namespace std;

int main(){
     int i,xor1=0,xor2=1;
    int a[]=  {1,2,4,4,4};
    vector<int> A(a,a+5);
    for(i=0;i<A.size();i++)
    {
        xor1^=A[i];
    }
    int n=A.size();
    for(i=2;i<=(n-1);i++)
    {
        xor2^=i;
    }
    
    int repeat;
    repeat=xor1^xor2;
    
    cout<<repeat<<endl;
    
    return 0;
}
