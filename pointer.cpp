#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int *p=&a;

    char ch='a';
    char *pch=&ch;
    if(sizeof(ch)==sizeof(a)) {
        cout<<"hey"<<endl;
    }
    return 0;
}