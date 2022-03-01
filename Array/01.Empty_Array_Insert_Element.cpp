/* Problem 1 — Given a sorted array of positive integers with an empty spot at the end, insert an element in sorted order.

// Edge Cases:
    1. Can we have duplicate no's.

// Approaches:
    1. Brute Force : Start from the end of the array and check if the no is smaller than already in array if is 
                     then move the item in the array to back and go and check and next item. when we find a no that is less
                     than the input no we stop and put the item in that place.

*/

#include <iostream>
#include <array>
#include <utility>

void PerformCheck(std::array<unsigned int, 6>& arr, uint32_t num)
{

    for (int i = arr.size()-2; i > -1; --i)
    {
        if (arr[i] > num)
        {
            // then shift the existing array item to back.
            arr[i+1] = arr[i];
        }
        else
        {
            arr[i + 1] = num;
            break;
        }
    }
}

int main()
{
    // Initialising the array 
    std::array<unsigned int, 6> arr{1,4,7,8,9};

    uint32_t  num;
    std::cout << "Enter the no to insert" << '\n';
    std::cin >> num;

    PerformCheck(arr, num);

    std::cout << "Final sorted array is" << '\n';
    for(unsigned int i=0; i < arr.size()-1; ++i)
    {
        std::cout << arr[i] << ', ';
    }
}