#include<iostream>
#include<map>
#include<iterator>
#include<string>


using namespace std;

int main(){
    
    map<string,int> test;
    map<string,int>::iterator itr;
    
    test["avinesh"] = 24;    
    cout<<test["avinesh"]<<endl;
    return 0;
}
