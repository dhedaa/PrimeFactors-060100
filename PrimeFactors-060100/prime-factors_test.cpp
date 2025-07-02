#include "gmock/gmock.h"
#include "prime-factors.cpp"
#include <vector>

using std::vector;

TEST(PrimeFactors, of1) {
	PrimeFactors prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}