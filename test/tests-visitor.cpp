//
// Created by 张 on 2022/3/11.
//

#include "gtest/gtest.h"

#include <iostream>

#include "../include/lower.h"
#include "../include/lower_impl_imperative.h"
#include "../include/lower_impl_c.h"

#include "../include/Visitable.h"

#include "../include/VisitableItems.h"
#include "../include/VisitorImpl.h"
#include <memory>

using namespace std;
TEST(Testvisitor, test_visitor){
    using namespace Testvisitor;
    std::unique_ptr<Visitor> taxCalc (new TaxVisitor());
    std::unique_ptr<Visitor> taxHolidayCalc( new TaxHolidayVisitor());

    std::unique_ptr<Visitable> milk( new Necessity(1.99) );
    std::unique_ptr<Visitable> vodka( new Liquor(2.99) );
    std::unique_ptr<Visitable> huazi( new Tobacco(3.99) );

    cout<<milk->accept(taxCalc.get())<<endl;
    milk->accept(taxHolidayCalc.get());
    vodka->accept(taxCalc.get());
    vodka->accept(taxHolidayCalc.get());
    huazi->accept(taxCalc.get());
    huazi->accept(taxHolidayCalc.get());


}


TEST(Testvisitor, test_inheritence){
    using namespace playground;
    lower(1, 4.0);
    class A {
    public:
        explicit A(int a=0):a(a) {}
        void pt() const {std::cout<<this->a<<std::endl;}
    private:
        int a;
    };
    class B : public A{
    public:
        B() {};
    };
    class C : public B{
    public:
        C() {};
    };
    B* b = new(B);
    b->pt();
    //std::shared_ptr<A> tmp(new C());
    std::shared_ptr<LowererImpl> t(new LowererImplC());

    t->lower(0,1);
}