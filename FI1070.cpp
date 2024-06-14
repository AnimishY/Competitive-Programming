#include <iostream>
#include <vector>

std::vector<int> beautiful_permutation(int n) {
    if (n == 1) {
        return {1};
    }
    if (n == 2 || n == 3) {
        return {};
    }
    
    std::vector<int> result;
    
    // Append even numbers next
    for (int i = 2; i <= n; i += 2) {
        result.push_back(i);
    }
    // Append odd numbers first
    for (int i = 1; i <= n; i += 2) {
        result.push_back(i);
    }
    
    
    return result;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> permutation = beautiful_permutation(n);
    
    if (permutation.empty()) {
        std::cout << "NO SOLUTION" << std::endl;
    } else {
        for (int num : permutation) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
