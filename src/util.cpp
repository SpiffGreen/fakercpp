#include <random>
#include <ctime>
#include "fakerutil.h"

std::mt19937 rng(std::time(nullptr));

namespace faker
{
  namespace util
  {
    int get_random_idx(int lowerBound, int upperBound)
    {
      std::uniform_int_distribution<int> distribution(lowerBound, upperBound - 1);
      int randomIndex = distribution(rng);
      return randomIndex;
    }
  }
}