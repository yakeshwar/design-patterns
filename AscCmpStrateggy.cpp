#include<iostream>
#include "AscCmpStrateggy.h"

using namespace std;

AscCmpStrateggy::AscCmpStrateggy()
{
    //ctor
}

void AscCmpStrateggy::cmp(int e1, int e2)
{
    cout<<"\nSortStrategy using ==> Compare Logic"<<endl;
    cout<<"\nAdd Compare algo here: e1:e2="<<e1<<":"<<e2<<endl;
}

AscCmpStrateggy::~AscCmpStrateggy()
{
    //dtor
}
