#include "LaborkaConfig.h"
#include "iostream"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#define _USE_MATH_DEFINES
#endif



int main(int arg, char ** argv){
    
    double liczba;
    
#ifdef USE_TRIGONOMETRY_DEGREE
    if (arg>1) {
        liczba=std::stod(argv[1]);
    }
    
    double a=degreemath::sin(liczba);
    double b=degreemath::cos(liczba);
    double c=degreemath::tg(liczba);
    std::cout<<a<<std::endl;
#else
    double a=std::sin(arg);
    double b=std::cos(arg);
    double c=std::tan(arg);
    return a;
#endif
    
}
