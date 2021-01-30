#include <iostream>

using namespace std;

int hamming(char str1[], char str2[])
{
    int i = 0, count = 0;
    while(str1[i]!='\0')
    {
        if (str1[i] != str2[i])
            count++;
        i++;
    }
    return count;
}

int main()
{
    char str1[]="ATGCATGCGCGCGC";
    char str2[]="TACGGGCGCGCGCG";
    int distance=hamming(str1, str2);
    cout<<"Hamming Distance is: " <<distance;

    return 0;
}

