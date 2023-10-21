#pragma once

#ifdef _WIN32
  #define FAKERCPP_EXPORT __declspec(dllexport)
#else
  #define FAKERCPP_EXPORT
#endif


namespace faker
{
  namespace util {
    FAKERCPP_EXPORT int get_random_idx(int lowerBound, int upperBound);
  }
} // namespace faker

