#include<bits\stdc++.h>
using namespace std;

class bike{
    public: 
    int avg;
    int tyresize;
    char engine;

    bike (int avg, int tyresize, char engine)
    { 
        this->avg = avg;
        this->tyresize = tyresize;
        this->engine = engine;
    }

};

int main()
{ 
    bike honda(40,20,'p');
    bike bmw(21,35,'p');
    bike bullet(25,30,'d');

    
    cout<<"Honda bike data : "<<endl;
    cout<<"TyerSize : "<<honda.tyresize<<endl;
    cout<<"Average of Bike is : "<<honda.avg<<endl;
    cout<<"The Engine type is : "<<honda.engine<<endl;

    cout<<"BMW bike data : "<<endl;
    cout<<"TyerSize : "<<bmw.tyresize<<endl;
    cout<<"Average of Bike is : "<<bmw.avg<<endl;
    cout<<"The Engine type is : "<<bmw.engine<<endl;

    cout<<"Bullet bike data : "<<endl;
    cout<<"TyerSize : "<<bullet.tyresize<<endl;
    cout<<"Average of Bike is : "<<bullet.avg<<endl;
    cout<<"The Engine type is : "<<bullet.engine<<endl;

    return 0;


}