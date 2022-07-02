#include<iostream>

using namespace std;

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void mergesort(int arr1[],int arr2[],int size1,int size2){
	
	int i,j,k;
	i=j=k=0;
	int size3=size1+size2;
	int arr3[size3];
	
	while(i<size1 && j<size2)
	{
		
			if(arr1[i]<=arr2[j]){
				arr3[k]=arr1[i];
				i++;
				k++;
			}else{
				arr3[k]=arr2[j];
				j++;
				k++;
			}
		
	}
	while(i<size1){
		arr3[k]=arr1[i];
		k++;
		i++;	
	}
	
	while(j<size2){
		arr3[k]=arr1[j];
		k++;
		j++;	
	}
display(arr3,size3);
	
}

int main(){
	int size1,size2;
	
	
	cout<<"Enter number of elements in Array1"<<endl;
	cin>>size1;
	int arr1[size1];
	cout<<"enter array"<<endl;
	for(int i=0;i<size1;i++){
		cin>>arr1[i];
	}
	cout<<"Enter number of elements in Array2"<<endl;
	cin>>size2;
	int arr2[size2];
	cout<<"enter array"<<endl;
	for(int i=0;i<size2;i++){
		cin>>arr2[i];
	}
//	display(arr,size);
	mergesort(arr1,arr2,size1,size2);
//	display(arr,size);
	
	
	
	return 0;
	
}
