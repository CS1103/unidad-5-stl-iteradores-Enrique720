//
// Created by utec on 05/06/19.
//

#include "ArithmeticProgression.h"
bool ArithmeticProgressionIterator::operator==(const ArithmeticProgressionIterator &other) const {
    return curr == other.curr;
}

bool ArithmeticProgressionIterator::operator!=(const ArithmeticProgressionIterator &other) const {
    return curr < other.curr;
}

long int  &ArithmeticProgressionIterator::operator*() {
    return curr;
}

ArithmeticProgressionIterator &ArithmeticProgressionIterator::operator++() {
    curr += step;
    return *this;
}

ArithmeticProgressionIterator& ArithmeticProgressionIterator::operator++(int) {
    auto it = this;
    ++(*this);
    return *it;
}