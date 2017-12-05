// Carrie Ward

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

    const int ROWS = 3;
    const int COLUMNS = 3;
    int numbers[ROWS][COLUMNS] = {2897, 5, 837,
                                  34, 7, 1623,
                                  390, 3456, 12};

    fstream outFile("table.txt", ios::out);

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLUMNS; col++)
        {
            outFile << setw(8) << numbers[row][col];
        }
        outFile << endl;
    }
    outFile.close();
    cout << "Done." << endl;

    return 0;
}
