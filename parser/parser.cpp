#include "parser.h"

#include <cmath>

#include "constant.h"
#include "variable.h"

parser::parser::parser() {
    
    _functions = function_container();
        _functions["cos"] = &cos;
        _functions["sin"] = &sin;
        _functions["tan"] = &tan;
        _functions["acos"]= &acos;
        _functions["asin"]= &asin;
        _functions["atan"]= &atan;
        
        _functions["cosh"] = &cosh;
        _functions["sinh"] = &sinh;
        _functions["tanh"] = &tanh;

        _functions["exp"] = &exp;
        _functions["log"] = &log;
        _functions["log10"] = &log10;

        _functions["sqrt"] = &sqrt;
        
        _functions["ceil"] = &ceil;
        _functions["abs"] = &fabs;
        _functions["floor"] = &floor;

    _unary_ops = unary_container();
        _unary_ops[5] = unary_level();
            _unary_ops[5]['+'] = &operators::unit;
            _unary_ops[5]['-'] = &operators::neg;
    
    _binary_ops= binary_container();
        _binary_ops[0] = binary_level();
            _binary_ops[0]['>'] = &operators::gt;
            _binary_ops[0]['<'] = &operators::lt;
        _binary_ops[1] = binary_level();
            _binary_ops[1]['+'] = &operators::add;
            _binary_ops[1]['-'] = &operators::sub;
        _binary_ops[2] = binary_level();
            _binary_ops[2]['%'] = &fmod;
        _binary_ops[3] = binary_level();
            _binary_ops[3]['*'] = &operators::mul;
        _binary_ops[4] = binary_level();
            _binary_ops[4]['/'] = &operators::div;
        _binary_ops[5] = binary_level();
            _binary_ops[5]['^'] = &pow;

};

parser::iexpression* parser::parser::parse(std::string expr) {
    _expr = expr;
    _pointer = 0;



    return new constant(0);      
};
