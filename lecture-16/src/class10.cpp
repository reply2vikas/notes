#include <iostream>

class user {
  int id;
 public:
  user(int id) { this->id = id; }
  int getId(void) { return id; }
};

int main() {
  user u(13);
  std::cout << "u.getId() = " << u.getId() << std::endl;
  return 0;
}
