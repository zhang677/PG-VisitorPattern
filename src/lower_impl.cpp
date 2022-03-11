//
// Created by 张 on 2022/3/10.
//

#include "../include/lower_impl.h"

using namespace std;
namespace playground{
    void LowererImpl::lowerAll(int i, double j) {
        lowerInt(i);
        lowerDouble(j);
    }

    LowererImpl::LowererImpl() {

    }

}