//
// Created by 张 on 2022/3/11.
//

#ifndef PLAYGROUND_VISITABLE_H
#define PLAYGROUND_VISITABLE_H
#include "Visitor.h"
namespace Testvisitor{
    class Visitable {
    public:
        virtual double accept(Visitor* visitor) = 0;
    };
}
#endif //PLAYGROUND_VISITABLE_H
