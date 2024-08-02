#include<iostream>
using namespace std;
void doubling(int arr[],int size,int index){
    if(index>=size){
        return;
    }
    arr[index]=arr[index]*2;
    
    doubling(arr,size,index+1);
}
void prinarray(int arr[],int size){
    if(size==0){
        return;
    }
    cout<<*arr<<" ";
    prinarray(arr+1,size-1); 
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int index=0;
    prinarray(arr,size);
    cout<<endl;
    doubling(arr,size,index);
    prinarray(arr,size);
    
}
