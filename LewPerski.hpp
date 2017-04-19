/* 
 * File:   LewPerski.hpp
 * Author: maciej
 *
 * Created on 14 styczeń 2014, 21:15
 */

#ifndef LEWPERSKI_HPP
#define	LEWPERSKI_HPP

#include "LewAzjatycki.hpp"


class LewPerski:public LewAzjatycki {
public:
    LewPerski(int morale,std::string podgatunek,int masaCiala);
    virtual void MetodaWirtualna();
    virtual std::string toString();
    virtual ~LewPerski();
private:
    int masaCiala;
};

#endif	/* LEWPERSKI_HPP */

