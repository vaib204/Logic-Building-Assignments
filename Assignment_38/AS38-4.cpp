
#include <iostream>
using namespace std;

template<class T>
T Max(T* arr, int isize)
{
    T imax = T(); 

    for(int i = 0; i < isize; i++)
    {
        if(arr[i] > imax)
        {
          imax = arr[i];
        }
    }
    return imax;
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

    iSum = Max(ptr, size);
    cout << "Maximum element is: " << iSum << "\n";

    fptr = new float[size];
    cout << "Enter " << size << " float elements:\n";
    for(icnt = 0; icnt < size; icnt++)
    {
        cin >> fptr[icnt];
    }

    fSum = Max(fptr, size);
    cout << "Maximum element is: " << fSum << "\n";

    delete[] ptr;
    delete[] fptr;

    return 0;
}