#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct interval{
    int a;
    int b;
    interval(){
        this->a = 0;
        this->b = 0;
    }
    interval(int a, int b){
        this->a = a;
        this->b = b;
    }
};
/*
    Not using const gives error in Online Compilers.
*/
bool custom_sort(const interval &a,const interval &b){
    if(a.a < b.a )
        return true;
    else if(a.a == b.a && a.b > b.b)
        return true;
    return false;
}

int main(){
    int i;
    vector<interval>  arr;
    arr.resize(5);
    interval temp(4,5);
    arr[0] = temp;
    temp.a = 1, temp.b = 2;
    arr[1] = temp;
    temp.a = 1, temp.b = 15;
    arr[2] = temp;
    temp.a = 0, temp.b = 1;
    arr[3] = temp;
    temp.a = 6,temp.b = 7;
    arr[4] = temp;

    sort(arr.begin(),arr.end(),custom_sort);

    for(i=0;i<arr.size();++i){
        cout<<"("<<arr[i].a<<", "<<arr[i].b<<") ";
    }

    cout<<endl;
    return 0;

}
