#include "fakercpp.h"
#include <iostream>
#include <string>

int main() {
    std::cout << faker::location::random_country() << std::endl;
}
