# include <iostream>
using namespace std;
 
int main()
{
    int i,arr[10],n;
    cin>>n;
    
    for (i = 0; i < n; i++){
        cin>>arr[i];
        
    }
 

    for (i = 0; i < n; i++){
        cout << arr[i] << ' ';
    
        
    }
    int x = arr[n - 1];
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
    arr[0] = x;
 

    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    return 0;
}
