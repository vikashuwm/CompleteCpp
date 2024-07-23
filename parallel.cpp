#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
using namespace std;

void rangeSum(std::vector<int>& vec, int start, int end, int& sum, mutex& m) {
    // Ensure start and end indices are within bounds
    if (start < 0 || start >= vec.size() || end < 0 || end > vec.size() || start > end) {
        throw std::invalid_argument("Invalid range");
    }
    
    // Use std::reduce with iterators adjusted for the range
    /*
    m.lock();
    sum += std::reduce(vec.begin() + start, vec.begin() + end, 0);
    m.unlock();
    */
    std::lock_guard<std::mutex> lock(m);
    sum += std::reduce(vec.begin() + start, vec.begin() + end, 0);
}

void threadFunction(int id) {
    std::cout << "Thread ID: " << id << std::endl;
}

int main() {
    std::vector<std::thread> threads;

    // Create three threads and store them in the vector
    for (int i = 0; i < 3; ++i) {
        threads.emplace_back(threadFunction, i);
    }

    // Join all threads
    for (auto& t: threads) {
        t.join();
    }

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Example usage of rangeSum with threads
    int sum = 0;
    mutex m;
    std::thread t1(rangeSum, std::ref(vec), 0, 5, std::ref(sum), ref(m));
    std::thread t2(rangeSum, std::ref(vec), 5, 10, std::ref(sum), ref(m));
    
    t1.join();
    t2.join();


    std::cout << "Sum: " << sum << std::endl;

    return 0;
}