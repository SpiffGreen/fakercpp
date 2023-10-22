#include <string>
#include <vector>
#include "fakerutil.h"

std::vector<std::string> streets = {"Main Street", "Maple Avenue", "Oak Street", "Elm Street", "Cedar Lane", "Pine Street", "Willow Avenue",
                                    "Chestnut Street", "Hickory Lane", "Birch Street", "Magnolia Avenue", "Sycamore Lane", "Poplar Street",
                                    "Cypress Avenue", "Fir Lane", "Spruce Street", "Linden Avenue", "Redwood Lane", "Beech Street", "Aspen Avenue",
                                    "Juniper Lane", "Cottonwood Street", "Dogwood Avenue", "Sassafras Lane", "Tulip Street", "Cherry Avenue",
                                    "Hawthorn Lane", "Rosewood Street", "Alder Avenue", "Palm Lane", "Bamboo Street", "Bougainvillea Avenue",
                                    "Carnation Lane", "Daisy Street", "Foxglove Avenue", "Geranium Lane", "Hyacinth Street", "Iris Avenue",
                                    "Jonquil Lane", "Lavender Street", "Marigold Avenue", "Narcissus Lane", "Orchid Street", "Peony Avenue",
                                    "Quince Lane", "Ranunculus Street", "Sunflower Avenue", "Tiger Lily Lane", "Violet Street", "Wisteria Avenue"};
std::vector<std::string> countries = {"Afghanistan", "Albania", "Algeria", "Andorra", "Angola", "Antigua and Barbuda", "Argentina", "Armenia",
                                      "Australia", "Austria", "Azerbaijan", "Bahamas", "Bahrain", "Bangladesh", "Barbados", "Belarus", "Belgium",
                                      "Belize", "Benin", "Bhutan", "Bolivia", "Bosnia and Herzegovina", "Botswana", "Brazil", "Brunei", "Bulgaria",
                                      "Burkina Faso", "Burundi", "Cabo Verde", "Cambodia", "Cameroon", "Canada", "Central African Republic", "Chad",
                                      "Chile", "China", "Colombia", "Comoros", "Congo", "Costa Rica", "Croatia", "Cuba", "Cyprus", "Czechia",
                                      "Denmark", "Djibouti", "Dominica", "Dominican Republic", "East Timor", "Ecuador", "Egypt", "El Salvador",
                                      "Equatorial Guinea", "Eritrea", "Estonia", "Eswatini", "Ethiopia", "Fiji", "Finland", "France", "Gabon", "Gambia",
                                      "Georgia", "Germany", "Ghana", "Greece", "Grenada", "Guatemala", "Guinea", "Guinea-Bissau", "Guyana", "Haiti",
                                      "Honduras", "Hungary", "Iceland", "India", "Indonesia", "Iran", "Iraq", "Ireland", "Israel", "Italy", "Ivory Coast",
                                      "Jamaica", "Japan", "Jordan", "Kazakhstan", "Kenya", "Kiribati", "Korea, North", "Korea, South", "Kosovo",
                                      "Kuwait", "Kyrgyzstan", "Laos", "Latvia", "Lebanon", "Lesotho", "Liberia", "Libya", "Liechtenstein", "Lithuania",
                                      "Luxembourg", "Madagascar", "Malawi", "Malaysia", "Maldives", "Mali", "Malta", "Marshall Islands", "Mauritania",
                                      "Mauritius", "Mexico", "Micronesia", "Moldova", "Monaco", "Mongolia", "Montenegro", "Morocco", "Mozambique",
                                      "Myanmar", "Namibia", "Nauru", "Nepal", "Netherlands", "New Zealand", "Nicaragua", "Niger", "Nigeria", "North Macedonia",
                                      "Norway", "Oman", "Pakistan", "Palau", "Panama", "Papua New Guinea", "Paraguay", "Peru", "Philippines", "Poland",
                                      "Portugal", "Qatar", "Romania", "Russia", "Rwanda", "Saint Kitts and Nevis", "Saint Lucia", "Saint Vincent and the Grenadines",
                                      "Samoa", "San Marino", "Sao Tome and Principe", "Saudi Arabia", "Senegal", "Serbia", "Seychelles", "Sierra Leone",
                                      "Singapore", "Slovakia", "Slovenia", "Solomon Islands", "Somalia", "South Africa", "South Sudan", "Spain", "Sri Lanka",
                                      "Sudan", "Suriname", "Sweden", "Switzerland", "Syria", "Taiwan", "Tajikistan", "Tanzania", "Thailand", "Togo",
                                      "Tonga", "Trinidad and Tobago", "Tunisia", "Turkey", "Turkmenistan", "Tuvalu", "Uganda", "Ukraine", "United Arab Emirates",
                                      "United Kingdom", "United States", "Uruguay", "Uzbekistan", "Vanuatu", "Vatican City", "Venezuela", "Vietnam", "Yemen",
                                      "Zambia", "Zimbabwe"};
std::vector<std::string> zipCodes = {"10001", "20001", "30301", "40001", "50001", "60001", "70001", "80001", "90001",
        "11234", "22345", "33456", "44567", "55678", "66789", "77890", "88901", "90012",
        "12345", "23456", "34567", "45678", "56789", "67890", "78901", "89012", "90123",
        "54321", "65432", "76543"};

namespace faker
{
  namespace location
  {
    std::string random_country()
    {
      int arrSize = static_cast<int>(countries.size());
      int idx = faker::util::get_random_idx(0, arrSize);
      return countries[idx];
    }

    std::string random_zip_code()
    {
     int arrSize = static_cast<int>(zipCodes.size());
      int idx = faker::util::get_random_idx(0, arrSize);
      return zipCodes[idx];
    }

    std::string random_street()
    {
      int arrSize = static_cast<int>(streets.size());
      int idx = faker::util::get_random_idx(0, arrSize);
      return streets[idx];
    }
  }
}