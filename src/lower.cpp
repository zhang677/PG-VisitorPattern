//
// Created by 张 on 2022/3/10.
//

#include <memory>
#include "../include/lower.h"
#include "../include/lower_impl.h"
#include "../include/lower_impl_imperative.h"

using namespace std;
namespace playground {
    Lowerer::Lowerer() : impl(new LowererImplImperative()) {
    }

    std::shared_ptr<LowererImpl> Lowerer::getLowererImpl() {
        return impl;
    }

    void lower(int i, double j, Lowerer lowerer) {
        lowerer.getLowererImpl()->lower(i, j);
    }
}

