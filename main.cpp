#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void add(int arg1, int arg2, vector<long long>& vec_summas, int k) {
    
}

int main() {
    int n;
    cin >> n;
    vector <int> sequence (n);
    int vec_summas_size = sqrt(n);
    vector <long long> vec_summas((n + vec_summas_size - 1) / vec_summas_size);
    int counter = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int in_data;
        cin >> in_data;
        sequence[i] = in_data;
        sum += in_data;
        if ((i + 1) % vec_summas_size == 0) {
            vec_summas[(i + 1) / vec_summas_size - 1] = sum;
            sum = 0;
        }
    }
    if (sum != 0) {
        vec_summas[(n + vec_summas_size - 1) / vec_summas_size - 1] = sum;
    }
    for (int i = 0; i < vec_summas.size(); i++) {
        cout << vec_summas[i] << "\t";
    }

    int q;
    cin >> q;
    vector <long long> results (q);
    for (size_t i = 0; i < q; i++) {
        int arg1, arg2;
        string in;
        cin >> in >> arg1 >> arg2;
        if (in == "Add") {
            
        }
        
    }
    
    for

    return 0;
}
