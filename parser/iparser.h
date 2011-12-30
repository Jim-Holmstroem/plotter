#ifndef PARSER_IPARSER
#define PARSER_IPARSER

#include <string>

namespace parser {
    

    class iparser {
    public:
        virtual iexpression parse(std::string expr) = 0;

    };

}

#endif
