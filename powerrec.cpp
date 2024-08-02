#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int ans=2*power(n-1);
    return ans;
}
int main(){
    cout<<power(5);
    return 0;
}