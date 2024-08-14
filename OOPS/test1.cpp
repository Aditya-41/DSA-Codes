#include<bits/stdc++.h>


using namespace std;

class Employee

{
    public:
    int cnt;

    Employee(int i){
        this->cnt = i;
        cout<<"Constructor Invoked"<< cnt <<endl;

    }

    ~Employee(){
        cout<<"Destructor Invoked"<< cnt <<endl;

    }

    

    

    

};

int main(){

        Employee e1(1); //creating an object of Employee

        Employee e2(2); //creating an object of Employee
        return 0;
}