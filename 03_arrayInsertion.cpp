#include<iostream>
#include<array>
using namespace std;

void display(int arr[], int size1){
    //array traversal
    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int insert(int arr[],int size,int total,int element,int index){
    if(size>=total)
        return -1;
    else{
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        
        return 1;
    }
}

int main(){
    int arr[100]={2,5,8,1,9};
    //array<int,5> arr{ 1, 2, 3, 4, 5 };
    int element=10,index=3,size=5;
    display(arr,size);

    insert(arr,size,100,element,index);
    size+=1;
    display(arr,size);
    

    return 0;
}