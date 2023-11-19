#include <stdio.h>

int areaofRect(int length, int breadth){


    int area;
    area = length * breadth;
    return area;
}
int main(){

int area = areaofRect(2, 3);
printf("%d", area);

}