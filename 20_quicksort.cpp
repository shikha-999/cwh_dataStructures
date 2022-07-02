#include<iostream>

using namespace std;

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int partition(int arr[],int low,int high){
	int pivot=arr[low];     //pivot has actual value of array  pivot=7 for first ever call
	int i=low+1;
	int j=high;
	int temp;
	
	do{
		while(arr[i]<=pivot){   //to find element greater than pivot
		i++;
	}
	while(arr[j]>pivot){		//to find element less than pivot or equal to pivot
		j--;
	}
	if(i<j){
		//swap
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	display(arr,9);
	}while(i<j);
	
	//swap 
	temp=arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	//and now initially pivot was at low(i.e 0)is now at j, therefore,return j;
	display(arr,9);
	cout<<"***********************************"<<endl;
	return j;
}

void quicksort(int arr[],int low,int high){
	int partitionIndex;						//index of pivot after partition(value of j)
	
	if(low<high){
		partitionIndex=partition(arr,low,high);  //storing value of j(new pivot)
		quicksort(arr,low,partitionIndex-1);  //sort left sub array
		quicksort(arr,partitionIndex+1,high); //sort right sub array
	}

	
}

int main(){
	int size;
	
	
	cout<<"Enter number of elements"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter array"<<endl; 
	for(int i=0;i<size;i++){       // 7, 2, 1, 4, 11
		cin>>arr[i];
	}
	display(arr,size);
	cout<<"-------------------------"<<endl;
	quicksort(arr,0,size-1);
	cout<<"-------------------------"<<endl;
	display(arr,size);
	
	
	
	return 0;
	
}
