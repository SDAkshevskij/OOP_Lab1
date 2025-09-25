#include "solution.h"

std::string swapAB(std::string str){
    std::string res = str;
    for(int i = 0; i < res.length(); i++){
        if(res[i] == 'a') {
            res[i] = 'b';
        }
        else if(res[i] == 'b'){
            res[i] = 'a';
        }
    }
    return res;
}
