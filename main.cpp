/* 
 * File:   main.cpp
 * Author: maciej
 *
 * Created on 14 styczeń 2014, 20:09
 */
#include <stdlib.h> 
#include <cstdlib>
#include  <iostream>
#include  <sstream>
#include  <string>
#include "LewCejlonski.hpp"
#include "LewPerski.hpp"
#include "LewKongijski.hpp"
#include "LewBialy.hpp"
#include "Arena.hpp"
#include <vector>

using namespace std;

Arena<Lew*> *a=new Arena<Lew*>();//zmienna reprezentująca Arenę wojowników
vector<Lew*> listaWalczacych;//zmienna pomocnicza, przydatna podczas iterowania po pozostałych walczących wojownikach
void inicjuj(int rozmiar){
    
    for(int j=0;j<rozmiar;j++){
        int los=(rand()%4);//losowanie jaki wojownik ma zostać utworzony,wraz z losowaniem wartości tego wojownika
        switch(los){
                case 1 :{
                        int losoweMorale=(rand())%100+100;
                        int losowaDlugoscOgona=(rand())%100;
                        Lew* l=new LewKongijski(losoweMorale,"płowy",losowaDlugoscOgona);
                        
                        (*a)+=l;//dodawanie wojownika do areny
                        break;
                        }
                case 2:{
                        int losoweMorale=(rand())%100+100;
                        int losowaDlugoscGrzywy=(rand())%50;
                        Lew* l=new LewBialy(losoweMorale,"bialy",losowaDlugoscGrzywy);
                        (*a)+=l;//dodawanie wojownika do areny
                        break;
                        }
                case 3:{
                        int losoweMorale=(rand())%100+100;
                        int losowaMasaCiala=(rand())%100+150;
                        
                        Lew* l=new LewPerski(losoweMorale,"perski",losowaMasaCiala);
                        (*a)+=l;//dodawanie wojownika do areny
                        break;}
                default:{
                        int losoweMorale=(rand())%100+100;
                        int losowaDlugoscCiala=(rand())%100+200;
                        Lew* l=new LewCejlonski(losoweMorale,"cejlonski",losowaDlugoscCiala);
                        (*a)+=l;//dodawanie wojownika do areny
                        break;  }      
                        
        }
        
    }

}
void turniej(){
   
   
       
        listaWalczacych.clear();   
        //dodawanie wojowników pozostałych na arenie do listyWalczących
       for(a->it=a->zbiorWojownikow.begin();a->it!=a->zbiorWojownikow.end();++a->it){
                listaWalczacych.push_back(*a->it);
            }
        //iterowanie po liście walczących i walki pierwszego z ostatnim, drugiego z przedostatnim itd.
        //w przypadku gdy liczba walczących jest nieparzysta, środkowy element przechodzi do następnej rundy ale nie dostaje
        //bonusu w postaci zwiększonego morale
        for(int i=0;i<listaWalczacych.size()/2;++i)
        {
            Lew* ob=listaWalczacych[ i ];
            
            Lew* ob1=listaWalczacych[listaWalczacych.size()-(i+1)];
            
            (*a)-=(*ob)+ob1;//usuwanie z areny wojownika który przegrał walkę między ob a ob1, dlatego operator + zwraca przegranego
            
            
        }
           
    
   
  
  
   
}


int main(int argc, char** argv) {

  //Pobieranie liczby wojownikow 
  int i;
  cout << "Podaj liczbę wojowników: ";
  cin >> i;
 
  //inicjowanie areny
  inicjuj(i);
  
  //pętla wywołująca turnieje aż do momentu w którym zostaje jeden Lew      
  while(a->zbiorWojownikow.size()>1){
     a->wyswietl();
     turniej();
    }
  
  //Wyświetlanie danych zwycięzcy
  Lew* ob=*(a->zbiorWojownikow.begin());
  cout<<"\nZwycięzcą został lew o cechach:" <<ob->toString();

  return 0;
}



