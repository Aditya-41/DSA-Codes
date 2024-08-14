#include<bits\stdc++.h>

using namespace std;

class Player{
    public: 
    int health;
    int score;
};

int main()
{ 
    Player sandy;
    sandy.health = 100;
    sandy.score = 3500;

    cout<<sandy.score<<endl;
    cout<<sandy.health<<endl;

    return 0;
}