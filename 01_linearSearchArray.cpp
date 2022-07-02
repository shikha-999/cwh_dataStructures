#include<iostream>
using namespace std;

void display(int arr[], int size1){
    //array traversal
    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void search(int arr[], int size, int element){
    int i=0;
    if(size==0){
        cout<<"Array is empty"<<endl;
    }
    else{
        for(i=0;i<size;i++){
            if(arr[i]==element){
                cout<<"element found at a["<<i<<"]"<<endl;
                exit(1);
            }
        }
        cout<<"Element not found"<<endl;
        
    }
}

int main(){
    int arr[]={2,5,8,1,9};
    int element=9;
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    search(arr,size,element);
    
    
    return 0;
}