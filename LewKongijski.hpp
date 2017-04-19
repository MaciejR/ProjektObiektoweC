/* 
 * File:   LewKongijski.hpp
 * Author: maciej
 *
 * Created on 14 styczeń 2014, 23:48
 */

#ifndef LEWKONGIJSKI_HPP
#define	LEWKONGIJSKI_HPP

#include "LewAfrykanski.hpp"

class LewKongijski:public LewAfrykanski {
public:
    LewKongijski(int morale,std::string kolor,int dlugoscOgona);
    virtual void MetodaWirtualna();
    virtual std::string toString();
    virtual ~LewKongijski();
private:
    int dlugoscOgona;
};

#endif	/* LEWKONGIJSKI_HPP */

