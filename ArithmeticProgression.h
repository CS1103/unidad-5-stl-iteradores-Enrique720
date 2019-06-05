//
// Created by utec on 05/06/19.
//

#ifndef PRACTICA_ARITHMETICPROGRESSION_H
#define PRACTICA_ARITHMETICPROGRESSION_H
#include <iostream>
using namespace std;
class ArithmeticProgressionIterator{
protected:
    long int curr;
    long int step;
    friend class ArithmeticProgression;
    ArithmeticProgressionIterator(int curr, int step):
            curr{curr}, step{step} {}
public:
    bool operator==(const ArithmeticProgressionIterator& other) const;
    bool operator!=(const ArithmeticProgressionIterator& other) const;
    long int& operator*();
    ArithmeticProgressionIterator& operator++();
    ArithmeticProgressionIterator& operator++(int);

};

class ArithmeticProgression {
    long int first;
    long int stop;
    long inc;
public:
    ArithmeticProgression(int start, int stop, int step):first{start},
                                         stop{stop}, inc{step} {}
    using iterator = ArithmeticProgressionIterator;
    iterator begin() const {
        return ArithmeticProgression::iterator(first, inc);
    }

    iterator end() const {
        return ArithmeticProgression::iterator(stop, inc);
    }
};



#endif //PRACTICA_ARITHMETICPROGRESSION_H
