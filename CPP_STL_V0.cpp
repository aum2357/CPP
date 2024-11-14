#include <bits/stdc++.h>

using namespace std;

int main()
{
    /********************** std::sort (first, last, comp); ***********************************
    
        How std::sort Works?

    In C++, std::sort() function is implemented using the Intro Sort Algorithm. It is the combination of three standard sorting algorithms: insertion sort, quick sort and heap sort. It is designed to choose the best algorithm that fits the given case. Overall,

      1)  For small dataset, it uses insertion sort.
      2) It uses quicksort for large data set.
      3) For those data on which the quicksort recursion depth goes over the specified limit, it switches to heap sort.

    ---------------- Complexity Analysis of std::sort()-------------------------

    The std::sort() gives the average time complexity of O(n log n) where n is the number of elements in the range.

    The auxiliary space required by the function is O(log n) on average.
    */
    vector<int> vec = {8, 9, 4, 1, 3, 2, 6, 7, 5, 0};

    sort(vec.begin(), vec.end());

    for (auto i : vec)
    {
        cout << i << " "; // Output: 0 1 2 3 4 5 6 7 8 9
    }

    // sort in descending order using comparator function
    sort(vec.begin(), vec.end(), greater<int>());

    cout << "\nDescending order: ";
    for (auto i : vec)
    {
        cout << i << " "; // Output: 9 8 7 6 5 4 3 2 1 0
    }

    // sort in descending order using lambda function
    auto comp = [](int a, int b)
    { return a > b; };
    sort(vec.begin(), vec.end(), comp);

    cout << "\nDescending order using lambda function: ";
    for (auto i : vec)
    {
        cout << i << " "; // Output: 9 8 7 6 5 4 3 2 1 0
    }
    //*******************************************************************************
    reverse(vec.begin(), vec.end()); // reverse the vector

    int mx = *max_element(vec.begin(), vec.end()); // prints max element
    int mn = *min_element(vec.begin(), vec.end()); // prints min element

    //accumulate(first_iterator, last_iterator, initial-val of sum)– Does the summation of vector elements
    int n = accumulate(vec.begin(), vec.end(),0);
    
    // count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
    int count_of_3 = count(vec.begin(), vec.end(), 3);

    //find(first_iterator,last_iterator,x) -returns first occurrence of x if found otherwise last address of vector
    find(vec.begin(), vec.end(),5) != vec.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";
    
    // binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.
    bool found = binary_search(vec.begin(), vec.end(),2);

    //arr.erase(position to be deleted)–This erases selected element in vector and shifts and resizes the vector elements accordingly.
    
    vec.erase(find(vec.begin(),vec.end(),10));

    //arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.
    vec.erase(unique(vec.begin(), vec.end()),
               vec.end());

    
    return 0;
}
