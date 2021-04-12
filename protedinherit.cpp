#include <iostream>
#include <string>

class Job {
protected:
  std::string skill;
};

class Person : public Job {
public:
  std::string status;
  void setJob(std::string j) { skill = j; }
  std::string getJob() { return skill; }
};

int main() {
  Person TheJob;
  TheJob.setJob("Rust");
  TheJob.status = "Leader";

  std::cout << "Skill" << TheJob.getJob() << '\n';
  std::cout << "Status" << TheJob.status << '\n';
}