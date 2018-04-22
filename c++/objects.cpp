#include<iostream>
using namespace std;
class Sample{
    public:
        int a;
};
void f(Sample& b){
    b.a = 20;
    cout<<b.a;
}


int main(){
    Sample obj;
    f(obj);
    cout<<obj.a;
    return 0;
}
