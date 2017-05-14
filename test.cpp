#include <sstream>

#define private public

#include "rational.h"
#include <iostream>
using namespace std;

#ifndef BOOST_TEST_MODULE
#define BOOST_TEST_MODULE RationalTestSuite
#endif 

#ifndef BOOST_INCLUDED_UNIT_TEST_FRAMEWORK_HPP_071894GER
#include <boost/test/included/unit_test.hpp>
#endif

BOOST_AUTO_TEST_SUITE(RationalTestSuite)

		BOOST_AUTO_TEST_CASE(testDefaultConstructor)
		{
			Rational num1(2, 3), num2(2, 3);
			BOOST_CHECK_EQUAL(num1.num, num2.num);
			BOOST_CHECK_EQUAL(num1.denom, num2.denom);
	}


			BOOST_AUTO_TEST_CASE(addRational)
			{
				Rational num1(2, 4);
				cout << num1 << endl;
				Rational num2(1, 4);
				cout << num2 << endl;
				Rational result(3, 4);
				cout << result;
				Rational sum = num1 + num2;
				cout << sum << endl;
				BOOST_CHECK_EQUAL(sum.num, result.num);
				BOOST_CHECK_EQUAL(sum.denom, result.denom);

				cout << endl;
				

			}

			

			BOOST_AUTO_TEST_CASE(subRational)
			{
				Rational num1(1, 3);
				cout << num1 << endl;
				Rational num2(1, 6);
				cout << num2 << endl;
				Rational result(1, 6);
				cout << result << endl;
				Rational sub = num1 - num2;
				cout << sub << endl;
				BOOST_CHECK_EQUAL(sub.num, result.num);
				BOOST_CHECK_EQUAL(sub.denom, result.denom);

				cout << endl;
			}

			BOOST_AUTO_TEST_CASE(mulRational)
			{
				Rational num1(1, 3);
				cout << num1 << endl;
				Rational num2(1, 3);
				cout << num2 << endl;
				Rational result(1, 9); 
				cout << result << endl;
				Rational mul = num1 * num2;
				cout << mul << endl;
				BOOST_CHECK_EQUAL(mul.num, result.num);
				BOOST_CHECK_EQUAL(mul.denom, result.denom);
				cout << endl;
			}

			BOOST_AUTO_TEST_CASE(divideRational)
			{
				Rational num1(1, 3);
				cout << num1 << endl;
				Rational num2(1, 3);
				cout << num2 << endl;
				Rational result(1, 1);
				cout << result << endl;
				Rational div = num1 / num2;
				cout << div << endl;
				BOOST_CHECK_EQUAL(div.num, result.num);
				BOOST_CHECK_EQUAL(div.denom, result.denom);
				cout << endl;
			}



			


		
BOOST_AUTO_TEST_SUITE_END()




