#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;

};

void traverse(node *t){
while(t!=NULL){
    cout<<t->data<<" ";
    t=t->next;
    cout<<endl;
}
cout<<"-------------------------"<<endl;
}


int insert_beg(node **head, int data){
    node *ptr=new node();
    ptr->next=*head;
    ptr->data=data;
    *head=ptr;
}

int insertAfter(node *prev_node, int data){
    if(prev_node==NULL){
        cout<<"previous node cant be null"<<endl;
    }
    else{
        node *ptr=new node();
        ptr->data=data;
        ptr->next=prev_node->next;
        prev_node->next=ptr;
    }
}

int insertIndex(node **head,int data, int index){
    node *ptr=new node();
    node *p=*head;
    int i=1;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    
}

int insertEnd(node **head,int data)
{
    node *ptr=new node();
    node *p=*head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
}
int main(){
    node *head=new node();
     node *second=new node();
      node *third=new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    traverse(head);
     
    insert_beg(&head,100);
     traverse(head);
      
     insertAfter(third,47);
     traverse(head);

     insertIndex(&head,99,2);
     traverse(head);

     insertEnd(&head,1000);
     traverse(head);
    return 0;
}