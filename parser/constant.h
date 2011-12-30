#ifndef PARSER_CONSTANT
#define PARSER_CONSTANT

namespace parser {

    class constant : iexpression {
    public:
        constant(double c)
        :_c(c)
        {
        };
    
    private:
        double _c;
        
    };

}

#endif
