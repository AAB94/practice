#include<iostream>
#include<cstdio>
#include<sstream>
#include<string>
#include<vector>
#include<map>

using namespace std;

vector<string> stack;
map<string,string> query;


void set(string &tag_att,string &tag_val){
    int i = 0;
    string temp = "";
    
    
    if(stack.size() > 1){
        int stack_len = stack.size();
        for( i = 0; i < stack_len; ++i ){
            temp = temp + stack[i] + ((i+1) < stack_len? ".": "");
        }
        temp = temp + "~" + tag_att;
        query[temp] = tag_val; 
    }
    else{
        temp = stack[0] + "~" + tag_att;
        query[temp] = tag_val;
    }
}


void parse(string line){

    string word;
    string tag_name;
    string tag_att;
    string tag_val;
    stringstream ss(line);
      
    ss >> word;
    
    if( word[0] == '<' && word[word.size()-1] != '>'){

        tag_name = word.substr(1, word.size()-1);
        
        stack.push_back(tag_name);
        
        while( !ss.eof() ){
            ss >> word;
            tag_att = word;
            ss >> word;
            ss >> word;                    
            if( word[word.size()-1] == '>' ){
                tag_val = word.substr(1,word.size()-3);
                set(tag_att, tag_val);
            }
            
            else{
                word.erase(0,1);
                word.erase(word.size()-1);
                tag_val = word;
                set(tag_att, tag_val);
            }           
        }        
    }
    
    else if( word[0] == '<' && word[1] != '/' && word[word.size()-1] == '>'){
        tag_name = word.substr(1,word.size() - 2);
        stack.push_back(tag_name);
    }
    
    else if( word[0] == '<' && word[1] == '/' ){
        stack.pop_back();
    } 
    
}

int main(){
    string line;
    
    int n,q,i=0;
    
    cin>>n>>q;
    getchar();
    while( i < n ){
        ++i;
        getline(cin, line, '\n');
        parse(line);            
    }
    
    for( i = 0; i < q; ++i){
        getline(cin, line, '\n');
        if( query.count(line) == 1){
            cout<<query[line]<<endl;
        }
        else
            cout<<"Not Found!"<<endl;
    }
    return 0;
}
