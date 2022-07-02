#include<iostream>
using namespace std;

void display(int arr[], int size1){
    //array traversal
    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void binarySearch(int arr[], int size, int element){
   
    int low=0,mid,high=size-1;
    
    if(size==0){
        cout<<"Array is empty"<<endl;
    }
    else{
        while(low<=high){
            mid=(low+high)/2;    //low+(high-low)/2;
            if(element==arr[mid]){
                cout<<"element found at a["<<mid<<"]"<<endl;
            }
           
             if(element>arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        
    }
}

int main(){
    int arr[]={2,5,8,11,99};
    int element=11;
    int size=sizeof(arr)/sizeof(int);
    display(arr,size);
    binarySearch(arr,size,element);
    
    
    return 0;
}
