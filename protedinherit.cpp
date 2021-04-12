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
    } else if (input == 'n') {
      std::cout << "Have a nice day sir!\n";
      break;
    }

  } while (input != 'y' && 'n');
}

void asking();

void sure();
void asking() {
  char ask;

  do {

    if (ask == 'n') {
      sure();
    } else {
      do {
        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> ask;

        if (ask == 'n') {
          sure();
        } else if (ask == 'y') {
          game();
        }
      } while (ask == 'y');
    }

  } while (ask != 'y' && 'n');
}

void sure() {
  // still have bugs on this scope when asking to leave then press yes it does
  // not stop
  char sure;
  do {
    do {

      std::cout << "are you sure to leave? (y/n) : ";
      std::cin >> sure;
      if (sure == 'y') {
        std::cout << "see you!\n";
        // The brak does not work I didn't know how to fix this..!
        break;
      }

    } while (sure == 'y');

    if (sure == 'n') {
      asking();
    } else if (sure == 'y') {
      break;
    }
  } while (sure != 'y' && 'n');
}

int main() {
  game();
  asking();
}