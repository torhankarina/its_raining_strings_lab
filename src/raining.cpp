#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void enterName() {
   vector<string> businesses;
   string business;
   string YesNo;

   while (true) {
      cout << "Please enter the name of a business:  ";
      getline(cin, business);

      businesses.push_back(business);
      sort(businesses.begin(), businesses.end());

      // Output the sorted list
      cout << "\nYour businesses are:\n" << endl;
      for (const string& b : businesses) {
         cout << "    " << b << endl;
      }

      cout << "\nAnother business?  ";
      getline(cin, YesNo);

      if (!(YesNo == "y" || YesNo == "Y" || YesNo == "yes" || YesNo == "Yes")) {
         break;
      }

      cout << endl;
   }
}