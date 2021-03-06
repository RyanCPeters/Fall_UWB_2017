//
// Created by .Peters on 11/4/2017.
//
#include <iosfwd>
#ifndef ASSIG3_GCD_H
#define ASSIG3_GCD_H


class euclid {
private:
    long long int I,A,B,gcd,modCalls;

    void findGCD();


public:
    euclid(const long long int &i):A(0),B(0),gcd(0),modCalls(0),I(i){};
    euclid(const euclid &copy);
    euclid(const long long int &a, const long long int &b,const long long int &i);

    long long int getGCD()const;

    long long int getModCalls()const;

    long long int getA()const;

    long long int getB()const;

    long long int getI()const;
    friend std::ostream& operator<<(std::ostream &os, const euclid &g);
    bool operator>(const euclid &rhs)const;
    bool operator>=(const euclid &rhs)const;
    bool operator<(const euclid &rhs)const;
    bool operator<=(const euclid &rhs)const;
    bool operator==(const euclid &rhs)const;
    euclid& operator=(const euclid &rhs);


};


#endif //ASSIG3_GCD_H
