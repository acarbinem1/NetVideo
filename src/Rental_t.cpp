/*
  Rental_t.cpp

  Test program for class Rental
*/

#include <cassert>

#include "Rental.hpp"

int main() {

    // TODO:  Add test cases
    Video TestVideo("Test video", 5);
    Rental RentalTest(TestVideo, 10);
    assert(RentalTest.getDaysRented() == 10);    

    return 0;
}
