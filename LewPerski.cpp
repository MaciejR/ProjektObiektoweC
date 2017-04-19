/* 
 * File:   LewPerski.cpp
 * Author: maciej
 * 
 * Created on 14 styczeń 2014, 21:15
 */

#include "LewPerski.hpp"
#include <sstream>
#include <iostream>
LewPerski::LewPerski(int morale,std::string podgatunek, int masaCiala):LewAzjatycki(morale,podgatunek) {
    this->masaCiala=masaCiala;
}

LewPerski::~LewPerski() {
}
void LewPerski::MetodaWirtualna() {
    std::cout<<"To już nie jest klasa abstrakcyjna";
}
std::string LewPerski::toString(){
    std::ostringstream s;
    s<<masaCiala;
   
    return LewAzjatycki::toString() + " Masa ciała : " + s.str();

}
