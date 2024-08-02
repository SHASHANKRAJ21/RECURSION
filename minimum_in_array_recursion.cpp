#include<iostream>
#include<limits.h>
using namespace std;
void findmin(int arr[],int size,int index,int &mini){
    if(index>=size){
        return;
    }
    mini=min(mini,arr[index]);
    findmin(arr,size,index+1,mini);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int index=0;
    int mini=INT_MAX;
    findmin(arr,size,index,mini);
    cout<<"the smallest element in the array is"<<" "<<mini;
    return 0;
}