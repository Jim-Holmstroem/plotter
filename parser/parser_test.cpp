#include "parser_test.h"

#include <iostream>
#include <string>

#include "parser.h"

int main(int argc,const char* argv[]) {
    parser::parser p = parser::parser();
    p.parse(argv[1]);
    std::cout << argv[1] << std::endl;

};
