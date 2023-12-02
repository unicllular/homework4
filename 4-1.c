#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int x, y, z;
printf("Enter the length of the sides: ");
scanf("%d%d%d", &x, &y, &z);
if(x>y && x>z){
    if(y*y + z*z == x*x){
        printf("YES");
    }else{printf("NO");}
}
if(y>x && y>z){
    if(x*x + z*z == y*y){
        printf("YES");
    }else{printf("NO");}
}
if(z>x && z>y){
    if(x*x + y*y == z*z){
        printf("YES");
    }else{printf("NO");}
}
    return 0;
}
