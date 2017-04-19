/* 
 * File:   Lew.cpp
 * Author: maciej
 * 
 * Created on 14 styczeń 2014, 20:10
 */

#include"Lew.hpp"
#include<string>
#include<iostream>
#include<sstream>
using namespace std;
Lew::Lew(int morale) {
    this->morale=morale; 
}

Lew::~Lew() {
}
string Lew::toString(){
    ostringstream s;
    s<<morale;
    return (" Morale : " + s.str());

}
Lew* Lew::operator+(Lew* ob){//operator walki pomiędzy Lwami, operator dwuargumentowy Lew* + Lew*
    if(ob->morale>this->morale) {//porównuje morale lwów,wyższe wygrywa i dostaje +20 do morale
        ob->morale+=20;
    return this;}
    else {
        (*this).morale+=20;
       
        return ob;}



}

