#include<iostream>
#include<vector>

using namespace std;

struct sample{
    int a;
    sample():a(0){}
};

int main(){
    vector<sample> v;
    v.push_back(sample ()); 
    cout<<v[0].a<<endl;
    v.resize(3);
    v[1] = sample (); 
    v[1].a  =20;
    cout<<" Final "<<v[0].a<<" "<<v[1].a<<endl;
    return 0;
}
