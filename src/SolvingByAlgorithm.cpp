#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

/**
 *   Solving Rubik Cube by Algorithm.....
 */

vector<vector<char>> SolvingByAlgorithm(vector<vector<char>> vec)
{
    /**
     *   Stage 1 : Solving WHITE CROSS in TOP Layer
     */
    /// Solving BLUE--WHITE Edge in Top Layer
    while (vec[0][7] != 'W' || vec[1][1] != 'B')
    {
        /**  If Edge is in Upper Layer  */
        if ((vec[2][1] == 'W' && vec[0][3] == 'B') || (vec[2][1] == 'B' && vec[0][3] == 'W'))
        {
            vec = Blue_Up_Anti_Clock(vec);
        }
        else if ((vec[3][1] == 'W' && vec[0][1] == 'B') || (vec[3][1] == 'B' && vec[0][1] == 'W'))
        {
            vec = Blue_Up_Anti_Clock(vec);
            vec = Blue_Up_Anti_Clock(vec);
        }
        else if ((vec[4][1] == 'W' && vec[0][5] == 'B') || (vec[4][1] == 'B' && vec[0][5] == 'W'))
        {
            vec = Blue_Up_Clock(vec);
        }

        /**  If Edge is in Middle Layer  */
        else if ((vec[1][3] == 'W' && vec[2][5] == 'B') || (vec[1][3] == 'B' && vec[2][5] == 'W'))
        {
            vec = Blue_Front_Clock(vec);
        }
        else if ((vec[1][5] == 'W' && vec[4][3] == 'B') || (vec[1][5] == 'B' && vec[4][3] == 'W'))
        {
            vec = Blue_Front_Anti_Clock(vec);
        }
        else if ((vec[3][3] == 'W' && vec[4][5] == 'B') || (vec[3][3] == 'B' && vec[4][5] == 'W'))
        {
            vec = Blue_Right_Clock(vec);
            vec = Blue_Down_Anti_Clock(vec);
        }
        else if ((vec[3][5] == 'W' && vec[2][3] == 'B') || (vec[3][5] == 'B' && vec[2][3] == 'W'))
        {
            vec = Blue_Left_Anti_Clock(vec);
            vec = Blue_Down_Clock(vec);
        }

        /**  If Edge is in Bottom Layer  */
        else if ((vec[2][7] == 'W' && vec[5][3] == 'B') || (vec[2][7] == 'B' && vec[5][3] == 'W'))
        {
            vec = Blue_Down_Clock(vec);
        }
        else if ((vec[4][7] == 'W' && vec[5][5] == 'B') || (vec[4][7] == 'B' && vec[5][5] == 'W'))
        {
            vec = Blue_Down_Anti_Clock(vec);
        }
        else if ((vec[3][7] == 'W' && vec[5][7] == 'B') || (vec[3][7] == 'B' && vec[5][7] == 'W'))
        {
            vec = Blue_Down_Clock(vec);
            vec = Blue_Down_Clock(vec);
        }

        if ((vec[1][7] == 'W' && vec[5][1] == 'B') || (vec[1][7] == 'B' && vec[5][1] == 'W'))
        {
            vec = Blue_Front_Clock(vec);
            vec = Blue_Front_Clock(vec);
        }

        while (vec[0][7] != 'W' || vec[1][1] != 'B')
        {
            vec = Red_Right_Anti_Clock(vec);
            vec = Red_Up_Clock(vec);
            vec = Red_Front_Anti_Clock(vec);
            vec = Red_Up_Anti_Clock(vec);
        }
    }
    // PrintingCube(vec);
    /// Solving ORANGE--WHITE Edge in Top Layer
    while (vec[0][5] != 'W' || vec[4][1] != 'O')
    {
        /**  If Edge is in Upper Layer  */
        if ((vec[2][1] == 'W' && vec[0][3] == 'O') || (vec[2][1] == 'O' && vec[0][3] == 'W'))
        {
            vec = Orange_Back_Anti_Clock(vec);
            vec = Orange_Back_Anti_Clock(vec);
            vec = Orange_Down_Anti_Clock(vec);
            vec = Orange_Down_Anti_Clock(vec);
        }
        else if ((vec[3][1] == 'W' && vec[0][1] == 'O') || (vec[3][1] == 'O' && vec[0][1] == 'W'))
        {
            vec = Orange_Right_Anti_Clock(vec);
            vec = Orange_Front_Anti_Clock(vec);
        }

        /**  If Edge is in Middle Layer  */
        else if ((vec[4][3] == 'W' && vec[1][5] == 'O') || (vec[4][3] == 'O' && vec[1][5] == 'W'))
        {
            vec = Orange_Front_Clock(vec);
        }
        else if ((vec[4][5] == 'W' && vec[3][3] == 'O') || (vec[4][5] == 'O' && vec[3][3] == 'W'))
        {
            vec = Orange_Front_Anti_Clock(vec);
        }
        else if ((vec[1][3] == 'W' && vec[2][5] == 'O') || (vec[1][3] == 'O' && vec[2][5] == 'W'))
        {
            vec = Orange_Left_Anti_Clock(vec);
            vec = Orange_Down_Clock(vec);
            vec = Orange_Left_Clock(vec);
        }
        else if ((vec[3][5] == 'W' && vec[2][3] == 'O') || (vec[3][5] == 'O' && vec[2][3] == 'W'))
        {
            vec = Orange_Right_Clock(vec);
            vec = Orange_Down_Anti_Clock(vec);
        }

        /**  If Edge is in Bottom Layer  */
        else if ((vec[1][7] == 'W' && vec[5][1] == 'O') || (vec[1][7] == 'O' && vec[5][1] == 'W'))
        {
            vec = Orange_Down_Clock(vec);
        }
        else if ((vec[3][7] == 'W' && vec[5][7] == 'O') || (vec[3][7] == 'O' && vec[5][7] == 'W'))
        {
            vec = Orange_Down_Anti_Clock(vec);
        }
        else if ((vec[2][7] == 'W' && vec[5][3] == 'O') || (vec[2][7] == 'O' && vec[5][3] == 'W'))
        {
            vec = Orange_Down_Clock(vec);
            vec = Orange_Down_Clock(vec);
        }

        if ((vec[4][7] == 'W' && vec[5][5] == 'O') || (vec[4][7] == 'O' && vec[5][5] == 'W'))
        {
            vec = Orange_Front_Clock(vec);
            vec = Orange_Front_Clock(vec);
        }

        while (vec[0][5] != 'W' || vec[4][1] != 'O')
        {
            vec = Blue_Right_Anti_Clock(vec);
            vec = Blue_Up_Clock(vec);
            vec = Blue_Front_Anti_Clock(vec);
            vec = Blue_Up_Anti_Clock(vec);
        }
    }
    // PrintingCube(vec);
    /// Solving GREEN--WHITE Edge in Top Layer
    while (vec[0][1] != 'W' || vec[3][1] != 'G')
    {
        /**  If Edge is in Upper Layer  */
        if ((vec[2][1] == 'W' && vec[0][3] == 'G') || (vec[2][1] == 'G' && vec[0][3] == 'W'))
        {
            vec = Green_Right_Anti_Clock(vec);
            vec = Green_Front_Anti_Clock(vec);
        }

        /**  If Edge is in Middle Layer  */
        else if ((vec[3][3] == 'W' && vec[4][5] == 'G') || (vec[3][3] == 'G' && vec[4][5] == 'W'))
        {
            vec = Green_Front_Clock(vec);
        }
        else if ((vec[3][5] == 'W' && vec[2][3] == 'G') || (vec[3][5] == 'G' && vec[2][3] == 'W'))
        {
            vec = Green_Front_Anti_Clock(vec);
        }
        else if ((vec[4][3] == 'W' && vec[1][5] == 'G') || (vec[4][3] == 'G' && vec[1][5] == 'W'))
        {
            vec = Green_Left_Anti_Clock(vec);
            vec = Green_Down_Clock(vec);
            vec = Green_Left_Clock(vec);
        }
        else if ((vec[2][5] == 'W' && vec[1][3] == 'G') || (vec[2][5] == 'G' && vec[1][3] == 'W'))
        {
            vec = Green_Right_Clock(vec);
            vec = Green_Down_Anti_Clock(vec);
        }

        /**  If Edge is in Bottom Layer  */
        else if ((vec[4][7] == 'W' && vec[5][5] == 'G') || (vec[4][7] == 'G' && vec[5][5] == 'W'))
        {
            vec = Green_Down_Clock(vec);
        }
        else if ((vec[2][7] == 'W' && vec[5][3] == 'G') || (vec[2][7] == 'G' && vec[5][3] == 'W'))
        {
            vec = Green_Down_Anti_Clock(vec);
        }
        else if ((vec[1][7] == 'W' && vec[5][1] == 'G') || (vec[1][7] == 'G' && vec[5][1] == 'W'))
        {
            vec = Green_Down_Clock(vec);
            vec = Green_Down_Clock(vec);
        }

        if ((vec[3][7] == 'W' && vec[5][7] == 'G') || (vec[3][7] == 'G' && vec[5][7] == 'W'))
        {
            vec = Green_Front_Clock(vec);
            vec = Green_Front_Clock(vec);
        }

        while (vec[0][1] != 'W' || vec[3][1] != 'G')
        {
            vec = Orange_Right_Anti_Clock(vec);
            vec = Orange_Up_Clock(vec);
            vec = Orange_Front_Anti_Clock(vec);
            vec = Orange_Up_Anti_Clock(vec);
        }
    }
    // PrintingCube(vec);
    /// Solving RED--WHITE Edge in Top Layer
    while (vec[0][3] != 'W' || vec[2][1] != 'R')
    {
        /**  If Edge is in Middle Layer  */
        if ((vec[2][3] == 'W' && vec[4][5] == 'R') || (vec[2][3] == 'R' && vec[4][5] == 'W'))
        {
            vec = Red_Front_Clock(vec);
        }
        else if ((vec[2][5] == 'W' && vec[1][3] == 'R') || (vec[2][5] == 'R' && vec[1][3] == 'W'))
        {
            vec = Red_Front_Anti_Clock(vec);
        }
        else if ((vec[3][3] == 'W' && vec[4][5] == 'R') || (vec[3][3] == 'R' && vec[4][5] == 'W'))
        {
            vec = Red_Left_Anti_Clock(vec);
            vec = Red_Down_Clock(vec);
            vec = Red_Left_Clock(vec);
        }
        else if ((vec[1][5] == 'W' && vec[4][3] == 'R') || (vec[1][5] == 'R' && vec[4][3] == 'W'))
        {
            vec = Red_Right_Clock(vec);
            vec = Red_Down_Anti_Clock(vec);
            vec = Red_Right_Anti_Clock(vec);
        }

        /**  If Edge is in Bottom Layer  */
        else if ((vec[3][7] == 'W' && vec[5][7] == 'R') || (vec[3][7] == 'R' && vec[5][7] == 'W'))
        {
            vec = Red_Down_Clock(vec);
        }
        else if ((vec[1][7] == 'W' && vec[5][1] == 'R') || (vec[1][7] == 'R' && vec[5][1] == 'W'))
        {
            vec = Red_Down_Anti_Clock(vec);
        }
        else if ((vec[4][7] == 'W' && vec[5][5] == 'R') || (vec[4][7] == 'R' && vec[5][5] == 'W'))
        {
            vec = Red_Down_Clock(vec);
            vec = Red_Down_Clock(vec);
        }

        if ((vec[2][7] == 'W' && vec[5][3] == 'R') || (vec[2][7] == 'R' && vec[5][3] == 'W'))
        {
            vec = Red_Front_Clock(vec);
            vec = Red_Front_Clock(vec);
        }

        while (vec[0][3] != 'W' || vec[2][1] != 'R')
        {
            vec = Green_Right_Anti_Clock(vec);
            vec = Green_Up_Clock(vec);
            vec = Green_Front_Anti_Clock(vec);
            vec = Green_Up_Anti_Clock(vec);
        }
    }
    // PrintingCube(vec);
    cout << "Stage 1 Completed... WHITE CROSS in Position" << endl;

    /**
     *   Stage 2 : Solving WHITE LAYER
     */
    /// Solving RED--BLUE--WHITE Corner in Top Layer
    while (vec[0][6] != 'W' || vec[2][2] != 'R' || vec[1][0] != 'B')
    {
        /**  If Corner is in Upper Layer  */
        if ((vec[0][8] == 'W' || vec[1][2] == 'W' || vec[4][0] == 'W') &&
            (vec[0][8] == 'R' || vec[1][2] == 'R' || vec[4][0] == 'R') &&
            (vec[0][8] == 'B' || vec[1][2] == 'B' || vec[4][0] == 'B'))
        {
            vec = Red_Back_Anti_Clock(vec);
            vec = Red_Down_Anti_Clock(vec);
            vec = Red_Back_Clock(vec);
        }
        else if ((vec[0][2] == 'W' || vec[4][2] == 'W' || vec[3][0] == 'W') &&
                 (vec[0][2] == 'R' || vec[4][2] == 'R' || vec[3][0] == 'R') &&
                 (vec[0][2] == 'B' || vec[4][2] == 'B' || vec[3][0] == 'B'))
        {
            vec = Red_Left_Anti_Clock(vec);
            vec = Red_Down_Clock(vec);
            vec = Red_Down_Clock(vec);
            vec = Red_Left_Clock(vec);
        }
        else if ((vec[0][0] == 'W' || vec[3][2] == 'W' || vec[2][0] == 'W') &&
                 (vec[0][0] == 'R' || vec[3][2] == 'R' || vec[2][0] == 'R') &&
                 (vec[0][0] == 'B' || vec[3][2] == 'B' || vec[2][0] == 'B'))
        {
            vec = Red_Left_Clock(vec);
            vec = Red_Down_Clock(vec);
            vec = Red_Left_Anti_Clock(vec);
        }

        /**  If Corner is in Bottom Layer  */
        else if ((vec[1][8] == 'W' || vec[4][6] == 'W' || vec[5][2] == 'W') &&
                 (vec[1][8] == 'R' || vec[4][6] == 'R' || vec[5][2] == 'R') &&
                 (vec[1][8] == 'B' || vec[4][6] == 'B' || vec[5][2] == 'B'))
        {
            vec = Red_Down_Anti_Clock(vec);
        }
        else if ((vec[4][8] == 'W' || vec[3][6] == 'W' || vec[5][8] == 'W') &&
                 (vec[4][8] == 'R' || vec[3][6] == 'R' || vec[5][8] == 'R') &&
                 (vec[4][8] == 'B' || vec[3][6] == 'B' || vec[5][8] == 'B'))
        {
            vec = Red_Down_Clock(vec);
            vec = Red_Down_Clock(vec);
        }
        else if ((vec[3][8] == 'W' || vec[2][6] == 'W' || vec[5][6] == 'W') &&
                 (vec[3][8] == 'R' || vec[2][6] == 'R' || vec[5][6] == 'R') &&
                 (vec[3][8] == 'B' || vec[2][6] == 'B' || vec[5][6] == 'B'))
        {
            vec = Red_Down_Clock(vec);
        }

        while (vec[0][6] != 'W' || vec[2][2] != 'R' || vec[1][0] != 'B')
        {
            vec = Red_Right_Anti_Clock(vec);
            vec = Red_Down_Anti_Clock(vec);
            vec = Red_Right_Clock(vec);
            vec = Red_Down_Clock(vec);
        }
    }

    /// Solving BLUE--ORANGE--WHITE Corner in Top Layer
    while (vec[0][8] != 'W' || vec[1][2] != 'B' || vec[4][0] != 'O')
    {
        /**  If Corner is in Upper Layer  */
        if ((vec[0][2] == 'W' || vec[4][2] == 'W' || vec[3][0] == 'W') &&
            (vec[0][2] == 'B' || vec[4][2] == 'B' || vec[3][0] == 'B') &&
            (vec[0][2] == 'O' || vec[4][2] == 'O' || vec[3][0] == 'O'))
        {
            vec = Blue_Back_Anti_Clock(vec);
            vec = Blue_Down_Anti_Clock(vec);
            vec = Blue_Back_Clock(vec);
        }
        else if ((vec[0][0] == 'W' || vec[3][2] == 'W' || vec[2][0] == 'W') &&
                 (vec[0][0] == 'B' || vec[3][2] == 'B' || vec[2][0] == 'B') &&
                 (vec[0][0] == 'O' || vec[3][2] == 'O' || vec[2][0] == 'O'))
        {
            vec = Blue_Left_Anti_Clock(vec);
            vec = Blue_Down_Clock(vec);
            vec = Blue_Down_Clock(vec);
            vec = Blue_Left_Clock(vec);
        }

        /**  If Corner is in Bottom Layer  */
        else if ((vec[2][8] == 'W' || vec[1][6] == 'W' || vec[5][0] == 'W') &&
                 (vec[2][8] == 'B' || vec[1][6] == 'B' || vec[5][0] == 'B') &&
                 (vec[2][8] == 'O' || vec[1][6] == 'O' || vec[5][0] == 'O'))
        {
            vec = Blue_Down_Clock(vec);
        }
        else if ((vec[4][8] == 'W' || vec[3][6] == 'W' || vec[5][8] == 'W') &&
                 (vec[4][8] == 'B' || vec[3][6] == 'B' || vec[5][8] == 'B') &&
                 (vec[4][8] == 'O' || vec[3][6] == 'O' || vec[5][8] == 'O'))
        {
            vec = Blue_Down_Anti_Clock(vec);
        }
        else if ((vec[3][8] == 'W' || vec[2][6] == 'W' || vec[5][6] == 'W') &&
                 (vec[3][8] == 'B' || vec[2][6] == 'B' || vec[5][6] == 'B') &&
                 (vec[3][8] == 'O' || vec[2][6] == 'O' || vec[5][6] == 'O'))
        {
            vec = Blue_Down_Clock(vec);
            vec = Blue_Down_Clock(vec);
        }

        while (vec[0][8] != 'W' || vec[1][2] != 'B' || vec[4][0] != 'O')
        {
            vec = Blue_Right_Anti_Clock(vec);
            vec = Blue_Down_Anti_Clock(vec);
            vec = Blue_Right_Clock(vec);
            vec = Blue_Down_Clock(vec);
        }
    }

    /// Solving ORANGE--GREEN--WHITE Corner in Top Layer
    while (vec[0][2] != 'W' || vec[4][2] != 'O' || vec[3][0] != 'G')
    {
        /**  If Corner is in Upper Layer  */
        if ((vec[0][0] == 'W' || vec[3][2] == 'W' || vec[2][0] == 'W') &&
            (vec[0][0] == 'O' || vec[3][2] == 'O' || vec[2][0] == 'O') &&
            (vec[0][0] == 'G' || vec[3][2] == 'G' || vec[2][0] == 'G'))
        {
            vec = Orange_Right_Clock(vec);
            vec = Orange_Down_Anti_Clock(vec);
            vec = Orange_Right_Anti_Clock(vec);
        }

        /**  If Corner is in Bottom Layer  */
        else if ((vec[1][8] == 'W' || vec[4][6] == 'W' || vec[5][2] == 'W') &&
                 (vec[1][8] == 'O' || vec[4][6] == 'O' || vec[5][2] == 'O') &&
                 (vec[1][8] == 'G' || vec[4][6] == 'G' || vec[5][2] == 'G'))
        {
            vec = Orange_Down_Clock(vec);
        }
        else if ((vec[3][8] == 'W' || vec[2][6] == 'W' || vec[5][6] == 'W') &&
                 (vec[3][8] == 'O' || vec[2][6] == 'O' || vec[5][6] == 'O') &&
                 (vec[3][8] == 'G' || vec[2][6] == 'G' || vec[5][6] == 'G'))
        {
            vec = Orange_Down_Anti_Clock(vec);
        }
        else if ((vec[2][8] == 'W' || vec[1][6] == 'W' || vec[5][0] == 'W') &&
                 (vec[2][8] == 'O' || vec[1][6] == 'O' || vec[5][0] == 'O') &&
                 (vec[2][8] == 'G' || vec[1][6] == 'G' || vec[5][0] == 'G'))
        {
            vec = Orange_Down_Clock(vec);
            vec = Orange_Down_Clock(vec);
        }

        while (vec[0][2] != 'W' || vec[4][2] != 'O' || vec[3][0] != 'G')
        {
            vec = Orange_Right_Anti_Clock(vec);
            vec = Orange_Down_Anti_Clock(vec);
            vec = Orange_Right_Clock(vec);
            vec = Orange_Down_Clock(vec);
        }
    }
    
    /// Solving GREEN--RED--WHITE Corner in Top Layer
    while (vec[0][0] != 'W' || vec[3][2] != 'G' || vec[2][0] != 'R')
    {
        /**  If Corner is in Bottom Layer  */
        if ((vec[4][8] == 'W' || vec[3][6] == 'W' || vec[5][8] == 'W') &&
                 (vec[4][8] == 'G' || vec[3][6] == 'G' || vec[5][8] == 'G') &&
                 (vec[4][8] == 'R' || vec[3][6] == 'R' || vec[5][8] == 'R'))
        {
            vec = Green_Down_Clock(vec);
        }
        else if ((vec[2][8] == 'W' || vec[1][6] == 'W' || vec[5][0] == 'W') &&
                 (vec[2][8] == 'G' || vec[1][6] == 'G' || vec[5][0] == 'G') &&
                 (vec[2][8] == 'R' || vec[1][6] == 'R' || vec[5][0] == 'R'))
        {
            vec = Green_Down_Anti_Clock(vec);
        }
        else if ((vec[1][8] == 'W' || vec[4][6] == 'W' || vec[5][2] == 'W') &&
                 (vec[1][8] == 'G' || vec[4][6] == 'G' || vec[5][2] == 'G') &&
                 (vec[1][8] == 'R' || vec[4][6] == 'R' || vec[5][2] == 'R'))
        {
            vec = Green_Down_Clock(vec);
            vec = Green_Down_Clock(vec);
        }

        while (vec[0][0] != 'W' || vec[3][2] != 'G' || vec[2][0] != 'R')
        {
            vec = Green_Right_Anti_Clock(vec);
            vec = Green_Down_Anti_Clock(vec);
            vec = Green_Right_Clock(vec);
            vec = Green_Down_Clock(vec);
        }
    }
    cout << "Stage 2 Completed... WHITE LAYER in Position" << endl;

    return vec;
}
