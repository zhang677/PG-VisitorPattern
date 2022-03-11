//
// Created by 张 on 2022/3/11.
//

#ifndef PLAYGROUND_TAXVISITOR_H
#define PLAYGROUND_TAXVISITOR_H
#include "Visitor.h"

namespace Testvisitor{
    class TaxVisitor : public Visitor{
    public:
        double visit(const Tobacco* tobaccoItem);
        double visit(const Necessity* necessityItem);
        double visit(const Liquor* liquorItem);
    };
    class TaxHolidayVisitor : public Visitor{
    public:
        double visit(const Tobacco* tobaccoItem);
        double visit(const Necessity* necessityItem);
        double visit(const Liquor* liquorItem);
    };
}
#endif //PLAYGROUND_TAXVISITOR_H
