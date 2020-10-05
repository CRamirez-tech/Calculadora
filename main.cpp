#include <iostream>
#include <memory>
static uint16_t isNum = 0;
static uint16_t isPoint = 1;
static uint16_t isPlus = 10;
static uint16_t isDiff = 11;
static uint16_t isMul = 12;
static uint16_t isDiv = 13;
static uint16_t isopPar = 31;
static uint16_t isclPar = 32;
static uint16_t noIsNum = 99;
int main()
{
    char str[]="3+123*23)()(";
    int len = sizeof(str)/sizeof (str[0])-1;

    std::cout <<len<<std::endl;
    uint16_t schema[len];

    int i=0;
    while (str[i]){
        char n=str[i];
        if(isalnum(str[i])){
            schema[i] = isNum;
        }else{
            switch (n) {
            case '+':
                schema[i] = isPlus;
                break;
            case '-':
                schema[i] = isDiff;
                break;
            case '*':
                schema[i] = isMul;
                break;
            case '/':
                schema[i] = isDiv;
                break;
            case '(':
                schema[i] = isopPar;
                break;
            case ')':
                schema[i] = isclPar;
                break;
            default:
                schema[i] = noIsNum;
                break;
            }
        }
        i++;
    }
    return 0;
}


