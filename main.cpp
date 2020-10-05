#include <iostream>

int main()
{
    char str[]="3+123*23";
    int i=0;
    while (str[i]){
        if(isalnum(str[i])){
            std::cout << "Is alpha"<<std::endl;
        }else{
            std::cout << "Not is alpha"<<std::endl;
        }
        i++;
    }
    return 0;
}

