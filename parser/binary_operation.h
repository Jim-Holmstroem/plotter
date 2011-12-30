#ifndef PARSER_BINARY_OPERATION
#define PARSER_BINARY_OPERATION

namespace parser {
    
    typedef double(*binary_op)(double,double);
    class binary_operation : iexpression {
    public:
        binary_operation(binary_op op,iexpression left,iexpression right)
        : _op(op)
        , _left(left)
        , _right(right)
        {
        };

    private:
        binary_op _op;
        iexpression _left;
        iexpression _right;

    }; 
    
}

#endif
