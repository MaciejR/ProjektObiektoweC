/* 
 * File:   LewCejlonski.hpp
 * Author: maciej
 *
 * Created on 14 styczeń 2014, 23:28
 */

#ifndef LEWCEJLONSKI_HPP
#define	LEWCEJLONSKI_HPP

#include "LewAzjatycki.hpp"


class LewCejlonski:public LewAzjatycki {
public:
    LewCejlonski(int morale,std::string podgatunek,int dlugoscCiala);
    virtual void MetodaWirtualna();
    virtual std::string toString();
    virtual ~LewCejlonski();
private:
    int dlugoscCiala;
};

#endif	/* LEWCEJLONSKI_HPP */

