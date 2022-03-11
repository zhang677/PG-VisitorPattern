//
// Created by 张 on 2022/3/10.
//

#ifndef PLAYGROUND_UNCOPYABLE_H
#define PLAYGROUND_UNCOPYABLE_H

class Uncopyable {
protected:
    Uncopyable() = default;
    ~Uncopyable() = default;

private:
    Uncopyable(const Uncopyable&) = delete;
    Uncopyable& operator=(const Uncopyable&) = delete;
};

#endif //PLAYGROUND_UNCOPYABLE_H
