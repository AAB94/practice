#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool custom_sort(const string n1,const string n2){
    int i=0,j=0;
    while(i < n1.size() && j < n2.size()){
        if(n1[i] == n2[j] ){
            ++i;
            ++j;
            continue;
        }
        else if(n1[i] > n2[j]){
            return true;
        }
        else if(n1[i] < n2[j])
            return false;
    }    
    
    long long p1 = stoi(n1+n2);
    long long p2 = stoi(n2+n1);
    if(p1 > p2)
        return true;
    else 
        return false;
    
}

int main(){
    vector<string> v(6);
    v[0] = "170";
    v[1] = "1";
    v[2] = "124";
    v[3] = "139";
    v[4] = "116";
    v[5] =  "192";
    string arr[]={"500","5","5074","59"};
//    sort(arr,arr+4,custom_sort);
    
    sort(v.begin(),v.end(),custom_sort);
    for(int i=0;i<6;++i)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;    
}
