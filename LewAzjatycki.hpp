/* 
 * File:   LewAzjatycki.hpp
 * Author: maciej
 *
 * Created on 14 styczeń 2014, 20:50
 */
#ifndef LEWAZJATYCKI_HPP
#define	LEWAZJATYCKI_HPP

#include "Lew.hpp"


class LewAzjatycki:public Lew {
public:
    LewAzjatycki(int morale,std::string podgatunek);
    std::string toString();
    virtual ~LewAzjatycki();
private:
    std::string podgatunek;
};

#endif	/* LEWAZJATYCKI_HPP */

