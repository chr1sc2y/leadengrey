#pragma once

template<typename T>
void QuickSort(vector<T>& v, int left, int right)
{
    if (left >= right)
        return;
    int mid{ left };
    int& pivot{ v[right] };
    for (int i = left; i < right; ++i)
        if (v[i] < pivot)
            swap(v[i], v[mid++]);
    swap(v[mid], pivot);
    QuickSort(v, left, mid - 1);
    QuickSort(v, mid + 1, right);
}

template<typename T>
void QuickSort(vector<T>& v)
{
    QuickSort(v, 0, static_cast<int>(v.size() - 1));
}

