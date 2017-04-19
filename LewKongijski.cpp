/* 
 * File:   LewKongijski.cpp
 * Author: maciej
 * 
 * Created on 14 styczeń 2014, 23:48
 */

#include "LewKongijski.hpp"
#include <sstream>
#include <iostream>
LewKongijski::LewKongijski(int morale,std::string kolor,int dlugoscOgona):LewAfrykanski(morale,kolor) {
    this->dlugoscOgona=dlugoscOgona;
}



LewKongijski::~LewKongijski() {
}
void LewKongijski::MetodaWirtualna(){
std::cout<<"To już nie jest klasa abstrakcyjna";
}
std::string LewKongijski::toString(){
    std::ostringstream s;
    s<<dlugoscOgona;
   
    return LewAfrykanski::toString() + " Dlugosc ogona : " + s.str();

}

