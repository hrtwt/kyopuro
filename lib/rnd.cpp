#include <iostream>
#include <random>

using namespace std;
using ll = long long;

int main() {
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uint32_t rnd = mt();
  std::cout << rnd << std::endl;
}
