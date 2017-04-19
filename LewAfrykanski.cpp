/* 
 * File:   LewAfrykanski.cpp
 * Author: maciej
 * 
 * Created on 14 styczeń 2014, 23:43
 */

#include "LewAfrykanski.hpp"
#include "Lew.hpp"

LewAfrykanski::LewAfrykanski(int morale,std::string kolor):Lew(morale) {
    this->kolor=kolor;
}
LewAfrykanski::~LewAfrykanski() {
}
std::string LewAfrykanski::toString() {
   
    return (Lew::toString() +" Kolor sierści : " + kolor);
}


