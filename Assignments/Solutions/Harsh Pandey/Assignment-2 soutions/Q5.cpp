#include <iostream>
using namespace std;

int main(){
  int array[100], n, i;
  cin >> n;
  
  for (i = 0; i < n; i++)
    cin >> array[i];
    
  for (int i = 0; i < n; i++)
    cout << array[i] << " ";
    
  for (int i = 0; i < n; i++)

    for (int j = i + 1; j < n; j++)
      if (array[i] == array[j]){
        cout<<array[i];
        return 0;
      }

  cout << "No integer repeated\n";
  return 0;
}
