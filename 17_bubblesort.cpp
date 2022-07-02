#include<iostream>

using namespace std;

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void bubblesort(int arr[],int size){
	int i,j,temp;
	int isSorted;
	for(i=0;i<size-1;i++){     //for number of pass=size-1
	
	cout<<"Working on pass "<<i+1<<endl;
	
	isSorted=1;
		for(j=0;j<size-1-i;j++){    //for comparisons in each pass
			if(arr[j]>arr[j+1]){    //for ascending sorting  , for descending sorting use <
				temp=arr[j];        //swapping code
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				isSorted=0;
			}
		}
		if(isSorted)
		return;
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
	display(arr,size);
	bubblesort(arr,size);
	display(arr,size);
	
	
	
	return 0;
	
}
