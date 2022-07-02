#include<iostream>
#include<limits>

using namespace std;

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int maximum(int arr[],int size){
	int max=INT_MIN;
	for(int i=0;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}

void countsort(int arr[],int size){
	int i,j;
	
	int max=maximum(arr,size); 	   //find maximum element in arr[]
	int *count=new int[max+1];     //COUNT ARRRAY //if max is 9 then we have to make array 0 to 9 =10 elements defo, max+1 is used
	//int count[max+1];
	for(i=0;i<max+1;i++){       //initialize array elements to 0
		count[i]=0;
	}
	for(i=0;i<size;i++){       //increment corresponding index in the count array
		count[arr[i]]=count[arr[i]]+1;
	}
	
	i=0;	//counter for count array
	j=0;	//counter for given array
	
	while(i<=max){
		if(count[i]>0){
			arr[j]=i;
			count[i]--;
			j++;
		}
		else{
			i++;
		}
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
	countsort(arr,size);
	display(arr,size);
	
	
	
	return 0;
	
}
