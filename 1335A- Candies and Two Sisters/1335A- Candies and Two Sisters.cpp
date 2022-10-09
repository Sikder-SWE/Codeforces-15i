#include<iostream>
using namespace std;
int main(){
    int NoC;         //NoC means Number of test Case given
    cin>>NoC;
    int WoD[NoC];    //WoD means Way of Distribution i.e in how many ways i can satisfy the condition given.
    //cout<< endl <<NoC;
    for(int i=0;i<NoC;i++){
        cin>>WoD[i];
        WoD[i] = WoD[i]%2==1?(WoD[i]/2):(WoD[i]/2)-1; 
    }
    for(int i=0;i<NoC;i++){
        cout<<WoD[i]<<endl;
    }
}