/*****************************

Yearly Program

*****************************/

#include <iostream>
using namespace std;

// Function Prototype.
// Takes two parameters,
// global variables in the main
// function hourlyRate and weeklyHours.
int yearlyRate(int hourlyRate, int weeklyHours);
// Function prototype.
// Takes two parameters,
void outputResult(int hourlyRate, int weeklyHours);

int main() {

  // Outputs empty line.
  cout << endl;
  // Outputs to the console
  cout << "########################### Running Program ############################" << endl;
  // Outputs empty line.
  cout << endl;

  // Declares variables.
  int hourlyRate;
  int weeklyHours;
  // Declares variable to store function call.
  int theR;
  // Declares loop control variable.
  int control;

  // Prompts user.
  cout << "Enter -1 to quit program: ";
  // Stores input in the variable control.
  cin >> control;
  // Outputs empty line.
  cout << endl;

  // Builds sentinel while loop.
  while(control != -1) {

    // Prompts user.
    cout << "Enter your hourly Rate: ";
    // Stores input in the variable hourlyRate.
    cin >> hourlyRate;
    // outputs empty line.
    cout << endl;

    cout << "Enter your weekly hours: ";
    cin >> weeklyHours;
    cout << endl;

    // Function call.
    // Takes two parameters.
    outputResult(hourlyRate, weeklyHours);

    // Prompts user.
    cout << "Enter -1 to quit program: ";
    // Stores input in the variable control.
    cin >> control;
    // Outputs empty line.
    cout << endl;


    // Builds if statement.
    if(control == -1) {

      cout << "Thanks for using the program" << endl;

    } else {

      cout << "Let's do this again" << endl;

    }

  }

  // Outputs empty line.
  cout << endl;
  // Outputs to the console.
  cout << "######################## Exiting Program #################################" << endl;
  // Outputs empty line.
  cout << endl;

  // Exits main function.
  // Returns 0 to the Operating System.
  return 0;

}

// Builds function.
// Takes two parameters,
// local variables in the main function
// hourlyRate and weeklyHours.
int yearlyRate(int hourlyRate, int weeklyHours) {

  // Returns yearly wage.
  return hourlyRate * weeklyHours * 52;

}

// Builds function.
// Takes two parameters,
// local variables in the main function
// hourlyRate and weeklyHours.
void outputResult(int hourlyRate, int weeklyHours) {

  // Declares variable to store function call.
  int theR;

  // Function call.
  // Takes two parameters.
  // Stores output in the variable theR.
  theR = yearlyRate(hourlyRate, weeklyHours);

  // Outputs to the console.
  cout << "Your hourly rate is $" << hourlyRate << " dollars per hour." << endl;
  cout << "You worked " << weeklyHours << " hours per week" << endl;
  cout << "Your yearly salary is $" << theR << " dollars per year." << endl;

}
