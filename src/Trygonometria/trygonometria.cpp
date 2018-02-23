#include "trygonometria.h"
#include <cmath>

double degreemath::sin(double degree) {
         //zamiana stopni na radiany:pi radianów = 180 stopni
    double radiany=M_PI*degree/180;
         return std::sin(radiany);   //funkcja biblioteczna z piku <cmath>
}

double degreemath::cos(double degree) {
    //zamiana stopni na radiany:pi radianów = 180 stopni
    double radiany=M_PI*degree/180;
    return std::cos(radiany);   //funkcja biblioteczna z piku <cmath>
}

double degreemath::tg(double degree) {
    //zamiana stopni na radiany:pi radianów = 180 stopni
    double radiany=M_PI*degree/180;
    return std::tan(radiany);   //funkcja biblioteczna z piku <cmath>
}

double degreemath::ctg(double degree){
    //zamiana stopni na radiany:pi radianów = 180 stopni
    double radiany=M_PI*degree/180;
    return 1/std::tan(radiany); //funkcja biblioteczna z piku <cmath>
}
