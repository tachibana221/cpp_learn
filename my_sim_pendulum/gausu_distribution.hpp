#ifndef GAUSU_DISTRIBUTION_HPP
#define GAUSU_DISTRIBUTION_HPP

class gausu_distribution{    
    private:
        double pos ;
        double dispersion;

    public:
        gausu_distribution(float pos,float dispersion);
        void disp();
        //void out_csv(double var);
};
#endif