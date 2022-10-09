#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++){
        cin>>Arr[i];
        //cout<<Arr[i]<<endl;
    }
    temp = Arr[0];
    for(int i=0;i<n;i++){
        if(temp<Arr[i])
        temp= Arr[i];
    }
    //cout<< temp;
    int Spend=0;
    for(int i=0;i<n;i++){
        Spend= Spend+(temp-Arr[i]);
    }
    cout<<Spend;
}
