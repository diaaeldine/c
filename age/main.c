#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int age;
    printf("Please Enter age: ");
    scanf("%d", &age);
    if ((age>=13) && (age<=19)){
        printf("The boy is a teenager");
    }
    else{
        printf("The boy is not a teenager");
    }
    return 0;
}
