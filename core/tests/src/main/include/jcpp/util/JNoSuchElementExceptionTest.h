#ifndef JCPP_UTIL_JNU_SUCH_ELEMENT_EXCEPTION_TEST_H
#define JCPP_UTIL_JNU_SUCH_ELEMENT_EXCEPTION_TEST_H

#include "jcpp/lang/JString.h"
#include "jcpp/JSerializableTest.h"
#include "junit/framework/JTestCase.h"
#include "junit/framework/JTestSuite.h"
#include "jcpp/io/JObjectInputStream.h"
#include "jcpp/io/JObjectOutputStream.h"

using namespace jcpp::io;
using namespace jcpp;

namespace jcpp{
    namespace util{

        //@Class(canonicalName="jcpp.util.NoSuchElementExceptionTest", simpleName="NoSuchElementExceptionTest");
        class JCPP_EXPORT JNoSuchElementExceptionTest : public JSerializableTest{
        public:
            JNoSuchElementExceptionTest();

            static JClass* getClazz();

            virtual void equals(JObject* reached, JObject* expected);

            virtual JObject* getSerializableObject();

            virtual ~JNoSuchElementExceptionTest();
        };
    }
}
#endif
