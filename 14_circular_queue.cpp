#include<iostream>

using namespace std;

class queue{
	public:
		int size;
		int front;
		int rear;
		int *arr;
};

int isEmpty(queue *q){
	if(q->rear==q->front)
	return 1;
	return 0;
}

int isFull(queue *q){
	if((q->rear+1)%q->size==q->front)
	return 1;
	return 0;
}

void enqueue(queue *q,int val){
	if(!isFull(q)){
		q->rear=(q->rear+1)%q->size;
		q->arr[q->rear]=val;
	}
	else
	{
		cout<<"Queue is Full"<<endl;	
	}
	
}

int dequeue(queue *q){
	int val=-1;
	if(!isEmpty(q)){
		q->front=(q->front+1)%q->size;
		 val=q->arr[q->front];
		return val;
	}
	else
	{
		cout<<"Queue is empty"<<endl;
	}
	
}

int display(queue *q){
	if(!isEmpty(q))
	{
		if(q->rear>=q->front)
		{
			for(int i=q->front+1;i<=q->rear;i++)
			cout<<q->arr[i]<<" "<<i<<":";
		}
		else
		{
			for(int i=q->front+1;i<q->size;i++)
			{
				cout<<q->arr[i]<<" "<<i<<":";
			}
			for(int i=0;i<=q->rear;i++)
			{
				cout<<q->arr[i]<<" "<<i<<":";
			}
			
		}
	
		cout<<"\n______________________________________\n";
	}
	else
	cout<<"Queue is empty"<<endl;
}

int firstValue(queue *q){
	
		//q->front=(q->front+1)%q->size;
		cout<<q->arr[(q->front+1)%q->size]<<endl;
}

int lastValue(queue *q){
	cout<<q->arr[q->rear]<<endl;
}

int main(){
	queue *q=new queue();
	q->size=3;
	q->front=q->rear=0;
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
