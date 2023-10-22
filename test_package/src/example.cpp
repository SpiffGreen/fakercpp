#include "fakercpp.h"
#include <iostream>
#include <string>

int main() {
    std::cout << faker::location::random_country() << std::endl;
    std::cout << faker::location::random_street() << std::endl;
    std::cout << faker::location::random_zip_code() << std::endl;

    std::cout << faker::person::first_name() << std::endl;
    std::cout << faker::person::last_name() << std::endl;
    std::cout << faker::person::full_name() << std::endl;
}
