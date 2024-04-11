#include <iostream>
#include <vector>

using namespace std;

void calculate_pairs(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i += 2)
    {
        // Check if the pair is complete
        if (i + 1 < arr.size())
        {
            cout << "Index " << i + 1 << ": " << arr[i] + arr[i + 1] << endl;
        }
        else
        {
            cout << "Index " << i << ": " << arr[i] << endl;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    calculate_pairs(arr);
    return 0;
}




