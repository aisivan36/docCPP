#include <iostream>
#include <vector>

template <typename T> class YourClass {
private:
  std::string name;
  T value;

public:
  YourClass(std::string name, T value) : name{name}, value{value} {}
  std::string get_name() const { return name; }
  T get_value() const { return value; }
};

template <typename T1, typename T2> struct Device_Pair {
  T1 first;
  T2 second;
};

int main() {

  YourClass<int> object1{"Ivan", 100};
  std::cout << object1.get_name() << " " << object1.get_value() << '\n';

  YourClass<std::string> object2{"Ivan", "Developer"};
  std::cout << object2.get_name() << " " << object2.get_value() << '\n';

  YourClass<YourClass<std::string>> object3{"Ivan", {"C++", " Developer"}};
  std::cout << object3.get_name() << " " << object3.get_value().get_name()
            << object3.get_value().get_value() << '\n';

  std::cout << "\n==========Vector=========" << std::endl;
  std::vector<YourClass<double>> vec{};
  vec.push_back(YourClass<double>("John", 1000.0));
  vec.push_back(YourClass<double>("Unamed", 2000.0));
  vec.push_back(YourClass<double>("Ivan", 3000.0));

  for (const auto &obj : vec) {
    std::cout << obj.get_name() << " " << obj.get_value() << '\n';
  }

  std::cout << "\n===========Struct Device-Pair==========" << '\n';
  Device_Pair<std::string, int> p1{"Ivan", 100};
  Device_Pair<int, double> p2{124, 45.67};

  std::cout << p1.first << ", " << p1.second << '\n';
  std::cout << p2.first << ", " << p2.second << '\n';

  return 0;
}