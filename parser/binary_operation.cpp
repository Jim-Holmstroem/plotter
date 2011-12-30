double parser::binary_operation:eval(double x) {
    return _op( _left.eval(x), _right.eval(x));    
};
