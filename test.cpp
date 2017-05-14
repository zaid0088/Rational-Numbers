#define BOOST_TEST_MODULE mytests
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_SUITE(myunit)

BOOST_AUTO_TEST_CASE(mytest)
{
	// This give a nice output [2+2 != 5]
	BOOST_CHECK_EQUAL(2 + 2, 5);
}

BOOST_AUTO_TEST_CASE(mytest2)
{
	// This give only a custom output
	BOOST_CHECK_MESSAGE(2 + 2 == 5, "comparison error");
}

BOOST_AUTO_TEST_CASE(mytest3)
{
	// Ideally, it should output [2+2 != 5] comparison error
	BOOST_CHECK_EQUAL(2 + 2, 5, "comparison error");
}

BOOST_AUTO_TEST_SUITE_END()