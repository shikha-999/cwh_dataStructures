#include<iostream>

using namespace std;

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertionsort(int arr[],int size){
	int key,j;
	for(int i=1; i<size;i++){   //no of passes 0 to size-1
		key=arr[i];				
		j=i-1;
		
		while(j>=0 && arr[j]>key){
			cout<<"comparisons "<<j<<endl;
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		//display(arr,size);
	}

}

int main(){
	int size;
	
	
	cout<<"Enter number of elements"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter array"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"before ";
	display(arr,size);
	insertionsort(arr,size);
	cout<<"after ";
	display(arr,size);
	
	
	
	return 0;
	
}
