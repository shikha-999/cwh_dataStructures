//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//
//class node
//{
//    public:
//        int data;
//        node *next;
//        
//};
//node *top=NULL;
//int size=-1;
//
//
//int isEmpty(node *top){
//    if(top==NULL)
//        return 1;
//    return 0;
//
//}
//int isFull(){
//    node *s=new node();
//    if(s==NULL)
//        return 1;
//    return 0;
//}
//
//int push(node **top,int value)
//{	
//	if(isFull()!=1){
//	node *ptr=new node();
//	ptr->data=value;
//	ptr->next=*top;
//	*top=ptr;
//	top++;
//	size++;
//	}
//	else
//	cout<<"stack is full"<<cout;
//}
//
//int pop(node **top){
//		if(isEmpty(*top)!=1){
//		
//		node *p=*top;
//		*top=p->next;
//		size--;
//		free(p);		
//		}
//		else
//		cout<<"stack is empty"<<endl;
//}
//int display(node *top){
//
//	if(top==NULL){
//		cout<<"Stack is empty\n";
//	}
//	else
//	{
//		while(top!=NULL){
//		cout<<top->data<<" ";
//		top=top->next;
//		}
//	
//	}
//}
//
//int stackTop(node *top){
//	cout<<top->data;
//}
//
//int stackBottom(node *top){
//	int i=0;
//	while(i<size&&top!=NULL){
//		top=top->next;
//		i++;
//		}
//		cout<<top->data;
//}
//int main()
//{
//    int a;
//    int val;
//
//    do{
//    		cout<<"\n____________________________"<<endl;
//        cout<<"\nChoose\n1.Display\n2.Push\n3.Pop\n4.Stack Top\n5.Stack Bottom\n0.END\n";
//        cin>>a;
//        switch(a){
//            case 1:
//            {	
//               	display(top);
//                break;
//            }
//            case 2:{
//            	cout<<"Enter value to be pushed"<<endl;
//            	cin>>val;
//                push(&top,val);
//				
//                display(top);
//                break;
//
//            }
//            case 3:{
//                pop(&top);
//                display(top);
//                break;
//            }
//            case 4:{
//                stackTop(top);
//                
//                break;
//            }
//
//			 case 5:{
//                stackBottom(top);
//                
//                break;
//            }
//            
//            case 0:
//            cout<<"exiting"<<endl;
//            exit(1);
//        }
//
//    }while(a!=0);
//
//    
//    
//    
//    return 0;
//}


//SECOND METHOD using global variables

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class node
{
    public:
        int data;
        node *next;
        
};
node *top=NULL;
int size=-1;


int isEmpty(){
    if(top==NULL)
        return 1;
    return 0;

}
int isFull(){
    node *s=new node();
    if(s==NULL)
        return 1;
    return 0;
}

int push(int value)
{	
	if(isFull()!=1){
	node *ptr=new node();
	ptr->data=value;
	ptr->next=top;
	top=ptr;
	top+1;
	size+1;
	}
	else
	cout<<"stack is full"<<cout;
}

int pop(){
		if(isEmpty()!=1){
		
		node *p=top;
		top=p->next;
		size-1;
		free(p);		
		}
		else
		cout<<"stack is empty"<<endl;
}
int display(){

	if(top==NULL){
		cout<<"Stack is empty\n";
	}
	else
	{
		node *ptr=top;
		while(ptr!=NULL){
		
		cout<<ptr->data<<" ";
		ptr=ptr->next;
		}
	
	}
}

int stackTop(){
	cout<<top->data;
}

int stackBottom(){
	int i=0;
	while(i<size&&top!=NULL){
		top=top->next;
		i++;
		}
		cout<<top->data;
}
int main()
{
    int a;
    int val;

    do{
    		cout<<"\n____________________________"<<endl;
        cout<<"\nChoose\n1.Display\n2.Push\n3.Pop\n4.Stack Top\n5.Stack Bottom\n0.END\n";
        cin>>a;
        switch(a){
            case 1:
            {	
               	display();
                break;
            }
            case 2:{
            	cout<<"Enter value to be pushed"<<endl;
            	cin>>val;
                push(val);
				
                display();
                break;

            }
            case 3:{
                pop();
                display();
                break;
            }
            case 4:{
                stackTop();
                
                break;
            }

			 case 5:{
                stackBottom();
                
                break;
            }
            
            case 0:
            cout<<"exiting"<<endl;
            exit(1);
        }

    }while(a!=0);

    
    
    
    return 0;
}
