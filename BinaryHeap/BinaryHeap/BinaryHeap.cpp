/********************************************************************
 *
 * This file is part of the Data structures and algorithms in C++ package
 *
 * Author: Atanas Semerdzhiev
 * URL: https://github.com/semerdzhiev/sdp-samples
 *
 */
#include "BinaryHeap.h"

#include <iostream>

int main()
{
    size_t sampleSize = 0;
    std::cout << "Enter sample size: ";
    std::cin >> sampleSize;


    std::cout << "\nSample: ";
    std::vector<int> sample;
    for (size_t i = 0; i < sampleSize; ++i)
    {
        sample.push_back(rand() % 1000);
        std::cout << sample.back() << "; ";
    }


    std::cout << "\n\nFilling a max heap and a min heap with the sample...";
    BinaryHeap<int> minHeap;
    BinaryHeap<int, std::greater<int>> maxHeap;

    for (auto it = sample.cbegin(); it != sample.cend(); ++it)
    {
        minHeap.Insert(*it);
        maxHeap.Insert(*it);
    }


    std::cout << "\n\nElements in ascending order:\n\t";
    for ( ;!minHeap.Empty(); minHeap.Extract())
        std::cout << minHeap.Top() << "; ";


    std::cout << "\n\nElements in descending order:\n\t";
    for (; !maxHeap.Empty(); maxHeap.Extract())
        std::cout << maxHeap.Top() << "; ";

    std::cout << "\n";

    return 0;
}

