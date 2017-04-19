/* 
 * File:   LewAzjatycki.cpp
 * Author: maciej
 * 
 * Created on 14 styczeń 2014, 20:50
 */

#include "LewAzjatycki.hpp"
#include <iostream>
#include <sstream>
using namespace std;
LewAzjatycki::LewAzjatycki(int morale,string podgatunek):Lew(morale) {
    
    //this->dlugoscCiala=dlugoscCiala;
    this->podgatunek=podgatunek;
}

LewAzjatycki::~LewAzjatycki() {
}

std::string LewAzjatycki::toString() {
 
    return (Lew::toString() +" Podgatunek : " + podgatunek);
}


