#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

// This class handles all the grocery logic — loading from file, frequency tracking, output formatting. Basically the brain.
class GroceryTracker {
private:
    map<string, int> itemFrequency;

public:
    // This reads the text file line by line and builds a frequency map of items. Simple loop, does the job.
    void LoadData(const string& filename) {
        ifstream inputFile(filename);
        if (!inputFile) {
            cerr << "Error: Could not open file: " << filename << endl;
            return;
        }

        string item;
        while (getline(inputFile, item)) {
            ++itemFrequency[item];
        }
        inputFile.close();
    }

    // Look up how many times an item appears — returns 0 if it’s not in the file. Fast lookup.
    int GetItemFrequency(const string& item) const {
        auto it = itemFrequency.find(item);
        return (it != itemFrequency.end()) ? it->second : 0;
    }

    // Prints out all the items and how many times they showed up.
    void PrintFrequencies() const {
        for (const auto& pair : itemFrequency) {
            cout << pair.first << " " << pair.second << endl;
        }
    }

    // Fancy bar chart using asterisks. Gives you a visual sense of how often each thing popped up.
    void PrintHistogram() const {
        for (const auto& pair : itemFrequency) {
            cout << pair.first << " ";
            for (int i = 0; i < pair.second; ++i) {
                cout << "*";
            }
            cout << endl;
        }
    }

};

// The main loop where calling the tracker and showing the menu.
int main() {
    GroceryTracker tracker;
    tracker.LoadData("groceries.txt");

    int choice;
    string itemName;

    // Infinite loop showing the menu until the user decides to exit.
    while (true) {
        cout << endl;
        cout << "=== Corner Grocer Menu ===" << endl;
        cout << "1. Search for item frequency" << endl;
        cout << "2. Display all item frequencies" << endl;
        cout << "3. Display histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";

        string input;
        getline(cin, input);
        stringstream ss(input);
        // Input validation — if someone types gibberish or picks a bad number, it is caught.
        if (!(ss >> choice) || choice < 1 || choice > 4) {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            continue;
        }

        // Ask the user what item they’re looking for, then print how many times it was bought.
        if (choice == 1) {
            cout << "Enter item name: ";
            getline(cin, itemName);
            cout << itemName << " was purchased " << tracker.GetItemFrequency(itemName) << " times." << endl;
        }
        // Dump the full list with purchase counts.
        else if (choice == 2) {
            tracker.PrintFrequencies();
        }
        // Show the histogram — this one's the visual with the asterisks.
        else if (choice == 3) {
            tracker.PrintHistogram();
        }
        // Exit program!
        else if (choice == 4) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }
    }

    return 0;
}