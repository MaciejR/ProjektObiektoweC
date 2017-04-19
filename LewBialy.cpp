/* 
 * File:   LewBialy.cpp
 * Author: maciej
 * 
 * Created on 15 styczeń 2014, 00:04
 */

#include "LewBialy.hpp"
#include <sstream>
#include <iostream>

LewBialy::LewBialy(int morale,std::string kolor,int dlugoscGrzywy):LewAfrykanski(morale,kolor) {
    this->dlugoscGrzywy=dlugoscGrzywy;

}



LewBialy::~LewBialy() {
}

void LewBialy::MetodaWirtualna(){
    std::cout<<"To już nie jest klasa abstrakcyjna";
}
std::string LewBialy::toString(){
    std::ostringstream s;
    s<<dlugoscGrzywy;
   
    return LewAfrykanski::toString() + " Dlugosc grzywy : " + s.str();

}