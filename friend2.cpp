#include<bits/stdc++.h>
using namespace std;

class student{

    string passcode;
    friend class bestfriend;

    protected:

    int age;
    public:
    string name;
    int id;

    student(){
        student(int id, string name,string passcode,int age);{
            this->name=name;
            this->id=id;
            this->passcode=passcode;
            this->age=age;  
        }

        void into();
        cout<<"my name is"<<name<<"my id is"<<id<<"passcode is"<<passcode<<endl;
    }

    friend void hacker(student s);
};

int main(){
    student s1(1,"mohit","0001",10);

    return 0;
}