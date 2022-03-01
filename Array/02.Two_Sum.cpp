/* Problem 2 — Two Sum 
   Given a array of positive integers return the indices of the elements that add upto to the target no.

// Edge Cases:
    1. Are all no's positive or there can be negative no's.
    2. can there be duplicates enteries in the array.

// Approaches:
    1. Brute Force : Two Pointer approach.
                     Start from the first element of the array [Start] and check it with all the enteries of starting from [Start+1]
                     if the no is smaller than already in array if is 
                     then move the item in the array to back and go and check and next item. when we find a no that is less
                     than the input no we stop and put the item in that place.

*/

#include <iostream>
#include <array>
#include <utility>
#include <utility>

std::pair<unsigned int, unsigned int> PerformTwoSumCheck(std::array<unsigned int, 6>& arr, uint32_t target)
{
    uint32_t sum = 0;
    std::pair<unsigned int, unsigned int> pairSum(0, 0);

    for (uint32_t i = 0; i < arr.size()-2; ++i)
    {
        for (uint32_t j = i+1; j < arr.size()-1; ++j)
        {
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                pairSum.first = i;
                pairSum.second = j;
                break;
            }
        }
    }

    return pairSum;
}

int main()
{
    // Initialising the array 
    std::array<unsigned int, 6> arr{1,3,7,9,2};

    if (arr.size() > 2)
    {
        std::cerr << "Array size is not valid for Two sum" << '\n';
        return -1;
    }

    uint32_t  sum;
    std::cout << "Enter the target no of sum" << '\n';
    std::cin >> sum;

    auto pair = PerformTwoSumCheck(arr, sum);

    std::cout << "Indices of the array to match the target sum is" << '\n';
    std::cout << "[" << pair.first << "," << pair.second << "]" << '\n';

    return 0;
}