#include <stdio.h>
#include <stdlib.h>
    //Pointers & Arrays
    int main() {
    int A[] = { 2,4,5,8,1};
    int i;
    int *p=A;
    p++; //Cant use A++
    for(i=0;i<5;i++)
    {
        printf("Address = %d\n", A+i);//Address of 1st element
        printf("Address = %d\n", &A[i]);//address
        printf("Value = %d\n", *(A+i));//Value
        printf("Value = %d\n", A[i]);//Value
    }
    }
/*  //Pointer as function argument - Call by reference
    void Increment(int *p) {
        *p=*p+1;
    }
int main()
{
    int a;
    a = 10;
    Increment(&a);//call by reference
    printf("%d\n",a); */
    /*
    int x =5;
    int* p = &x; //store address of x in p
    *p = 6;//reassign value of x
    int **q = &p; //assign address of p in q
    int ***r = &q; //assign address of q in r
    printf("%d\n",p); //address x
    printf("%d\n",*p); //6 value of x
    printf("%d\n",*q); //value stored in q(value of p = address of x)
    printf("%d\n",**q); // 6 (value of value store in q)
    printf("%d\n",**r); // r = address of q,*r = value store in address q(address of p)
    printf("%d\n",***r); // 6
    ***r=10; //Reassign value at address of x(value of x)
    printf("%d\n",x); //10
    **q = *p+2; //12 p stored address x, *p mean value of address x => x+2 =10;
    printf("%d\n",x);
    //Pointer types, pointer arithmetic
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
    printf("%d, %d\n",p0+1,*(p0+1));//address: 101, value: 4 (00000100 from p)
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
    return 0;
}
    */
