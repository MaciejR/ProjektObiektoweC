/* 
 * File:   Arena.hpp
 * Author: maciej
 *
 * Created on 15 styczeń 2014, 16:24
 */

#ifndef ARENA_HPP
#define	ARENA_HPP

#include <set>

#include "LewBialy.hpp"
template <class T> class Arena {
public:
    
    Arena();//konstruktor
    virtual ~Arena();//destruktor
    std::set<T> zbiorWojownikow;//zbior wojownikow w arenie
    typename std::set<T>::iterator it;//iterator po powyzszym zbiorze
    void wyswietl();//wypisuje wszystkie elementy zbioru
    Arena<T>& operator+=(T ob);//dodawanie do zbioru
    Arena<T>& operator-=(T ob);//usuwanie ze zbioru
   
    
};

#endif	/* ARENA_HPP */

