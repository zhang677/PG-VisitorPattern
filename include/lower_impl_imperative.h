//
// Created by 张 on 2022/3/10.
//

#ifndef PLAYGROUND_LOWER_IMPL_IMPERATIVE_H
#define PLAYGROUND_LOWER_IMPL_IMPERATIVE_H

#include <memory>
#include "Uncopyable.h"
#include "lower_impl.h"

namespace playground{
    class LowererImplImperative : public LowererImpl {
    public:
        LowererImplImperative();

        virtual ~LowererImplImperative() = default;

        void lower(int i, double j);

    protected:
        void lowerInt(int i);

        void lowerDouble(double j);

        void lowerAll(int i, double j);

        void SetInt(int i);

        void GetInt();

    private:
        int tmpI;
        double tmpD;

    };

}

#endif //PLAYGROUND_LOWER_IMPL_IMPERATIVE_H
