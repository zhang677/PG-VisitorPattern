//
// Created by 张 on 2022/3/10.
//
#include "../include/lower_impl_imperative.h"
#include <iostream>
namespace playground{

    LowererImplImperative::LowererImplImperative(): tmpI(0), tmpD(0) {
    }

    void LowererImplImperative::lower(int i, double j) {
        lowerAll(i, j);
    }

    void LowererImplImperative::lowerInt(int i) {
        tmpI = i;
    }

    void LowererImplImperative::lowerDouble(double j) {
        tmpD = j;
    }

    void LowererImplImperative::lowerAll(int i, double j) {
        lowerInt(i);
        lowerDouble(j);
    }

    void LowererImplImperative::SetInt(int i) {
        tmpI = i;
    }

    void LowererImplImperative::GetInt() {
        std::cout<<tmpI<<std::endl;
    }
}