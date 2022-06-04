#pragma once

#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>

template<class iterator, class predicate>
bool all_Of(iterator first, iterator last, const predicate& condition) 
{
    while (first != last) 
    {                                                 
        if (!condition(*first)) return false;                                   
        first++;
    }
    return true;                                                                  
}


template<class iterator, class predicate>
bool one_of(iterator first, iterator last, const predicate& condition) 
{
    int count = 0;
    while (first != last) 
    {
        if (condition(*first)) count++;
        first++;
    }
    if (count == 1) return true;                  
    return false;
}


template<typename iterator, typename element>
iterator find_backward(iterator first, iterator last, const element& specified) 
{ 
    iterator first_last = last;
    for (; last != first;) 
    {           
        last--;
        if (last == specified) return last;
    }
    return first_last;
}
