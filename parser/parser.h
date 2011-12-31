#ifndef PARSER_PARSER
#define PARSER_PARSER

#include <string>
#include <vector>
#include <map>

#include "iparser.h"


namespace parser {

    typedef double (*function)(double);
    typedef double (*unary_operator)(double);
    typedef double (*binary_operator)(double,double);

    typedef std::map<std::string,function> function_container; 
    typedef std::map<char,unary_operator> unary_level; 
    typedef std::map<char,binary_operator> binary_level;
    typedef std::map<int,unary_level> unary_container;
    typedef std::map<int,binary_level> binary_container;


    class parser {

    /* EBNF
    *  
    *  plots  = term-(-1),[';',expression-(-1)],'\n'
    *  expression-i = [unary-i],expression-(i+1),[op-(i+1),expression-i] (* -1 is the lower order expression *) (* either unary-(i+1) or op-(i+1), unary (since on the left) has higher priority  *)
    *  term-n = var | num | [function],(,term-(-1),) (* n is the number of the highest order operator *) (* function is operinal and if left out it will be the unit function *)
    * 
    * op-0 = '>' | '<'
    * op-1 = '+' | '-'
    * op-2 = '*' | '/' | '%'
    * op-3 = '^'
    * unary-3 = '+' | '-' | '*' 
    * num = ? all numbers ?
    * var = 'x'
    * function = sin | cos | tan | ? function specified in list ?
    *
    */
        class operators {
            double unit(double x) { return x };
            double neg(double x) { return -x };
        
            double add(double x,double y) { return x+y; };
            double sub(double x,double y) { return x-y; };
            double mul(double x,double y) { return x*y; };
            double div(double x,double y) { return x/y; };
            double mod(double x,double y) { return x%y; };
            
            double gt(double x,double y) { return x>y; };
            double lt(double x,double y) { return x<y; };

        };

    public:
        virtual iexpression* parse(std::string expr);
        
        parser(); 

    protected:
        std::string _expr;

        iexpression* read_expression(int level);

        inline bool is_unary_operator(char token,int level);
        unary_operator read_unary_operator(int level);
        inline bool is_binary_operator(char token,int level);
        binary_operator read_binary_operator(int level);
        
        double read_num();


        int _pointer;
        _functions;
        _unary_ops; //map<level,map<token,operator>>
        _binary_ops;


    };

}

#endif
