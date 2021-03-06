#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
int compare(const void* a,const void *b) {
    int A = *((int*)a); //type casting to int* and getting value
    int B= *((int*)b);
    return abs(A)-abs(B);
}

int main() {
    int i, A[] = {-31,22,-1,50,-5,4};
    qsort(A,6,sizeof(int),compare);
    for (i=0;i<6;i++) printf("%d ", A[i]);
}
/*
//Function pointer and call back:
int compare(int a,int b) {
    if(a>b) return 1; //-1 if decrease soft
    return -1;
}
void BubbleSort(int *A,int n,int (*compare)(int,int)) {
    int i,j,temp;
    for(i=0;i<n;i++)
        for(j=0; j<n-1; j++) {
            if(compare(A[j],A[j+1]) > 0) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

int main() {
    int i,A[]={3,2,1,5,6,4};
    BubbleSort(A,6,compare);
    for(i=0;i<6;i++) printf("%d ",A[i]);
}

void A() {
printf("Hello");
}
void B(void (*ptr)()) //function pointer
{
    ptr ();//call-back function that "p" point to
}

int main() {
    //void (*p)()=A;
    //B(p);
    B(A); //A is callback function
}
//Function pointer
int Add(int a,int b) {
return a+b;
}
int *Func(int,int);//declaring a function that would return int*
int (*Func)(int,int);//declaring a function pointer
int main() {
    int c;
    //pointer to function should take
    //(int, int) as argument/parameter and return int
    int (*p)(int,int);
    p=&Add;//or p=Add;
    c=*p(2,3);// or p(2,3)
    printf("%d",c);
}
//Pointer as function return
void PrintHelloWold() {
    printf("Hello World\n");
}
int Add(int* a, int* b) {
int* c = (int*)malloc(sizeof(int));
*c = *a+*b;
return c;
}
int main() {
int a=2,b=4;
int* ptr = Add(&a,&b);
PrintHelloWold();
printf("%d",*ptr);

}
//Pointer and dynamic memories:
int main() {
int a; //goes on stack
int *p;
p=(int*)malloc(sizeof(int));//Take 4 bytes on heap and assign address to p
*p=10;//Store value in heap
free(p);
p=(int*)malloc(20*sizeof(int));//Take memory for array

}
//Pointers and multi-dimensional arrays
void Func(int (*A)[2][2]) {
//or A[][2][2]
}
int main() {
    int C[3][2][2] = {{{2,5},{7,9}},
    {{3,4},{6,1}},
    {{0,8},{11,13}}
    };
    printf("%d %d %d %d\n",C,*C, C[0],&C[0][0]);
    printf("%d\n",*(C[0][0]+1));//5

}
//Character arrays and pointers

void print(char* C) {
    //We can pass "const char* C" to not allowed to change the input array
    //int i=0;
    //while(*(C+i)!= '\0') {
    //  printf("%c",C[i]); //*(C+i) = C[i]
    // i++
    //}
    while(*C != '\0') {
        printf("%c",*C);
        C++;
    }
    printf("\n");//Print all the character in the array
}

int main() {
    char C[20] = "Hello";//String get stored in the space for array
    //char *C ="Hello"; same result but cant modify element in array
    //C[0]=A;
    print(C);
}
int main() {
//char A[5];
//A[0]= 'J';
//A[1]= 'O';
//A[2]= 'N';
//A[3]= 'H';
//A[4]= '\0';
//char A[] = "JOHN";
char A[5] = {'J','O','N','H','\0'}; //Same as above 2
int len = strlen(A);
printf("%d\n",len);//4
printf("%s",A); //JOHN
}

//Arrays as function arguments
int SumOfElement (int* A,int size) {
    int sum=0;
    for(int i=0;i<size;i++) {
        sum += A[i]; //A[i] is *(A+i)
    }
    return sum;
}

void Double(int* A, int size) {
int i;
for(i=0;i<size;i++) {
    A[i] = 2*A[i];
}
}

int main() {
    int A[] = { 1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElement(A,size);//A can be used for &A[0]
    printf("Total: %d\n",total);//15

    Double(A,size);
    for(int i=0;i<size;i++) {
        printf("%d",A[i]);//2 4 6 8 10
    }
    }
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
  //Pointer as function argument - Call by reference
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
