//
// Created by 张 on 2022/3/10.
//

#ifndef PLAYGROUND_LOWER_H
#define PLAYGROUND_LOWER_H

#include <memory>

namespace playground {
    class LowererImpl;
    class Lowerer {
    public:
        Lowerer();
        std::shared_ptr<LowererImpl> getLowererImpl();

    private:
        std::shared_ptr<LowererImpl> impl;
    };

    void lower(int i, double j, Lowerer lowerer=Lowerer());
}


#endif //PLAYGROUND_LOWER_H
