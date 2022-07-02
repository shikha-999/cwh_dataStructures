#include<iostream>
using namespace std;

class node{
    private:
        int data;
        node *next;
    public:
       node();
      node(int);
      void display();

};
node::node(){
    data=-1;
    next=NULL;
}

node::node(int x){
    data=x;
   next=NULL;
}

void node::display(){
    cout<<data<<endl;
    cout<<next<<endl;

}

int main(){

    cout<<"size of node"<<sizeof(node);
 node node1;
   
   int x;
   cin>>x;
   node node2(x);

    node1.display();
   node2.display();

    return 0;

}
