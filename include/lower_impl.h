//
// Created by 张 on 2022/3/10.
//

#ifndef PLAYGROUND_LOWER_IMPL_H
#define PLAYGROUND_LOWER_IMPL_H

#include "Uncopyable.h"
#include <memory>

namespace playground {
    class LowererImpl : public Uncopyable {
    public:
        LowererImpl();

        virtual ~LowererImpl() = default;

        virtual void lower(int i, double j) = 0;

    protected:
        virtual void lowerInt(int i) = 0;

        virtual void lowerDouble(double j) = 0;

        virtual void lowerAll(int i, double j);
    };
}
#endif //PLAYGROUND_LOWER_IMPL_H
