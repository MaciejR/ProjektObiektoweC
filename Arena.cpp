/* 
 * File:   Arena.cpp
 * Author: maciej
 * 
 * Created on 15 styczeń 2014, 16:24
 */

#include "Arena.hpp"
#include "LewBialy.hpp"
#include "LewKongijski.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>
#include <cstdlib>
template <class T>
Arena<T>::Arena() {//konstruktor
}
    

template <class T>
Arena<T>::~Arena() {//destruktor
    zbiorWojownikow.clear();
}
template <class T>
void Arena<T>::wyswietl(){//wyswietlanie danych wszystkich wojownikow
    int i=0;
    std::cout<<"";
    for(it=zbiorWojownikow.begin();it!=zbiorWojownikow.end();++it){
     T obiekt=*it;
      std::ostringstream s;
     s<<i+1;
     std::cout<<"\nWojownik nr "<< s.str() <<obiekt->toString();
     i++;
    }

}
template <class T> Arena<T>& Arena<T>::operator+=(T ob){//dodawanie do areny
    zbiorWojownikow.insert(ob);
    return *this;

}

template <class T> Arena<T>& Arena<T>::operator-=(T ob){//usuwanie z areny
    zbiorWojownikow.erase(ob);
    return *this;

}

template class Arena<Lew*>;