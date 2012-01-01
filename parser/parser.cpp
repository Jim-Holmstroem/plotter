#include "parser.h"

#include <iostream>
#include <algorithm>
#include <cmath>
#include <sstream>

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

bool parser::parser::is_space(char c) {
    return std::isspace(c,std::locale(""));
};

bool parser::parser::is_number(char c) {
    return ( ((int)c) >=48 && ((int)c) <=57 );
};

double parser::parser::read_number() {
    std::string::iterator start = _at;
    
    while(is_number(*_at)||(*_at=='.'))
        ++_at;

    double number;
    std::stringstream ss;
    ss.setf(std::ios::fixed,std::ios::floatfield); 
    ss.str(std::string(start,_at));
    ss>>number; //the error will be thrown from here, the count will only be valid if this error is not thrown
    
    return number;
};

parser::unary_operator parser::parser::read_unary_operator(int level) {
   return NULL; 
};

parser::binary_operator parser::parser::read_binary_operator(int level) {
    return NULL;
};

parser::iexpression* parser::parser::read_expression(int level) {
    return NULL;
};

parser::iexpression* parser::parser::parse(const std::string expr) {
    _expr = expr;
    _at = _expr.begin();

    //preprocessing HACK,erase is for cleanup
    _expr.erase(std::remove_if(_expr.begin(),_expr.end(),&isspace),_expr.end());




    return NULL;
};
