// in this case you can change vector as desired( I think that author wants as to change the elements of this 
// vector) and print it at the same time
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (auto &i : ivec) {
        cout << ((i & 0x1) ? (i *= 2) : i) << " ";
    }
    cout << endl;
    
    return 0;
}
