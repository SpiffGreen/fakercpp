#pragma once

#include <string>
#include <vector>

#ifdef _WIN32
  #define FAKERCPP_EXPORT __declspec(dllexport)
#else
  #define FAKERCPP_EXPORT
#endif

namespace faker {
  namespace location {
    FAKERCPP_EXPORT std::string random_country();
    FAKERCPP_EXPORT std::string random_street();
    FAKERCPP_EXPORT std::string random_zip_code();
  }

  namespace person {
    FAKERCPP_EXPORT std::string first_name();
    FAKERCPP_EXPORT std::string last_name();
    FAKERCPP_EXPORT std::string full_name();
  }
}
