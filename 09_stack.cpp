//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//
//
//class stack{
//    public:
//    int top;
//    int size;
//    int *arr;
//
//
//};
//
//int isEmpty(stack *ptr){
// if(ptr->top == -1){
//     return 1;
// }
// return 0;
//}
//
//int isFull(stack *ptr){
//    if(ptr->top==ptr->size-1){    //size=3, 0 1 2 therfore, size-1;
//        return 1;
//    }
//    return 0;
//}
//int display(stack *ptr){
//    if(ptr->top==-1){
//        cout<<"stack is empty"<<endl;
//    }
//    else{
//        for(int i=0;i<=ptr->top;i++){
//            cout<<ptr->arr[i]<<" ";
//        }
//        cout<<endl;
//    }
//}
//
//int push(stack *ptr,int value){
//  
//    if(isFull(ptr)){
//        cout<<"Stack Overflow"<<endl;
//    }
//    else{
//        ptr->top++;
//        ptr->arr[ptr->top]=value;
//        //cout<<"done";
//    }
//
//}
//int pop(stack *ptr){
//    if(isEmpty(ptr)){
//        cout<<"Stack is already empty"<<endl;
//    }
//    else{
//        int val=ptr->arr[ptr->top]; //deleted value
//        ptr->top--;
//        return val;
//    }
//
//}
//
//int peek(stack *ptr,int p){
//    int arrInd=ptr->top-p+1;
//    if(arrInd<0){
//        cout<<"position not valid"<<endl;
//        return -1;
//    }else{
//        return arrInd;
//    }
//
//}
//int main(){
//    
//    stack *s=new stack();
//    //stack *s;
//    int a,val;
//    s->top=-1;
//    s->size=3;
//    s->arr=new int;
//    
//    do{
//        cout<<"Choose\n1.Display\n2.Push\n3.Pop\n4.peek\n0.END\n";
//        cin>>a;
//        switch(a){
//            case 1:
//            {
//                display(s);
//                break;
//            }
//            case 2:{
//                cout<<"enter value"<<endl;
//                cin>>val;
//                push(s,val);
//                display(s);
//                break;
//
//            }
//            case 3:{
//                val=pop(s);
//                cout<<val<<" is deleted"<<endl;
//                display(s);
//                break;
//            }
//
//            case 4:{
//                for(int i=0;i<=s->top;i++){
//            cout<<"index at position "<<i<<" "<<peek(s,i)<<endl;
//            break;
//        	}
//            }
//            case 0:
//            cout<<"exiting"<<endl;
//            exit(1);
//        }
//
//    }while(a!=0);
//
//    
//    
//    
//    return 0;
//}

//SECOND METHOD WITHOUT PASSING POINTERS IN FUNCTION using global variables

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;


class stack{
    public:
    int top;
    int size;
    int *arr;


};

stack *s=new stack();

int isEmpty(){
 if(s->top == -1){
     return 1;
 }
 return 0;
}

int isFull(){
    if(s->top==s->size-1){    //size=3, 0 1 2 therfore, size-1;
        return 1;
    }
    return 0;
}
int display(){
    if(s->top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        for(int i=0;i<=s->top;i++){
            cout<<s->arr[i]<<" ";
        }
        cout<<endl;
    }
}

int push(int value){
  
    if(isFull()){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        s->top++;								//USING top++   NOT TOP+1 else bug
        s->arr[s->top]=value;
        //cout<<"done";
    }

}
int pop(){
    if(isEmpty()){
        cout<<"Stack is already empty"<<endl;
    }
    else{
        int val=s->arr[s->top]; //deleted value
        s->top--;                                //USING top--   NOT TOP-1 else bug
        return val;
    }

}

int peek(int p){
    int arrInd=s->top-p+1;
    if(arrInd<0){
        cout<<"position not valid"<<endl;
        return -1;
    }else{
        return arrInd;
    }

}
int main(){
    
    
    //stack *s;
    int a,val;
    s->top=-1;
    s->size=3;
    s->arr=new int;
    
    do{
        cout<<"Choose\n1.Display\n2.Push\n3.Pop\n4.peek\n0.END\n";
        cin>>a;
        switch(a){
            case 1:
            {
                display();
                break;
            }
            case 2:{
                cout<<"enter value"<<endl;
                cin>>val;
                push(val);
                display();
                break;

            }
            case 3:{
                val=pop();
                cout<<val<<" is deleted"<<endl;
                display();
                break;
            }

            case 4:{
                for(int i=0;i<=s->top;i++){
            cout<<"index at position "<<i<<" "<<peek(i)<<endl;
            break;
        }
            }
            case 0:
            cout<<"exiting"<<endl;
            exit(1);
        }

    }while(a!=0);

    
    
    
    return 0;
}
