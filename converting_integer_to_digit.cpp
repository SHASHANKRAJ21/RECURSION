 #include<iostream>
 #include<vector>
 using namespace std;
 void printdigit(int n,vector<int>&ans){
    if(n==0){
        return;
    }
    int digit=n%10;
    printdigit(n,ans);
    ans.push_back(digit);

 }
 int main(){
    int n;
    n=7654;
    vector<int>ans;
    printdigit(n,ans);
    for(int n:ans){
        cout<<n<<endl;
    }
 }