#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << endl;

    int row = 1;

   

    while (row <= n)
    {
        int col = 1;
        
         char ch = 'A' + row -1;

         //here output is function of row 
         //so write it under row portion in variable form
            

        while (col <= row)
        {
          
            cout << ch << " ";
           
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}