//THIS CODE IS SECOND METHOD - WITHOUT PASSING POINTERS IN FUNCTIONS using global variables

#include<iostream>
//#include<cstdio>
#include<cstdlib>

using namespace std;



class queue{
	
	public:
		int data;
		queue *next;

};
queue *front=NULL;
queue *rear=NULL;

int display(){
	if(front!=NULL){
		queue *ptr=front;
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	
	}
	else
	cout<<"Queue is empty"<<endl;
}

int enqueue(int value){
	queue *ptr=new queue();
	if(ptr!=NULL){
		ptr->data=value;
		ptr->next=NULL;
		if(front==NULL){
			rear=front=ptr;
		}
		else{
			rear->next=ptr;
			rear=ptr;
		}	
	}
	else
	cout<<" Queue is full"<<endl;
}

int dequeue(){
	if(front!=NULL){
		queue *ptr=front;
		front=front->next;
		int val=ptr->data;
		free(ptr);
		return val;
		
	}
	cout<<" Queue is empty"<<endl;
	
}

int queueTop(){
	cout<<"Top element is "<<front->data;
}

int queueBottom(){
	cout<<"Bottom element is "<<rear->data;
}

int main(){


int opt,val,d;
	
	do{
			cout<<"\n_____________________________________"<<endl;
		cout<<"1.enqueue\n2.dequeue\n3.display\n4.first value\n5.last value\n6.exit"<<endl;
		cin>>opt;
		switch(opt){
			case 1:
				{
				cout<<"enter value to enqueue"<<endl;
				cin>>val;
				enqueue(val);
				display();
				break;
				}
			
			case 2:
				{
				int d=dequeue();
				cout<<d<<" is removed"<<endl;
				display();
				break;
				}
				
			case 3:
				{
				display();
				break;
				}
				
			case 4:
				queueTop();
				break;
				
			case 5:
				queueBottom();
				break;
				
			case 6: cout<<"exiting"<<endl;
			exit(1);
		}
		
	}while(1);
	
	return 0;
}
