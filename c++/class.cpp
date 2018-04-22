#include<iostream>

using namespace std;

class MyClass{
    
    int age;    

    public:
    
    void set_age(int age){
        this->age = age;
    }

    int get_age(){
        return age;
    }
};

int main(){
    MyClass obj;
    obj.set_age(50);
    cout<<obj.get_age()<<endl;
    return 0;
}
