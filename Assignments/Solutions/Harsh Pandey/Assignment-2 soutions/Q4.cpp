#include<iostream>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far,INT_MIN, rand_max_end = 0;
    max_so_far = INT_MIN;
 
    for (int i = 0; i < size; i++)
    {
        rand_max_end = rand_max_end + a[i];
        if (max_so_far < rand_max_end)
            max_so_far = rand_max_end;
 
        if (rand_max_end < 0)
            rand_max_end = 0;
    }
    return max_so_far;
}
 

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout<< max_sum;
    return 0;
}
