#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int x, y, z;
printf("Enter three integers: ");
scanf("%d%d%d", &x, &y, &z);
if(x>y && x>z){
    printf("%d", x);
}else if(y>x && y>z){
    printf("%d", y);
}else{printf("Maximum integer is %d", z);}
    return 0;
}
