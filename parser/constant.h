#ifndef PARSER_CONSTANT
#define PARSER_CONSTANT

#include "iexpression.h"

namespace parser {

    class constant : public iexpression {
    public:
        constant(double c)
        :_c(c)
        {
        };
        virtual double eval(double x) const;
    
    private:
        double _c;
        
    };

}

#endif
