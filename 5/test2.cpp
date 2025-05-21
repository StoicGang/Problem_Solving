#include <iostream>
using namespace std;

int main()
{
    int n{0};
    cout << "Enter the value of n: ";
    cin >> n;

    // Test 1
    //  for(int i{0}; i<=n; i++){
    //      cout<< i <<" ";
    //      i++;
    //  }
    //  2 4 6 ...

    // Test 2
    //  for(int i{0}; i<=n; i--){
    //      cout<<i <<" ";
    //      i++;
    //  }
    // Infinite loop which will print 0

    // Test 3
    //  for(int i{0}; i<=n; i +=2){
    //      cout<<i<<" ";
    //      if( i&1 ){
    //          continue;
    //      }
    //      i++;
    //  }
    //  0 3 5

    // Test 4
    //  for (int i{0}; i<n; i++)
    //  {
    //      for(int j=i; j<=n; j++){
    //          cout<<i<<" "<<j<<endl;
    //      }
    //  }
    //(0 0) (0 1) (0 2) .. (4 4) (4 5)

    // Test 5
    for (int i{0}; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i + j == (2 * n))
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }

    return 0;
}