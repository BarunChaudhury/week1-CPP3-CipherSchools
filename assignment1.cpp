#include<bits/stdc++.h>
using namespace std;

bool iseligible(int n){
    if(n>=18)
    {
        return true;
    }
    return false;
}

int main(){

    int n;
    cin>>n;
    iseligible(n);
    {
        if(iseligible(n)){
        cout<<"can vote"<<endl;
        }
        else{
            cout<<"can't vote"<<endl;
            
        }

    }
}
