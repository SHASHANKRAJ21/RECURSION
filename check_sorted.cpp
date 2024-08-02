#include<iostream>
using namespace std;
bool checksorted(int arr[],int size,int index){
    if(index>=size){
        return true;
    }
    if(arr[index]>arr[index-1]){
        bool aaagekaans=checksorted(arr,size,index+1);
    }
    else{
        return false;
    }
}
int main(){
    int arr[]={1,2,78,4,5};
    int size=5;
    int index=1;
    bool issorted=checksorted(arr,size,index);
    if(issorted){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
}