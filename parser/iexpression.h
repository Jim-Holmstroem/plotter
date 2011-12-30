#ifndef PARSER_IEXPRESSION
#define PARSER_IEXPRESSION

namespace parser {
    
    class iexpression {   
    public:
        virtual double eval(double x) const = 0;

    };

}


#endif
