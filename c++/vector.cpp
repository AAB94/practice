#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1000);
    v.push_back(20);
    v.push_back(30);
    //v.pop_back(); 
    //v.pop_back();
    //cout<<v[v.size()-1]<<endl;
    
    vector< vector<int> > arr;
    arr.push_back(vector<int> ());
    arr[0].push_back(20);
    arr[0].push_back(45);
    //cout<<arr[0][1]<<endl;
    //cout<<arr[0].size()<<endl;
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); ++i){
        cout<<v[i]<<" ";    
    }
    cout<<endl;
    // array of vectors
    vector<int> varr[2];
    varr[1].push_back(100);
    cout<<"Array of Vector: "<<varr[1][0]<<endl;
    vector<int> copy_vector(v);
    for(int i=0;i < copy_vector.size();++i){
        cout<<copy_vector[i]<<endl;
    }
    
    return 0;
}
