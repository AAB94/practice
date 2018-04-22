#include<iostream>
#include<cstdlib>

using namespace std;

struct node{
    int data;
    node *next;
} ;

int main(){
    node *head;
    head = (node *)malloc(sizeof(node));
    head->data = 1;
    head->next = NULL;
    int i=0;
    node *t;
    node *cir;
    t = head;
    for(i=2;i<=5;++i){
    
        t->next = (node *)malloc(sizeof(node));
        t = t->next;
        t->data = i;
        t->next = NULL;
        if(i==3)
            cir = t;
    }
    t->next = cir;

    node *fast=head;
    node *slow=head;
    
    while(fast != NULL && fast->next != NULL && slow!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if( fast == slow){
            break;
        }
    }
    
    cout<<slow->data<<endl;
    return 0;
}
