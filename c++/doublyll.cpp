#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    char data;
    node *next;
    node *prev;
};

node *head;
node *first, *last;

void add(char data){
    node *t = (node *)malloc(sizeof(node));
    t->next = NULL;
    t->prev = NULL;
    t->data = data;
    if(head == NULL){
        head = t;
        first = head;
        last = head;
    }
    else{
        last->next = t;
        t->prev = last;
        last = t;
        cout<<last->data<<endl;
    }    
}

void rotate(int n){
    
    if(first == last)
        return;

    while( n > 0 ){
        --n;
        last->next = first;
        first = first->next;
        first->prev = NULL;
        last->next->prev = last;
        last = last->next;
        last->next = NULL;
    }
    head = first;
}

void display(){
    node *t = head;
    while(t!=NULL){
        cout<<t->data<<((t->next == NULL)? "" : "->");
        t = t->next;
    }
    cout<<endl;
}

int main(){
    
    add('a');
    add('b');
    add('c');
    add('d');
    add('e');
    display(); 
    rotate(3);
    display();           
    return 0;
}
