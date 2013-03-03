#ifndef C_BOX_CPPUNIT_H
#define C_BOX_CPPUNIT_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

/**
 * @brief Тестирующий класс для класса cBox
 **/
class cBox_CPPUnit: public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE( cBox_CPPUnit );
	CPPUNIT_TEST( test_1x1x1_volume );
	CPPUNIT_TEST( test_minus5_height );
	CPPUNIT_TEST( test_0_volume_exception );
	CPPUNIT_TEST( test_reset_params );
	CPPUNIT_TEST( test_constructor );
	CPPUNIT_TEST_SUITE_END();
public:
	void test_1x1x1_volume();
	void test_minus5_height();
	void test_0_volume_exception();
	void test_reset_params();
	void test_constructor();
};

#endif /* C_BOX_CPPUNIT_H */