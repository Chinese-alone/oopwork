#include <iostream>
#include <string>
#include <map>
#include "card.h"


int main(){
    card* cards[100];
    for(int i=0;i<100;i++){
        cards[i] = new card();
        cards[i]->init_card(i+1);
        cards[i]->print_info();
        cards[i]->pay_card(i+1);
    }
}