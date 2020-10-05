#include <iostream>
#include <memory>
static uint16_t isNum = 0;
static uint16_t noIsNum = 1;
static uint16_t isPlus = 11;
static uint16_t isDiff = 12;
static uint16_t isMul = 13;
static uint16_t isDiv = 14;
static uint16_t isopPar = 31;
static uint16_t isclPar = 32;
int main()
{
    char str[]="3+123*23)()(";
    int len = sizeof(str)/sizeof (str[0])-1;
    std::cout <<len<<std::endl;
    uint16_t sche[len];
    int i=0;
    while (str[i]){
        char n=str[i];
        if(isalnum(str[i])){
            sche[i] = isNum;
        }else{
            switch (n) {
            case '+':
                sche[i] = isPlus;
                break;
            case '-':
                sche[i] = isDiff;
                break;
            case '*':
                sche[i] = isMul;
                break;
            case '/':
                sche[i] = isDiv;
                break;
            case '(':
                sche[i] = isopPar;
                break;
            case ')':
                sche[i] = isclPar;
                break;
            default:
                sche[i] = noIsNum;
                break;
            }
        }
        i++;
    }
    for (uint16_t j = 0; j < len; j++)
        std::cout<<sche[j]<<" ";
    return 0;
}

