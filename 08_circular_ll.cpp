//#include<iostream>
//using namespace std;
// class node{
//     public:
//        int data;
//        node *next;
// };
//
//int traverse(node *head){
//    node *ptr=head;
//    do{
//        cout<<ptr->data<<" ";
//        ptr=ptr->next;
//    }while(ptr!=head);
//    cout<<"\n--------------"<<endl;
//}
//
//int insert_first(node **head,int data){
//    node *ptr=new node();
//    ptr->data=data;
//
//    node *p=*head;
//  
//   
//    while(p->next!=*head){
//        p=p->next;
//    }
//    p->next=ptr;
//    ptr->next=*head;
//    *head=ptr;
//    
//}
//int insertIndex(node **head,int data, int index){
//    node *ptr=new node();
//    node *p=*head;
//    int i=1;
//    while(i!=index-1){
//        p=p->next;
//        i++;
//    }
//    ptr->data=data;
//    ptr->next=p->next;
//    p->next=ptr;
//    
//}
//int insertAfter(node *prev_node, int data){
//    if(prev_node==NULL){
//        cout<<"previous node cant be null"<<endl;
//    }
//    else{
//        node *ptr=new node();
//        ptr->data=data;
//        ptr->next=prev_node->next;
//        prev_node->next=ptr;
//    }
//}
//int insert_end(node **head,int data){
//    node *ptr=new node();
//    ptr->data=data;
//
//    node *p=*head;
//  
//   
//    while(p->next!=*head){
//        p=p->next;
//    }
//    p->next=ptr;
//    ptr->next=*head;
//    //*head=ptr;
//    
//}
// int main(){
//     node *head=new node();
//     node *second=new node();
//     node * third=new node();
//
//     head->data=1;
//     head->next=second;
//
//     second->data=2;
//     second->next=third;
//
//     third->data=3;
//     third->next=head;
//
//     traverse(head);
//
//     insert_first(&head,100); //DOUBLE POINTER NECESSARY!!!!!!!!
//     traverse(head);
//     insert_end(&head,99);
//     traverse(head);
//    insertIndex(&head,55,2);
//    traverse(head);
//    insertAfter(second,77);
//    traverse(head);
//     return 0;
// }

//SECOND METHOD WITHOUT PASSING POINTERS IN FUNCTION  using global variables


#include<iostream>
using namespace std;
 class node{
     public:
        int data;
        node *next;
 };
 
node *head=new node();
node *second=new node();
node * third=new node();

int traverse(){
    node *ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
    cout<<"\n--------------"<<endl;
}

int insert_first(int data){
    node *ptr=new node();
    ptr->data=data;

    node *p=head;
  
   
    while(p->next!=head){    //traverse till end
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    
}
int insertIndex(int data, int index){
    node *ptr=new node();
    node *p=head;
    int i=1;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    
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
int insert_end(int data){
    node *ptr=new node();
    ptr->data=data;

    node *p=head;
  
   
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    //*head=ptr;
    
}
 int main(){
     

     head->data=1;
     head->next=second;

     second->data=2;
     second->next=third;

     third->data=3;
     third->next=head;

     traverse();

     insert_first(100); //DOUBLE POINTER NECESSARY!!!!!!!!
     traverse();
     insert_end(99);
     traverse();
    insertIndex(55,2);
    traverse();
    insertAfter(second,77);
    traverse();
     return 0;
 }
