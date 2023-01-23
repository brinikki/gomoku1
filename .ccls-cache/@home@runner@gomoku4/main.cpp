#include <iostream>
using namespace std;
int main() {
cout << " " << endl;

char array [10][10] = { { '-','-','-','-','-','-','-','-','-','-'},
                      {'-','-','-','-','-','-','-','-','-','-',},
                      {'-','-','-','-','-','-','-','-','-','-',},
                      {'-','-','-','-','-','-','-','-','-','-',},
                      {'-','-','-','-','-','-','-','-','-','-',},
                      {'-','-','-','-','-','-','-','-','-','-',},
                      {'-','-','-','-','-','-','-','-','-','-',},
                      {'-','-','-','-','-','-','-','-','-','-',},
                      {'-','-','-','-','-','-','-','-','-','-',},
                      {'-','-','-','-','-','-','-','-','-','-',} }; 

int P1row, P1col, P2row, P2col;
start:
cout << "\033[2J\033[1;H"; // Clear Screen
cout << " " << endl;
cout << "    \033[34m      G\033[32mO\033[34mM\033[32mO\033[34mK\033[32mU\033[37m           " << endl;
cout << " " << endl;
cout << "    0 1 2 3 4 5 6 7 8 9" << endl;
cout << " " << endl;
  
//line 1
cout << "0   " << array[0][0] << " " << array[0][1] << " " << array[0][2] << " " << array[0][3] << " " << array[0][4] << " " << array[0][5] << " " << array[0][6] << " " << array[0][7] << " " << array[0][8] << " " << array[0][9] << endl;

// line 2
cout << "1   " << array[1][0] << " " << array[1][1] << " " << array[1][2] << " " << array[1][3] << " " << array[1][4] << " " << array[1][5] << " " << array[1][6] << " " << array[1][7] << " " << array[1][8] << " " << array[1][9] << endl;

// line 3
cout << "2   " << array[2][0] << " " << array[2][1] << " " << array[2][2] << " " << array[2][3] << " " << array[2][4] << " " << array[2][5] << " " << array[2][6] << " " << array[2][7] << " " << array[2][8] << " " << array[2][9] << endl;

// line 4
cout << "3   " << array[3][0] << " " << array[3][1] << " " << array[3][2] << " " << array[3][3] << " " << array[3][4] << " " << array[3][5] << " " << array[3][6] << " " << array[3][7] << " " << array[3][8] << " " << array[3][9] << endl;

// line 5
cout << "4   " << array[4][0] << " " << array[4][1] << " " << array[4][2] << " " << array[4][3] << " " << array[4][4] << " " << array[4][5] << " " << array[4][6] << " " << array[4][7] << " " << array[4][8] << " " << array[4][9] << endl;
// line 6
cout << "5   " << array[5][0] << " " << array[5][1] << " " << array[5][2] << " " << array[5][3] << " " << array[5][4] << " " << array[5][5] << " " << array[5][6] << " " << array[5][7] << " " << array[5][8] << " " << array[5][9] << endl;

// line 7
cout << "6   " << array[6][0] << " " << array[6][1] << " " << array[6][2] << " " << array[6][3] << " " << array[6][4] << " " << array[6][5] << " " << array[6][6] << " " << array[6][7] << " " << array[6][8] << " " << array[6][9] << endl;

// line 8
cout << "7   " << array[7][0] << " " << array[7][1] << " " << array[7][2] << " " << array[7][3] << " " << array[7][4] << " " << array[7][5] << " " << array[7][6] << " " << array[7][7] << " " << array[7][8] << " " << array[7][9] << endl;

// line 9
cout << "8   " << array[8][0] << " " << array[8][1] << " " << array[8][2] << " " << array[8][3] << " " << array[8][4] << " " << array[8][5] << " " << array[8][6] << " " << array[8][7] << " " << array[8][8] << " " << array[8][9] << endl;

// line 10
cout << "9   " << array[9][0] << " " << array[9][1] << " " << array[9][2] << " " << array[9][3] << " " << array[9][4] << " " << array[9][5] << " " << array[9][6] << " " << array[9][7] << " " << array[9][8] << " " << array[9][9] << endl;

cout << endl; 
  
cout << "Player 1 Enter Row: ";
cin >> P1row;
cout << "Player 1 Enter Column: ";
cin >> P1col;

array[P1row][P1col] =  'X';

cout << endl; 


cout << "\033[2J\033[1;H"; // Clear Screen
cout << " " << endl;
cout << "    \033[34m      G\033[32mO\033[34mM\033[32mO\033[34mK\033[32mU\033[37m           " << endl;
cout << " " << endl;
cout << "    0 1 2 3 4 5 6 7 8 9" << endl;
cout << " " << endl;             
// line 1 
cout << "0   " << array[0][0] << " " << array[0][1] << " " << array[0][2] << " " << array[0][3] << " " << array[0][4] << " " << array[0][5] << " " << array[0][6] << " " << array[0][7] << " " << array[0][8] << " " << array[0][9] << endl;
 // line 2
cout << "1   " << array[1][0] << " " << array[1][1] << " " << array[1][2] << " " << array[1][3] << " " << array[1][4] << " " << array[1][5] << " " << array[1][6] << " " << array[1][7] << " " << array[1][8] << " " << array[1][9] << endl;
 // line 3
cout << "2   " << array[2][0] << " " << array[2][1] << " " << array[2][2] << " " << array[2][3] << " " << array[2][4] << " " << array[2][5] << " " << array[2][6] << " " << array[2][7] << " " << array[2][8] << " " << array[2][9] << endl;
 // line 4
cout << "3   " << array[3][0] << " " << array[3][1] << " " << array[3][2] << " " << array[3][3] << " " << array[3][4] << " " << array[3][5] << " " << array[3][6] << " " << array[3][7] << " " << array[3][8] << " " << array[3][9] << endl;
 // line 5
cout << "4   " << array[4][0] << " " << array[4][1] << " " << array[4][2] << " " << array[4][3] << " " << array[4][4] << " " << array[4][5] << " " << array[4][6] << " " << array[4][7] << " " << array[4][8] << " " << array[4][9] << endl;
// line 6
  cout << "5   " << array[5][0] << " " << array[5][1] << " " << array[5][2] << " " << array[5][3] << " " << array[5][4] << " " << array[5][5] << " " << array[5][6] << " " << array[5][7] << " " << array[5][8] << " " << array[5][9] << endl;
// line 7
  cout << "6   " << array[6][0] << " " << array[6][1] << " " << array[6][2] << " " << array[6][3] << " " << array[6][4] << " " << array[6][5] << " " << array[6][6] << " " << array[6][7] << " " << array[6][8] << " " << array[6][9] << endl;
// line 8
  cout << "7   " << array[7][0] << " " << array[7][1] << " " << array[7][2] << " " << array[7][3] << " " << array[7][4] << " " << array[7][5] << " " << array[7][6] << " " << array[7][7] << " " << array[7][8] << " " << array[7][9] << endl;
// line 9
  cout << "8   " << array[8][0] << " " << array[8][1] << " " << array[8][2] << " " << array[8][3] << " " << array[8][4] << " " << array[8][5] << " " << array[8][6] << " " << array[8][7] << " " << array[8][8] << " " << array[8][9] << endl;
// line 10
  cout << "9   " << array[9][0] << " " << array[9][1] << " " << array[9][2] << " " << array[9][3] << " " << array[9][4] << " " << array[9][5] << " " << array[9][6] << " " << array[9][7] << " " << array[9][8] << " " << array[9][9] << endl;

cout << endl; 


// Player 2

cout << endl; 
  
cout << "Player 2 Enter Row: ";
cin >> P2row;
cout << "Player 2 Enter Column: ";
cin >> P2col;

array[P2row][P2col] =  '0';

cout << endl; 


goto start; 
return 0;
}
  