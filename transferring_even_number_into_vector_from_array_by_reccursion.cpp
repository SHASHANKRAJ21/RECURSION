#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[],int size,int index,vector <int> &ans){
    if(index>=size){
        return;
    }
    if(arr[index]%2==0){
        ans.push_back(arr[index]);
    }
    solve(arr,size,index+1,ans);
}
int main(){
    int arr[100];
    int index=0;
    int size=sizeof(arr)/sizeof(arr[index]);
    vector <int> ans;
    for(int i=0;i<100;i++){
        arr[i]=i+4;
    }
    cout<<"printing all the numbvers of the array"<<endl;
    for(int i=0;i<100;i++){
        cout<<arr[i]<<' '<<endl;
    }
    cout<<endl<<endl<<endl;
    solve(arr,size,index,ans);
    for(int num:ans){
        cout<<num<<" ";
    }
    return 0;

}