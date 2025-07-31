#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

int main() {
    string str = "hello how are you my friend";
    
    cout << "Length: " << str.length() << endl;

    // Convert to uppercase
    for (char &ch : str) {
        ch = toupper(ch);  // Convert each character to uppercase
    }

    cout << "Uppercase: " << str << endl;
    cout<<str.at(2);
    cout<<str[2]<<endl;

    for(char &ch : str){
        ch = tolower(ch);
    }
    cout<<str.find("are")<<endl;

    string str1 = "John";
    string str2 = "Doe";

    cout<<str1 + " "+ str2;
    cout<<str1.append(str2);

    // int num3 = 10;
    // cout<<str1+num3;

    // cout<<max(5,2);
    // cout<<round(4.78);
    // // cout<<math.random();
    // int x = 10;
    // int y = 20;
    // cout<< (x > y);



    vector<vector<int>> myNumbers1 = { { 1, 2, 3, 4 }, { 5, 6, 7 } };

    // for (const auto& row : myNumbers1) {
    //     for (int i : row) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    for(int i=0; i<myNumbers1.size();i++){
        for(int j=0; j<myNumbers1[i].size();j++){
            cout<<myNumbers1[i][j]<<" ";
        }
        cout<<endl;
    }

//     string food = "Pizza";
// string &meal = food;

// cout << food << "\n";  // Outputs Pizza
// cout << meal << "\n";  // Outputs Pizza


string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

cout<<*ptr;
// cout<<**ptr;


 int numGuests;
  cout << "How many guests? ";
  cin >> numGuests;

  // Check for invalid input
  if (numGuests <= 0) {
    cout << "Number of guests must be at least 1.\n";
    return 0;
  }

  // Create memory space for x guests (an array of strings)
  string* guests = new string[numGuests];

  // Enter guest names
  for (int i = 0; i < numGuests; i++) {
    cout << "Enter name for guest " << (i + 1) << ": ";
    cin >> guests[i];
  }

  // Show all guests
  cout << "\nGuests checked in:\n";
  for (int i = 0; i < numGuests; i++) {
    cout << guests[i] << "\n";
  }

  delete[] guests;
  cout<<guests[0];

    return 0;
}




