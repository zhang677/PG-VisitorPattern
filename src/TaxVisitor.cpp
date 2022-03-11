//
// Created by 张 on 2022/3/11.
//
#include "../include/VisitorImpl.h"
#include "../include/VisitableItems.h"

namespace Testvisitor{
    double TaxVisitor::visit(const Liquor* liquorItem) {
        return liquorItem->getPrice() * 0.18;
    }
    double TaxVisitor::visit(const Necessity* necessityItem) {
        return necessityItem->getPrice() * 0.32;
    }
    double TaxVisitor::visit(const Tobacco* tobaccoItem) {
        return tobaccoItem->getPrice() * 0.48;
    }
    double TaxHolidayVisitor::visit(const Liquor* liquorItem) {
        return liquorItem->getPrice() * 0.28;
    }
    double TaxHolidayVisitor::visit(const Necessity* necessityItem) {
        return necessityItem->getPrice() * 0.42;
    }
    double TaxHolidayVisitor::visit(const Tobacco* tobaccoItem) {
        return tobaccoItem->getPrice() * 0.58;
    }
}

