#include <iostream>

using namespace std;

void swap(int* x, int* y)
{
    int *med0 = x;
    int *med1 = y;
    x = med1;
    y = med0;
}

int main()
{
    //Num1
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    cout << arr1[5] << endl;

    //Num2
    char str1[10] = {'H', 'I', 'E', 'A', 'Z', 'L', 'T', 'L', 'U', 'O'};
    cout << str1[0] << str1[2] << str1[7] << str1[7] << str1[9] << endl;

    //Num3
    char str[6] = "Hello";
    char *numPtr0;
    char *numPtr1;
    char *numPtr2;
    char *numPtr3;
    char *numPtr4;

    numPtr0 = &str[0];
    numPtr1 = numPtr0+1;
    numPtr2 = numPtr0+2;
    numPtr3 = numPtr0+3;

    cout << *numPtr0 << *numPtr1 << *numPtr2 << numPtr3 << endl;

    //Num4
   int a= 10, b = 20;
   cout << a << ", " << b << endl;
   swap(a, b);
   cout << a << ", " << b << endl;

    return 0;
}