//
// Created by utec on 05/06/19.
//

#ifndef PRACTICA_GEOMETRICPROGRESSION_H
#define PRACTICA_GEOMETRICPROGRESSION_H

class GeometricProgressionIterator{
    long curr;
    long step;
    friend class GeometricProgression;
    GeometricProgressionIterator(long curr,long step):curr{curr}, step{step}{}
public:
    bool operator==(const GeometricProgressionIterator& other) const;
    bool operator!=(const GeometricProgressionIterator& other) const;
    long&operator*();
    GeometricProgressionIterator&operator++();
    GeometricProgressionIterator&operator++(int);
};

class GeometricProgression {
    int base;
    long first;
    long stop;
public:
    GeometricProgression(long first, long stop, int base):base{base},first{first}, stop{stop}{}
    using iterator = GeometricProgressionIterator;
    iterator begin()const{
        return GeometricProgression::iterator(first,base);
    }
    iterator end() const{
        return GeometricProgression::iterator(stop,base);
    }

};


#endif //PRACTICA_GEOMETRICPROGRESSION_H
