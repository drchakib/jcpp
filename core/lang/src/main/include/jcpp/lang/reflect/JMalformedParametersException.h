#ifndef JCPP_LANG_REFLECT_JMALFORMED_PARAMETERS_EXCEPTION_H
#define JCPP_LANG_REFLECT_JMALFORMED_PARAMETERS_EXCEPTION_H

#include "jcpp/lang/JRuntimeException.h"
#include "jcpp/lang/JClass.h"

namespace jcpp{
    namespace lang{
    	namespace reflect{
	        class JCPP_EXPORT JMalformedParametersException : public JRuntimeException{
	        public:
	            JMalformedParametersException();

	            JMalformedParametersException(JString* message);

	            static jcpp::lang::JClass* getClazz();

	            virtual ~JMalformedParametersException();
	        };
	    }
    }
}

#endif
