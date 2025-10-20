// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
// count letters
#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    scanf("%s", a);
    // scanf can get the string input until it gets any space, newline or tab
    // gets(variableName) can full string inputs
    int n = strlen(a); // getting the index of the string

    // use frequency array
    int arr[n - 1];
    int f[n];
    for (int i = 0; i <= n; i++)
        f[i] = 0; // manually initialize all the values as 0

    /*
    n = the array length we will be input as number
    arr[n-1] will have space for 0 to last letter
    f[n] will have 0 to last letter

    max frequency array size = 10^6 - 10^7
    if it's more then that we will use map in future in stl module
    */

    // setting the frequency array
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
        f[arr[i]]++;
    }

    // output
    for (int i = 1; i <= n; i++)
    {
        printf("%c : %d\n", a[i], f[arr[i]]);
    }

    // ------my approach before seeing the lecture
    // convert to asci
    // sort
    // int temp;
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (temp == a[i])
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         // convert temp into letter
    //         // char letter =;
    //         // printf("%c : %d",letter,count) ;
    //     }
    // }

    return 0;
}