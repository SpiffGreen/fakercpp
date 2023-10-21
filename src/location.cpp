#include <string>
#include <vector>
#include "fakerutil.h"

std::vector<std::string> streets = {"Hello", "dear"};
std::vector<std::string> countries = {"Hello", "dear"};

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
      // return first_name() + ' ' + last_name();
      return "";
    }

    std::string random_street()
    {
      int arrSize = static_cast<int>(streets.size());
      int idx = faker::util::get_random_idx(0, arrSize);
      return streets[idx];
    }
  }
}