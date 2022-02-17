#include <iostream>

#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
  auto j = json::parse(R"({"happy": true, "pi": 3.141})");
  std::cout << j["pi"].get<float>() << std::endl;
  return 0;
}
