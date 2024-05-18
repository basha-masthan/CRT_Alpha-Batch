#include <stdio.h>

enum day{
    sun,min=2,tue,wed,thu,fri=101,sat
};

void main(){
    enum day d1,d2,d3;
    d1=sun;d2=wed;d3=sat;
    printf("%d %d %d",d1,d2,d3);
}