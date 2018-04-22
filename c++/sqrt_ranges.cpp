#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[] = {3,4,1,4,1};
    int res = (int)sqrt(4);
    int i = 0, j = 0;
    int rang[2]={0};
    for( i = 0; i < 5; ++i){
        for( j = 1; j <= 2; ++j){
            if( arr[i] <= res*j){
                ++rang[j-1];
                break;
            }        
        }
    }
    
    for( i = 0; i < 2; ++i){
        cout<<rang[i]<<endl;
    }
    
    //cout<<res;
    return 0;
}
