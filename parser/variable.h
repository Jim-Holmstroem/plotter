#ifndef PARSER_VARIABLE
#define PARSER_VARIABLE

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
