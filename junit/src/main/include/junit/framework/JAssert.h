#ifndef JUNIT_FRAMEWORK_JASSERT_H
#define JUNIT_FRAMEWORK_JASSERT_H

#include "jcpp/lang/JObject.h"

using namespace jcpp::lang;

namespace junit{
    namespace framework{
		// @Class(canonicalName="junit.framework.Assert", simpleName="Assert");
        class JCPP_EXPORT JAssert : public JObject{
        	protected:
        		JAssert(JClass* _class);
            
            public:
                static JClass* getClazz();

                static void assertTrue(JString* message, jbool condition);

				static void assertTrue(jbool condition);

				static void assertFalse(JString* message, jbool condition);

				static void assertFalse(jbool condition);
				
				static void fail(JString* message);

				static void fail();

				static void assertEquals(JString* message, JObject* expected, JObject* actual);

				static void assertEquals(JObject* expected, JObject* actual);
				
				static void assertEquals(JString* message, JString* expected, JString* actual);
    
    			static void assertEquals(JString* expected, JString* actual);

				static void assertEquals(JString* message, jdouble expected, jdouble actual, jdouble delta);

				static void assertEquals(jdouble expected, jdouble actual, jdouble delta);
		
				static void assertEquals(JString* message, jfloat expected, jfloat actual, jfloat delta);

				static void assertEquals(jfloat expected, jfloat actual, jfloat delta);

				static void assertEquals(JString* message, jlong expected, jlong actual);

				static void assertEquals(jlong expected, jlong actual);
		
				static void assertEquals(JString* message, jbool expected, jbool actual);

				static void assertEquals(jbool expected, jbool actual);
		
				static void assertEquals(JString* message, jbyte expected, jbyte actual);

				static void assertEquals(jbyte expected, jbyte actual);
				
				static void assertEquals(JString* message, jchar expected, jchar actual);

				static void assertEquals(jchar expected, jchar actual);

				static void assertEquals(JString* message, jshort expected, jshort actual);

				static void assertEquals(jshort expected, jshort actual);
				
				static void assertEquals(JString* message, jint expected, jint actual);

				static void assertEquals(jint expected, jint actual);
				
				static void assertNotNull(JObject* object);

				static void assertNotNull(JString* message, JObject* object);

				static void assertNull(JObject* object);

				static void assertNull(JString* message, JObject* object);

				static void assertSame(JString* message, JObject* expected, JObject* actual);

				static void assertSame(JObject* expected, JObject* actual);
				
				static void assertNotSame(JString* message, JObject* expected, JObject* actual);
				
				static void assertNotSame(JObject* expected, JObject* actual);
				
				static void failSame(JString* message);

				static void failNotSame(JString* message, JObject* expected, JObject* actual);

				static void failNotEquals(JString* message, JObject* expected, JObject* actual);

				static JString* format(JString* message, JObject* expected, JObject* actual);

                virtual ~JAssert();
        };
    }
}
#endif
