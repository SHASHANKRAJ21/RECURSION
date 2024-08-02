#include<iostream>
using namespace std;
void prinarray(int arr[],int n){
    if(n==0){
        return;
    }
    cout<<*arr<<" ";
    prinarray(arr+1,n-1); 
}
int searching(int arr[],int size,int index,int target){
    if(index>=size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    int finalans=searching(arr,size,index+1,target);
    return finalans;
}
int main(){
    int arr[]={1,2,3,4,5};
    prinarray(arr,5);
    int size=5;
    int target=4;
    int index=0;
    cout<<"target found (1) or not fount (0)"<<"  "<<"==>>"<<"  "<<searching(arr,size,index,target);
    return 0;

}