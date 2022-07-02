#include<iostream>

using namespace std;

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void selectionsort(int arr[],int size){
	int i,j,minInd,temp;
	for(i=0;i<size-1;i++){			//number of passes for 5 elements i=0,1,2,3   //size=5   // <size-1  0,1,2,3
		minInd=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[minInd]){  //finding minimum value index
				minInd=j; 
			}	
		}	
		//swapping
		temp=arr[i];
		arr[i]=arr[minInd];
		arr[minInd]=temp;
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
	selectionsort(arr,size);
	display(arr,size);
	
	
	
	return 0;
	
}
