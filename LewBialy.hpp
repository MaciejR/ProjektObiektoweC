/* 
 * File:   LewBialy.hpp
 * Author: maciej
 *
 * Created on 15 styczeń 2014, 00:04
 */

#ifndef LEWBIALY_HPP
#define	LEWBIALY_HPP
#include "LewAfrykanski.hpp"
class LewBialy:public LewAfrykanski {
public:
    LewBialy(int morale,std::string kolor,int dlugoscGrzywy);
    virtual std::string toString();
    virtual void MetodaWirtualna();
    virtual ~LewBialy();
private:
int dlugoscGrzywy;
};

#endif	/* LEWBIALY_HPP */

