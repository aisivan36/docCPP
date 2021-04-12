#include <iostream>
#include <string>

class Job {
protected:
  std::string skill;
};

class Experienced {
protected:
  int expr;
};

class Person : public Job, public Experienced {
public:
  std::string status;
  void setJob(std::string j) { skill = j; }
  std::string getJob() { return skill; }

  void minExper(int ex) { expr = ex; }
  int getExpr() { return expr; }
};

int main() {
  Person TheJob;
  TheJob.setJob("Rust");
  TheJob.status = "Leader";
  TheJob.minExper(5);

  std::cout << "Skill: " << TheJob.getJob() << '\n';
  std::cout << "Status: " << TheJob.status << '\n';
  std::cout << "Experienced: " << TheJob.getExpr() << " Year(s)\n";
}