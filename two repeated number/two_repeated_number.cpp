#include<iostream>
using namespace std;
void read(int b[],int n){
for(int i=0;i<n;i++){
    cin>>b[i];
}
}
int main(){
    int ans=0, n,a[100];
cout<<"ENTER NUMBER OF ELEMENT IN ARRAY"<<" ";
cin>>n;
cout<<"ENTER ELEMENT IN ARRAY"<<endl;
read(a,n);
    for(int i=0;i<n;i++){
ans=ans^a[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}