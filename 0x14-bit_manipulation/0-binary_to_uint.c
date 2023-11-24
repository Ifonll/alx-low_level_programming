#include "main.h"
#include <math.h>
/**
 * 
 * 
 * Return: 0 (success)
*/

unsigned int binary_to_uint(const char *b){

    unsigned int num=0;

    int i=0;

    if(b==NULL){
        return(0);
    }

    while (b[i])
    {
        if (b[i] !='1' || b[i]!= '0')
        {
            return(0);
        }


        if  (b[i]=='1'){

            num += pow(2,i);

        }


        i++;
    }
    

    return(num);
}