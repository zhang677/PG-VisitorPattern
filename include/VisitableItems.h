//
// Created by 张 on 2022/3/11.
//

#ifndef PLAYGROUND_TOBACCO_H
#define PLAYGROUND_TOBACCO_H
#include "Visitable.h"

namespace Testvisitor{
    class Tobacco : public Visitable {
    public:
        Tobacco(double item):price(item) {}
        double getPrice() const {return this->price;}
        double accept(Visitor* visitor){
            return visitor->visit(this);
        }
    private:
        double price;
    };
    class Necessity : public Visitable {
    public:
        Necessity(double item):price(item) {}
        double getPrice() const {return this->price;}
        double accept(Visitor* visitor){
            return visitor->visit(this);
        }
    private:
        double price;
    };
    class Liquor : public Visitable {
    public:
        Liquor(double item):price(item) {}
        double getPrice() const {return this->price;}
        double accept(Visitor* visitor){
            return visitor->visit(this);
        }
    private:
        double price;
    };
}
#endif //PLAYGROUND_TOBACCO_H
