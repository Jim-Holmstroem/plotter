#ifndef PARSER_UNARY_OPERATION
#define PARSER_UNART_OPERATION

namespace parser {
    
    typedef double(*unary_op)(double);
    class unary_operation {
    public:
        unary_operation(unary_op op, iexpression left)
        : _op(op)
        , _left(left)
        {  
        };
        
    private:
        unary_op _op;
        iexpression _left;
    
    };
    
}

#endif
