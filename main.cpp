#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> array = { 3, -2, 5, -8, 4, 7, -6, 9 };

   
    double negative_sum = 0;
    for (double element : array) {
        if (element < 0) {
            negative_sum += element;
        }
    }

  
    double min_element = array[0];
    double max_element = array[0];
    for (double element : array) {
        if (element < min_element) {
            min_element = element;
        }
        if (element > max_element) {
            max_element = element;
        }
    }

    
    bool found_min = false;
    double product = 1;
    for (double element : array) {
        if (element == min_element) {
            found_min = true;
        }
        else if (element == max_element) {
            break;
        }
        else if (found_min) {
            product *= element;
        }
    }

   
    double even_index_product = 1;
    for (int i = 0; i < array.size(); i += 2) {
        even_index_product *= array[i];
    }

   
    int first_negative_index = -1;
    int last_negative_index = -1;
    double sum_between_negatives = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] < 0) {
            if (first_negative_index == -1) {
                first_negative_index = i;
            }
            last_negative_index = i;
        }
    }

    if (first_negative_index != -1 && last_negative_index != -1) {
        for (int i = first_negative_index + 1; i < last_negative_index; i++) {
            sum_between_negatives += array[i];
        }
    }

    
    cout << "Sum of negative elements: " << negative_sum << endl;
    cout << "Product between min and max: " << product << endl;
    cout << "Product of even-indexed elements: " << even_index_product << endl;
    cout << "Sum of elements between first and last negative elements: " << sum_between_negatives << endl;

    return 0;
}