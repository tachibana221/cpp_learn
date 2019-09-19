#include "gausu_distribution.hpp"
#include <iostream>
using namespace std;
gausu_distribution::gausu_distribution(float pos,float dispersion){
    this->pos=pos;
    this->dispersion=dispersion;
}

void gausu_distribution::disp(){
    cout << pos <<endl;
    cout << dispersion << endl;
}

