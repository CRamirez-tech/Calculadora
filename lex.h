#ifndef LEX_H
#define LEX_H
#include <memory>

class lex
{
private:
    uint16_t schema;
    int len;
    char str[];
public:
    lex();
    lex(char[]);
};

#endif // LEX_H
