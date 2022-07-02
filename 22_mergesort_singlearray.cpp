#include<iostream>

using namespace std;

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void merge(int arr[],int low,int mid,int high){
	
int i,j,k;
i=low;
j=mid+1;
k=low;

int arr2[high];
while(i<=mid && j<=high){
	if(arr[i]<arr[j]){
		arr2[k]=arr[i];
		k++;
		i++;
	}
	else{
		arr2[k]=arr[j];
		j++;
		k++;
	}
}
while(i<=mid){
	arr2[k]=arr[i];
	k++;
	i++;
}
while(j<=high){
	arr2[k]=arr[j];
	k++;
	j++; 
}
for(int i=low;i<=high;i++){
	arr[i]=arr2[i];
}
	
}

void mergesort(int arr[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
	 
}

int main(){
	int size;
	
	cout<<"Enter number of elements in array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter array"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
//	display(arr,size);
	mergesort(arr,0,size-1);
 	display(arr,size);

	
	
	return 0;
	
}
