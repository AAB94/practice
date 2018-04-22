#include<string>
#include<iostream>
#include<sstream>

using namespace std;

int main(){

    /*
        Comma separate string
    */
    stringstream ss;
    string s1 = "Benjamin";
    int age = 24;
    ss << s1;
    ss << ",";
    ss << age;
    cout<<ss.str();
    return 0;
}
