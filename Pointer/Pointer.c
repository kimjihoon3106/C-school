#include <stdio.h>

//2-0
/*int main(void)
{
    int a = 30;
    int* p = NULL;

    printf("a = 30, p =&a일때 \n ");

    p = &a;
    printf("1. 포인터 p의 주소값 : %u\n",p);
    printf("2.포인터가 가리키는 *p의 데이터값 : %u\n",*p);

    printf(" \n*p = 50일때 \n");

    *p = 50;
    printf("1.포인터 p의 주소값 : %u\n",p);
    printf("2.포인터가 가리키는 *p의 데이터값 : %u\n",a);
    return 0;
    
}*/
//2-1
/*int main(void)
{
    int a = 30;
    int *p = NULL;

    printf("a = 30, p = &a일 때\n");

    p = &a;

    printf("1.포인터 p의 조소값 : %u\n", p);
    printf("2.포인터가 가리키는 *p의 데이터값 : %u\n", *p);

    printf(" \n*p = 50\n");

    *p = 50;
    printf("1.포인터 p의 주소값 : %u\n",p);
    printf("2.포인터가 가리키는 *p의 데이터값 : %u\n",a);
    return 0;
}*/
//3-0
/*
#include <stdio.h>

int main(void)
{
    int a = 103;
    int *pa = NULL;

    pa = &a;

    printf("int a = 103;\n");
    printf("int *pa = NULL;\n");
    printf("pa = &a;\n");

    if(pa != NULL){
        printf("pa는 유효한 포인터\n");
        printf("1.포인터 pa의 주소값 : %u\n",*pa);
        printf("2.포인터가 가리키는 *pa의 데이터의값 : %u\n",*pa);
    }
    else
    {
        printf("소스 코드 08행을 / pa = &a; /처럼 주석 처리한 경우\n");
        printf("pa는 유효하지 않은 포인터!\n");
    }
    return 0;
}*/
// 3-1
/*
int main(void)
{
    int a;
    double *pd = NULL;

    pd = &a;
    *pd = 13.8;

    if(pd != NULL)
    {
        printf("pd는 유효한 포인터\n");
        printf("1.포인터 pd의 주소값 : %u\n", pd);
        printf("2.포인터가 가리키는 *pd의 데이터값 : %u\n", *pd);
    }
    else
        printf("pd는 유효하지 않은 포인터\n");

    return 0;
}*/

//4-1
/*
int main(void) {
    int a[] = {1,2,3,4};
    printf("*a = %d \n", *a);
    printf("*(a+1) = %d \n", *(a+1));
    printf("*(a+2) = %d \n",*(a+2));
    return 0;

}*/

//4-2
/*
int main() {
    int a[5] = {100,200,300,400,500};
    for(int i = 0 ; i<5;i++){
        printf("a[%d] 주소 = %p\n",i,&a[i]);
        printf("a[%d] 주소 = %p\n",i,a+1);
        printf("a[%d] 값 = %d\n",i,a[i]);
        printf("a[%d] 값 = %d\n",i,*(a+1));
        printf("\n");
    }
}*/

//4-3
/*
int main() {
    int a[5] = {100,200,300,400,500};
    int* p =a;
    for(int i = 0 ;i<5;i++) {
        printf("a[%d] 주소 = %p\n",i,p+i);
        printf("a[%d] 값 = %d\n",i,*(p+i));
        printf("a[%d] 값 = %d\n",i,p[i]);
        printf("\n");
    }
}*/

// 확인 학습 문제

//7
/*
int main() {
    int a =10, b =20;
    int* pa = &a;
    int* pb = &b;
    int* pt;
    pt = pa;
    pa = pb;
    pb = pt;

    printf("%d %d %d",*pa,*pb,*pt);

}*/

//8-1
/*
void get_sum_diff(int x, int y, int *p_sum, int* p_diff);

int main(void) {
    int sum = 0, diff = 0;
    get_sum_diff(100,200,&sum,&diff);
    printf("합 = %d \n",sum);
    printf("차 = %d \n", diff);
    return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
    *p_sum = x + y;
    *p_diff = x - y;
}*/

//8-2
/*
void get_int(int* px, int* py);

int main(void) {
    int x,y;
    get_int(&x, &y);
    printf("정수의 합은 %d \n",x+y);
    return 0;
}

void get_int(int* px, int* py) {
    printf("2개의 정수를 입력하시오 : ");
    scanf("%d %d",px,py);
}*/
//9
/*
int main(void) {
    int a[5] = { 100, 200, 300, 400, 500};
    int *p = a;
    printf("주소 = %p, 값 = %d\n",p,*p);
    *p++;
    printf("*p++; 후 주소 = %p, 값 = %d\n",p,*p);
    (*p)++;
    printf("(*p)++; 후 주소 = %p, 값 = %d\n",p,*p);
    ++*p;
    printf("++* p; 후 주소 = %p, 값 = %d\n",p,*p);
    *++p;
    printf("*++p' 후 주소 = %p, 값 = %d\n",p,*p);
}*/
//10
/*
int main(void) {
    int arr[] = {100,200,300};
    int* p = arr;
    int value = 0;
    printf("주소 = %u, 값 = %d, value = %d\n", p, *p, value);
    value = *p + 1;
    printf("주소 = %u, 값 = %d, value = %d\n", p, *p, value);
    value = *(p+1);
    printf("주소 = %u, 값 = %d, value = %d\n", p, *p, value);
    value = *p++;
    printf("주소 = %u, 값 = %d, value = %d\n", p, *p, value);
    value = (*p)++;
    printf("주소 = %u, 값 = %d, value = %d\n", p, *p, value);
    value = *++p;
    printf("주소 = %u, 값 = %d, value = %d\n", p, *p, value);
    value = ++*p;
    printf("주소 = %u, 값 = %d, value = %d\n", p, *p, value);
}*/
//11
/*
int main() {
    int a[] = {1,2,3,4,5,6};
    int* p = a;
    int* q= a+3;
    printf("%d\n",*(a+1));
    printf("%d\n",*(p+2));
    printf("%d\n",*(q+1));
    printf("%d\n",p[1]);
}*/
//12
/*
int main() {
    int a[5] = {100,200,300,400,500};
    int* p = a;
    printf("주소 = %d, 값= %d\n",p,*p);
    printf("주소 = %d, 값= %d\n",p+1,*p+1);
    printf("주소 = %d, 값= %d\n",p+1,*(p+1));
}*/
//13
/*
void array_copy(int a[], int b[], int size);
void array_print(int* a, int size);
int array_search(int* a, int size, int search);

int main() {
    int A[10] = {1,5,8,0,2,4,10};
    int B[10] = {0};
    array_copy(A,B,10);
    array_print(B,10);
    printf("개수 : %d\n",array_search(B,10,0));
}

void array_copy(int a[], int b[], int size){
    for(int i = 0 ; i < size ; i++){
        b[i] = a[i];
    }
}
void array_print(int* a, int size) {
    for(int i = 0 ; i < size ; i++){
        printf("%d",a[i]);
    }
}
int array_serach(int* a, int size, int search) {
    int cnt = 0;
    for(int i = 0 ; i < size ; i++){
        if(a[i] == search)
            cnt++;
    }
    return cnt;
}*/