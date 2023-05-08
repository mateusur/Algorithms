#include <array>
#include <iostream>
#include <vector>

template<typename Container>
void PrintVector(const Container &c) {
    for (const int &i: c) {
        std::cout << i << ' ';
    }
}

template<size_t size>
void InsertionSort(std::array<int, size> &input) {
    for (int i = 1; i < input.size(); ++i) {
        int key = input[i];
        int j = i - 1;
        while (j >= 0 && input[j] > key) {
            input[j + 1] = input[j];
            j = j - 1;
        }
        input[j + 1] = key;
    }

}

int main() {
    std::array<int, 6> input{5, 2, 4, 6, 1, 3};
    InsertionSort<6>(input);
    PrintVector<std::array<int, input.size()>>(input);
    return 0;
}
