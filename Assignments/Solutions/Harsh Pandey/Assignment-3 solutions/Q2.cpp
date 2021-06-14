#include<iostream>
using namespace std;
 
const int M = 3;
const int N = 3;
 
void exchange_c(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Reversal(int arr[M][N])
{
    for (int i = 0; i < M; i++) {
 
        int start = 0;
        int end = N - 1;
 
        while (start < end) {
 
            
            exchange_c(&arr[i][start],
                 &arr[i][end]);
 
            start++;
            end--;
        }
    }
 
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int arr[][3] = { { 1, 2, 3 },
                     { 4, 5, 6 },
                     { 7, 8, 9 } };
 
    Reversal(arr);
    return 0;
}
