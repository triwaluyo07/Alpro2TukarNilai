#include "header.h"

int arraycetaknilai(int arr[],int n)
{
    int i = 0;
    while(i<n)
    {
        printf("nilai yg anda dapat adalah = %d \n",arr[i]);
        i++;
    }

}

void tukarnilai(int nilai1,int nilai2)
{
    int temp;
    temp = nilai1;
    nilai1 = nilai2;
    nilai2=temp;

    printf("nilai setelah di tukar \n");
    printf("nilai 1 = %d \n",nilai1);
    printf("nilai 2 = %d \n",nilai2);
}
