/* 
 * File:   LewCejlonski.cpp
 * Author: maciej
 * 
 * Created on 14 styczeń 2014, 23:28
 */

#include "LewCejlonski.hpp"
#include  <iostream>
#include  <sstream>
using namespace std;
LewCejlonski::LewCejlonski( int morale,string podgatunek,int dlugoscCiala):LewAzjatycki(morale,podgatunek) {
    this->dlugoscCiala=dlugoscCiala;
}


LewCejlonski::~LewCejlonski() {
}
void LewCejlonski::MetodaWirtualna() {
    std::cout<<"To już nie jest klasa abstrakcyjna";
}
std::string LewCejlonski::toString(){
    std::ostringstream s;
    s<<dlugoscCiala;
   
    return LewAzjatycki::toString() + " Dlugosc ciała : " + s.str();

}
