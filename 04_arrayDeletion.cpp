#include<iostream>
using namespace std;

void display(int arr[], int size1){
    //array traversal
    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deletion(int arr[], int size, int total, int index){
    int i=0;
    if(size==0 || size>total){
        
    }
    else{
        for(int i=index;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        
    }
}

int main(){
    int arr[100]={2,5,8,1,9};
    int index=1,size=5;
    display(arr,size);
    deletion(arr,size,100,index);
    size-=1;
    display(arr,size);
    return 0;
}