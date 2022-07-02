#include<iostream>

using namespace std;

class queue{
	public:
		int size;
		int front;
		int back;
		int *arr;
};

int isEmpty(queue *q){
	if(q->front==q->back)
	return 1;
	return 0;
}

int isFull(queue *q){
	if(q->back==q->size-1)
	return 1;
	return 0;
}

void enqueue(queue *q,int val){
	if(!isFull(q)){
		q->back++;
		q->arr[q->back]=val;
		
	}
	else
	cout<<"Queue is Full"<<endl;
}

int dequeue(queue *q){
	if(!isEmpty(q)){
		q->front++;
		return q->arr[q->front];
	}
	else
	cout<<"Queue is empty"<<endl;
}

int display(queue *q){
	if(!isEmpty(q)){
		for(int i=q->front+1;i<=q->back;i++){
			cout<<q->arr[i]<<" ";
		}
		cout<<"\n______________________________________\n";
	}
	else
	cout<<"Queue is empty"<<endl;
}

int firstValue(queue *q){
	cout<<q->arr[q->front+1]<<endl;
}

int lastValue(queue *q){
	cout<<q->arr[q->back]<<endl;
}

int main(){
	queue *q=new queue();
	q->size=100;
	q->front=q->back=-1;
	q->arr=new int;
	
	int opt,val,d;
	
	do{
		cout<<"\n1.enqueue\n2.dequeue\n3.display\n4.first value\n5.last value\n6.exit"<<endl;
		cin>>opt;
		switch(opt){
			case 1:
				{
				cout<<"enter value to enqueue"<<endl;
				cin>>val;
				enqueue(q,val);
				display(q);
				break;
				}
			
			case 2:
				{
				int d=dequeue(q);
				cout<<d<<" is removed"<<endl;
				display(q);
				break;
				}
				
			case 3:
				{
				display(q);
				break;
				}
				
			case 4:
				firstValue(q);
				break;
				
			case 5:
				lastValue(q);
				break;
				
			case 6: cout<<"exiting"<<endl;
			exit(1);
		}
		
	}while(1);
	
	return 0;
}
