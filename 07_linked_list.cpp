//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//
//class node{
//public:
//    int data;
//    node *next;
//
//};
//
//int create(node *head,int data){
//    
//    head->data=data;
//    head->next=NULL;
//}
//int insert_beg(node **head,int data){
//    node *ptr=new node();
//    ptr->data=data;
//    ptr->next=*head;
//    *head=ptr;
//}
//
//int insert_after(node **head,int data,int index){
//    node *ptr=new node();
//    node *p=*head;
//    int i=0;
//    while(i!=index-1){
//        p=p->next;
//        i++;
//    }
//    ptr->data=data;
//    ptr->next=p->next;
//    p->next=ptr;
//}
//
//int insert_end(node **head,int data){
//    node *ptr=new node();
//    node *p=*head;
//    while(p->next!=NULL){
//        p=p->next;
//    }
//    ptr->data=data;
//    ptr->next=NULL;
//    p->next=ptr;
//}
//
//int delete_beg(node **head){
//    node *ptr=*head;
//    *head=ptr->next;
//    free(ptr);
//}
//
//int delete_index(node **head,int index){
//    node *p=*head;  //p--q
//    node *q=*head;
//    int i=0;
//    q=q->next;
//    for(i=1;i<index-1;i++){
//        p=p->next;
//        q=q->next;
//        
//    }
//    
//    p->next=q->next;
//    free(q);
//}
//
//int delete_end(node **head){ 
//    node *p=*head;      //p--q
//    node *q=*head;
//    q=q->next;
//    while(q->next!=NULL){
//        p=p->next;
//        q=q->next;
//    }
//    p->next=NULL;
//    free(q);
//}
//
//int delete_value(node **head,int value){
//    node *p=*head;
//    node *q=*head;
//    q=q->next;
//    while(q->data!=value&&q->next!=NULL){
//        p=p->next;
//        q=q->next;
//    }
//    if(q->data==value){
//        p->next=q->next;
//        free(q); 
//    }
//    else
//    cout<<"No such value";
//}
//void traverse(node *t){
//    while(t!=NULL){
//        cout<<t->data<<" ";
//        t=t->next;
//        
//    }
//    cout<<endl<<"--------------------------------------------------"<<endl;
//}
//int main(){
//      int opt;
//      int data,index,value;
//      node *head=new node();
//   do{
//       cout<<"choose"<<endl<<"1.create\n2.add at beginnig\n3.add after a index\n4.add at end\n5.delete in beginning\n6.delete indeX\n7.delete end\n8.delete value\n9.END"<<endl;
//  
//    cin>>opt;
//    switch(opt){
//        case 1:
//            {
//            cout<<"Enter data";
//            cin>>data;
//            create(head,data);
//            traverse(head);
//            break;
//            }
//         case 2:
//            {
//             cout<<"Enter data";
//             cin>>data;
//             insert_beg(&head,data);
//             traverse(head);
//             break;
//            }
//        case 3:
//            {
//             cout<<"Enter data";
//             cin>>data;
//             cout<<"Enter index";
//             cin>>index;
//             insert_after(&head,data,index);
//             traverse(head);
//             break;
//            }
//            case 4:
//            {
//             cout<<"Enter data";
//             cin>>data;
//             
//             insert_end(&head,data);
//             traverse(head);
//             break;
//            }
//            case 5:
//            {
//             delete_beg(&head);
//             traverse(head);
//             break;
//            }
//
//            case 6:
//            {   cout<<"Index";
//                cin>>index;
//                delete_index(&head,index);
//                traverse(head);
//                break;
//            }
//
//            case 7:
//            {  
//                delete_end(&head);
//                traverse(head);
//                break;
//            }
//
//            case 8:
//            {   
//                cout<<"Enter value";
//                cin>>value;
//                delete_value(&head,value);
//                traverse(head);
//                break;
//            }
//            case 9:{
//                cout<<"EXITING"<<endl;
//                exit(1);
//            }
//
//    }
//       
//    }while(1);
//     return 0;
//}
//


//SECOND METHOD without passing pointers in function using global variables


#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class node{
public:
    int data;
    node *next;

};
node *head=new node();
int create(int data){
    
    head->data=data;
    head->next=NULL;
}
int insert_beg(int data){
    node *ptr=new node();
    ptr->data=data;
    ptr->next=head;
    head=ptr;
}

int insert_after(int data,int index){
    node *ptr=new node();
    node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
}

int insert_end(int data){
    node *ptr=new node();
    node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
}

int delete_beg(){
    node *ptr=head;
    head=ptr->next;
    free(ptr);
}

int delete_index(int index){
    node *p=head;  //p--q
    node *q=head;
    int i=0;
    q=q->next;
    for(i=1;i<index-1;i++){
        p=p->next;     //index-1
        q=q->next;		//index
        
    }
    
    p->next=q->next;
    free(q);
}

int delete_end(){ 
    node *p=head;      //p--q
    node *q=head;
    q=q->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}

int delete_value(int value){ 
    node *p=head;
    node *q=head;
    q=q->next;
    while(q->data!=value&&q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q); 
    }
    else
    cout<<"No such value";
}
void traverse(){
	node *t=head;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
        
    }
    cout<<endl<<"--------------------------------------------------"<<endl;
}
int main(){
      int opt;
      int data,index,value;
      
   do{
       cout<<"choose"<<endl<<"1.create\n2.add at beginnig\n3.add after a index\n4.add at end\n5.delete in beginning\n6.delete indeX\n7.delete end\n8.delete value\n9.END"<<endl;
  
    cin>>opt;
    switch(opt){
        case 1:
            {
            cout<<"Enter data";
            cin>>data;
            create(data);
            traverse();
            break;
            }
         case 2:
            {
             cout<<"Enter data";
             cin>>data;
             insert_beg(data);
             traverse();
             break;
            }
        case 3:
            {
             cout<<"Enter data";
             cin>>data;
             cout<<"Enter index";
             cin>>index;
             insert_after(data,index);
             traverse();
             break;
            }
            case 4:
            {
             cout<<"Enter data";
             cin>>data;
             
             insert_end(data);
             traverse();
             break;
            }
            case 5:
            {
             delete_beg();
             traverse();
             break;
            }

            case 6:
            {   cout<<"Index";
                cin>>index;
                delete_index(index);
                traverse();
                break;
            }

            case 7:
            {  
                delete_end();
                traverse();
                break;
            }

            case 8:
            {   
                cout<<"Enter value";
                cin>>value;
                delete_value(value);
                traverse();
                break;
            }
            case 9:{
                cout<<"EXITING"<<endl;
                exit(1);
            }

    }
       
    }while(1);
     return 0;
}



