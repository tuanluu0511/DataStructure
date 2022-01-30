#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1025;
    int *p;
    p=&a;
    printf("%d bytes\n",sizeof(int)); //4 bytes
    printf("%d,%d\n",p,*p); //address: 100, value: 1025 (00000000 00000000 00000100 00000001)
    printf("%d,%d\n",p+1,*(p+1)); //address: 104, value: random
    char *p0;
    p0=(char*)p;//typecasting
    printf("%d bytes\n",sizeof(char)); // 1 byte
    printf("%d, %d\n",p0,*p0); //address: 100, value: 1(take value of smallest byte from p: 00000001)
printf("%d, %d\n",p0+1,*(p0+1);
    /*
    int a = 10;
    int* p = &a;
    //pointer arithmetic
    printf("%d\n",p); // 204
    printf("%d\n",p+1); //208 : size of integer is 4 bytes

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
