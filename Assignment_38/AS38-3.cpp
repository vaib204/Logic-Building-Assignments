
#include <iostream>
using namespace std;

template<class T>
T AddN(T* arr, int isize)
{
    T isum = T(); 

    for(int i = 0; i < isize; i++)
    {
        isum = isum + arr[i];
    }
    return isum;
}

int main()
{
    int* ptr = nullptr;
    float* fptr = nullptr;
    int size = 0, icnt = 0, iSum = 0;
    float fSum = 0.0f;

    cout << "Enter the number of elements:\n";
    cin >> size;

    ptr = new int[size];
    cout << "Enter " << size << " integer elements:\n";
    for(icnt = 0; icnt < size; icnt++)
    {
        cin >> ptr[icnt];
    }

    iSum = AddN(ptr, size);
    cout << "Integer addition is: " << iSum << "\n";

    fptr = new float[size];
    cout << "Enter " << size << " float elements:\n";
    for(icnt = 0; icnt < size; icnt++)
    {
        cin >> fptr[icnt];
    }

    fSum = AddN(fptr, size);
    cout << "Float addition is: " << fSum << "\n";

    delete[] ptr;
    delete[] fptr;

    return 0;
}