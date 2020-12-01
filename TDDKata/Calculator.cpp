#include "pch.h"
#include "Calculator.h"

#include <vector>
#include <sstream>
#include <string>
#include <algorithm>


using namespace std;

int Calculator::Add(std::string expression)
{
    int sum = 0;

    vector<string> args_array;
    string s;
    istringstream is(expression);

    if ((expression.find('-') != string::npos) ||
        (expression.find('.') != string::npos)) {
        return -1;
    }


    while (std::getline(is, s, ',')) {
        if (all_of(s.begin(), s.end(), ::isdigit)) {
            args_array.push_back(s);
        }
        else {
            return -1;
        }
    }

    if (args_array.size() == 0) {
        return 0;
    }
    else if (args_array.size() > 3) {
        return -2;
    }
    else {
        for (int i = 0; i < args_array.size(); i++) {
            sum += stoi(args_array[i]);
        }
    }

    return sum;
}

int Calculator::Add(char* expression)
{
    throw 0;
}
