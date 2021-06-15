#include <iostream>
#include <string>

using namespace std;

int i;
int j;
string x;
string y;

int main()
{   
            
        
        cout << "\n Enter a word \n";
        getline (cin, x);
        
        cout << "\n Enter another word \n";
        getline (cin, y);
        
        int z = x.length();
        int w = y.length();
        
    
        for (i = 0; i < z; ++i)
        {
            for (j = 0; j < w; ++j)
            {
                if(x[i] == y[j])
                { 
                   x.erase (i,1); 
                }
            }
        }
   
        cout << "Result:" << x << "\n";
     
        
        return 0;
}
