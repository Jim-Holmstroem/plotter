#ifndef PARSER_CONSTANT
#define PARSER_CONSTANT

#include "iexpression.h"

namespace parser {
    
    class variable : public iexpression {
    public:
        variable()
        {
        };
        virtual double eval(double x) const;
    private:
        
    };
}

#endif
