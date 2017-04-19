/* 
 * File:   LewAfrykanski.hpp
 * Author: maciej
 *
 * Created on 14 styczeń 2014, 23:43
 */

#ifndef LEWAFRYKANSKI_HPP
#define	LEWAFRYKANSKI_HPP

#include "Lew.hpp"
class LewAfrykanski:public Lew {
public:
    LewAfrykanski(int morale,std::string kolor);
    virtual std::string toString();
    virtual ~LewAfrykanski();
private:
std::string kolor;
};


#endif	/* LEWAFRYKANSKI_HPP */

