# FakerCPP

Generate massive amounts of fake data with fakercpp

## 🚀 Features

- 💌 Address Data - Generate authentic-looking Addresses, Zip Codes, Street Names, States, and Countries!
- ⏰ Temporal Information - Create data from the past, present, future, recent, or upcoming periods!
- 🌏 Language Localization - Customize the output to match specific locales for realistic Names, Addresses, and Phone Numbers.
- 💸 Financial Details - Generate placeholder Account Information, Transactions, and Crypto Addresses.
- 👠 Product Information - Produce Pricing, Product Names, Adjectives, and Descriptions for various items.
- 🧍 Personal Identities - Generate virtual personas with comprehensive online and offline identities.
- 🔢 Numerical Data - Additionally, we can generate random numbers and strings as needed.

## Installation

### With Conan
To install, add `faker/0.0.1` to your `conanfile.py` or `conanfile.txt` file, then run.
```sh
conan install conanfile.txt --build=missing
# or
conan install conanfile.py --build=missing
```

### Using CMake FetchContent
```sh
# Work in Progress
```

## Usage
```cpp
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

```

## License
[MIT](./LICENSE)