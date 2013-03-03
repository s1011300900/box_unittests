#ifndef C_BOX_CPPUNIT_H
#define C_BOX_CPPUNIT_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class cBox_CPPUnit: public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE( cBox_CPPUnit );
	CPPUNIT_TEST( test_0x0x0_volume );
	CPPUNIT_TEST( test_minus1_height );
	CPPUNIT_TEST_SUITE_END();
public:
	void test_0x0x0_volume();
	void test_minus1_height();
};

#endif /* C_BOX_CPPUNIT_H */