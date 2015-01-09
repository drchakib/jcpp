#ifndef JCPP_LANG_JCLONEABLE_H
#define JCPP_LANG_JCLONEABLE_H

#include "jcpp/lang/JInterface.h"

namespace jcpp{
    namespace lang{
        class JClass;

        class JCPP_EXPORT JCloneable : public JInterface{
        public:
            static jcpp::lang::JClass* getClazz();

            virtual ~JCloneable();
        };
    }
}

#endif
