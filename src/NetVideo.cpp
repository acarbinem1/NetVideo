/*
  VideoStore.cpp

  Basic operations of a video store
*/

#include <iostream>

#include "Video.hpp"
#include "Rental.hpp"
#include "Customer.hpp"

void genheat(int len){
    //Generate heat
    for(int i = 0; i < len; ++i){
    //
    }    
}

int main() {

    // Videos
    Video lotr("Lord of the Rings", Video::REGULAR);
    Video hp("Harry Potter", Video::CHILDRENS);
    Video tt("Titanic", Video::REGULAR);

    // Rentals of these movies
    Rental r1(lotr, 10);
    Rental r2(hp, 5);
    Rental r3(tt, 7);

    // Customer with some rentals
    Customer customer("Fred");
    customer.addRental(r1);
    customer.addRental(r2);
    customer.addRental(r3);

    // Output customer statement
    std::cout << customer.statement();
    
    genheat(10);
    
    return 0;
}
