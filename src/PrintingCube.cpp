/// Header Files
#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

/**
 *   Skeleton of the Rubik's Cube
 * 
 *                 ------------
 *                 | W0 W1 W2 |
 *                 | W3 W4 W5 |
 *                 | W6 W7 W8 |
 *                 ------------
 *   ------------  ------------  ------------  ------------
 *   | R0 R1 R2 |  | B0 B1 B2 |  | O0 O1 O2 |  | G0 G1 G2 |
 *   | R3 R4 R5 |  | B3 B4 B5 |  | O3 O4 O5 |  | G3 G4 G5 |
 *   | R6 R7 R8 |  | B6 B7 B8 |  | O6 O7 O8 |  | G6 G7 G8 | 
 *   ------------  ------------  ------------  ------------
 *                 ------------
 *                 | Y0 Y1 Y2 | 
 *                 | Y3 Y4 Y5 | 
 *                 | Y6 Y7 Y8 | 
 *                 ------------
 * 
 *  Colour Coding:  W = White, R = Red, B = Blue, O = Orange, G = Green, Y = Yellow
 * 
 *  Vec = {
 *          0 : WHITE
 *          1 : RED
 *          2 : BLUE
 *          3 : ORANGE
 *          4 : GREEN
 *          5 : YELLOW
 *        }
 *    
 */

/// Printing the Cube.....
void PrintingCube(vector<vector<char>> vec)
{
    /// Printing WHITE Layer...
    cout << endl;
    int cnt = 0;
    cout << "\t           ---------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\t           ";
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << vec[0][cnt] << " ";
            cnt++;
        }
        cout << "|" << endl;
    }
    cout << "\t           ---------" << endl;

    /// Printing RED, BLUE, ORANGE and GREEN Layer...
    cout << "\t --------- --------- --------- ---------" << endl;
    for (int j = 0; j < 9; j += 3)
    {
        cout << "\t | " << vec[2][j] << " " << vec[2][j + 1] << " " << vec[2][j + 2] << " | ";
        cout << "| " << vec[1][j] << " " << vec[1][j + 1] << " " << vec[1][j + 2] << " | ";
        cout << "| " << vec[4][j] << " " << vec[4][j + 1] << " " << vec[4][j + 2] << " | ";
        cout << "| " << vec[3][j] << " " << vec[3][j + 1] << " " << vec[3][j + 2] << " | ";
        cout << endl;
    }
    cout << "\t --------- --------- --------- ---------" << endl;

    /// Printing YELLOW Layer...
    cnt = 0;
    cout << "\t           ---------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\t           ";
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << vec[5][cnt] << " ";
            cnt++;
        }
        cout << "|" << endl;
    }
    cout << "\t           ---------" << endl;
    cout << endl;
}
