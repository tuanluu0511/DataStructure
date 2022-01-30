#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int* p = &a;
    //pointer arithmetic
    printf("%d\n",p); // 204
    printf("%d\n",p+1); //208

    /*
    int a;
    int *p;
    p = &a; // &a = address of a
    a= 10;
    int b=20;
    *p = b; //Assign the value of b to address of a
    printf("a = %d\n", a);//a=10
    *p = 12; //dereferencing : change the value using pointer
    printf("a = %d\n",a); //a=12
    printf("%d\n",p);
    printf("%d\n",*p); //*p - value of address pointed by p
    printf("%d\n",&a);
    */
    return 0;
}
