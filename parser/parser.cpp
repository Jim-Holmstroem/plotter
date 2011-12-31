#include "parser.h"

#include <cmath>

#include "constant.h"
#include "variable.h"

parser::parser::parser() {
    _functions = function_container();
        _functions['cos'] = &math::cos;
        _functions['sin'] = &math::sin;
        _functions['tan'] = &math::tan;
        _functions['acos']= &math::acos;
        _functions['asin']= &math::asin;
        _functions['atan']= &math::atan;
        
        _functions['cosh'] = &math::cosh;
        _functions['sinh'] = &math::sinh;
        _functions['tanh'] = &math::tanh;

        _functions['exp'] = &math::exp;
        _functions['log'] = &math::log;
        _functions['log10'] = &math::log10;

        _functions['sqrt'] = &math::sqrt;
        
        _functions['ceil'] = &math::ceil;
        _functions['abs'] = &math::fabs;
        _functions['floor'] = &math::floor;

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
            _binary_ops[2]['%'] = &operators::mod;
        _binary_ops[3] = binary_level();
            _binary_ops[3]['*'] = &operators::mul;
        _binary_ops[4] = binary_level();
            _binary_ops[4]['/'] = &operators::div;
        _binary_ops[5] = binary_level();
            _binary_ops[5]['^'] = &math::pow;

};

parser::iexpression* parser::parser::parse(std::string expr) {
    _expr = expr;
    _pointer = 0;



    return new constant(0);      
};
