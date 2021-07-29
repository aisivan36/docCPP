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

class Question {
public:
  void question() { std::cout << "Are you programmer? (y/n): "; }
};

void asking();

void sure();

void game() {
  char input;

  Person TheJob;
  TheJob.setJob("Rust");
  TheJob.status = "Leader";
  TheJob.minExper(5);
  Question ask;
  do {
    ask.question();

    std::cin >> input;
    if (input == 'y') {
      std::cout << "Skill: " << TheJob.getJob() << '\n';
      std::cout << "Status: " << TheJob.status << '\n';
      std::cout << "Experienced: " << TheJob.getExpr() << " Year(s)\n";
      return asking();
    } else if (input == 'n') {
      std::cout << "Have a nice day sir!\n";
      //   break;
      return sure(); // break
    }

  } while (input != 'y' && 'n');
}

void asking() {
  std::string ask = ""; // do not use char for do while within cin inside of it,
                        // it leads to cause warning issue on compiler.

  do {

    if (ask == "n") {
      sure();
    } else {

      std::cout << "Would you like to play again? (y/n): ";
      std::cin >> ask;

      if (ask == "n") {
        return sure(); // exit throw onto sure
      } else if (ask == "y") {
        return game(); // The same as above
      }
    }

  } while (ask != "y" && "n");
}

void sure() {
  char realy;

  std::cout << "are you sure to leave? (y/n) : ";
  std::cin >> realy;

  if (realy == 'n') {
    asking();
  } else if (realy == 'y') {
    std::cout << "see you!\n";
    return; // stop at here

    //     Do not use break on this scope. keep that in mind.
    //     break; // break keyword: Is used to terminate the execution of any
    //     looping structures(for loop, while, do_while) immediately. If it is
    //     used inside in function or method, it will not terminate the function
    //     just the looping structure will be terminated
  }
}

int main() {
  game();
  //---------- will not work//
}
