#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#define _USE_MATH_DEFINES
#endif

int main(){
    
#ifdef USE_TRIGONOMETRY_DEGREE
    double a=degreemath::sin( 0);
    double b=degreemath::cos(90);
    double c=degreemath::tg(45);
#else
    double a=std::sin(0);
    double b=std::cos(90);
    double c=std::tan(45);
    return a;
#endif
    
}
