#include "parser_test.h"

#include <iostream>
#include <string>

#include "parser.h"

int main(int argc,const char* argv[]) {
    parser::parser p = parser::parser();
    std::cout.precision(15);
	
	p.parse(argv[1]);


};
