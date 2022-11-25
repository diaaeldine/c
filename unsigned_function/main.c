#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

uint8_t NByte(uint32_t input, uint8_t byteNum){
        uint8_t ret = (input >> (8*byteNum));
        return ret;
    }

int main()
{


    printf("%d\n", NByte(5120,1));
    return 0;
}
