/* 
 * File:   Lew.hpp
 * Author: maciej
 *
 * Created on 14 styczeń 2014, 20:10
 */

#ifndef LEW_HPP
#define	LEW_HPP
#include<string>

class Lew {
public:
    Lew(int);
    virtual ~Lew();
    virtual void MetodaWirtualna()=0;
    virtual std::string toString();
    Lew* operator+(Lew* ob);//operator walki pomiędzy Lwami, operator dwuargumentowy Lew* + Lew*
    int morale;
    

};

#endif	/* LEW_HPP */

