using namespace std;
gausu_distribution::gausu_distribution(float pos,float dispersion){
    this->pos=pos;
    this->dispertion=dispersion;
}

void gausu_distribution::disp(){
    std::cout << pos <<endl
    std::cout << dispertion << endl
}

