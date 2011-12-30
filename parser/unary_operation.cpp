double parser_unary_operation::eval(double x) {
    return _op( _left.eval(x) );  
};
