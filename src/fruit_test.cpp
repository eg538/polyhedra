#include <cmath>
#include <cstdlib>
#include <memory>
#include <vector>
// Enables endl
#include <iostream>
#include <stdio.h>

#include "fruit.h"
#include "watermelon.h"
#include "orange.h"
#include "peach.h"

#include "honeydew.h"

// Enables us to use cout and endl without prepending std::
#include "Lychee.h"
using namespace std;

int main() {
    std::vector<std::shared_ptr<Fruit>> fruits;

    // Add your name and fruit  here!
    fruits.push_back(std::make_shared<Watermelon>("Trevor Edwards"));
    fruits.push_back(std::make_shared<Orange>("Anmol Kabra"));
    fruits.push_back(std::make_shared<HoneyDew>("Lucas Switzer"));
    fruits.push_back(std::make_shared<Orange>("Nicolas Buitrago"));
    fruits.push_back(std::make_shared<Orange>("Ning Wang"));
    fruits.push_back(std::make_shared<Strawberry>("Me"));
    fruits.push_back(std::make_shared<Orange>("Trevor2 Edwards"));
  	fruits.push_back(std::make_shared<Lychee>("Emily Gao"));    
  	fruits.push_back(std::make_shared<Peach>("Seungyeon Chelsea Han"));
    // Don't edit below
    std::srand(1996);
    for (auto itr = fruits.begin(); itr != fruits.end(); itr++) {
        auto fruit = *itr;
        // Display polyhedron info
        printf("Examining the %s:\n", fruit->get_info().c_str());

        // Check that the polyhedron is delicious
        if (!fruit->is_delicious()) {
            printf("Error: This fruit is not delicious!\n");
	}
        // Compute the mass
        double mass = fruit->get_weight();

	// This is an alternate way of output using stream writing operators.
	// cout writes to stdout
	cout << mass << endl;
    }
    printf("All fruits are delicious!\n");
    return 0;
}
