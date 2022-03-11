//
// Created by 张 on 2022/3/11.
//

#ifndef PLAYGROUND_VISITOR_H
#define PLAYGROUND_VISITOR_H


namespace Testvisitor{
    class Liquor;
    class Necessity;
    class Tobacco;
    class Visitable;
    class Visitor {
    public:
        virtual double visit(const Liquor* liquorItem) = 0;
        virtual double visit(const Necessity* necessityItem) = 0;
        virtual double visit(const Tobacco* tobaccoItem) = 0;
    };
}

#endif //PLAYGROUND_VISITOR_H
