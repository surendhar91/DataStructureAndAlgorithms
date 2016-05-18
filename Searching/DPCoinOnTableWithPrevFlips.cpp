#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

enum PointType {
    POINT_LEFT = 0,
    POINT_RIGHT,
    POINT_UP,
    POINT_DOWN,
    POINT_DEST
};

PointType getPoint(char pointChar) {
    switch (pointChar) {
        case 'L':
            return POINT_LEFT;
        case 'U':
            return POINT_UP;
        case 'D':
            return POINT_DOWN;
        case 'R':
            return POINT_RIGHT;
        case '*':
            return POINT_DEST;
        default:
            assert(false);
    }
}

#define MAX_INT (1 << 30)

void processPoints(PointType** points, int n, int m, int k, int destRow, int destCol) {
    // For all values of points, calculate the min num of flips required
    // to get to (row, col) from (0, 0)
    // Do this for all values of k        
    // k - represents the maximum number of hops we're allowed to make
        
    int** flips1 = new int*[n];
    int** flips2 = new int*[n];
    for (int ix = 0; ix < n; ++ix) {
        flips1[ix] = new int[m];
        flips2[ix] = new int[m];
    }
    
    // For each value of k (i.e. max number of hops allowed)
    // calculate the current iteration's flip value using the flip
    // value from the previous iteration.
    //
    // If the direction towards the current cell matches
    // the value in the adjacent cell, we do not need to increment
    // the current flip
    //
    // After doing this for all 4 adjacent cells (or lesser in the borders)
    // pick the minimal value as the flip
    //
    // If we're trying to calculate the value for the destination cell,
    // ensure we only store the minimum value always as the coin does not
    // move further
    
    int** flips;
    int** prevFlips;
        
    for (int currK = 0; currK <= k; ++currK) {
        // Swap the flips arrays in each iteration of k
        if (currK % 2 == 0) {
            flips = flips1;
            prevFlips = flips2;
        }
        else {
            flips = flips2;
            prevFlips = flips1;
        }
        for(int row=0;row<n;row++){
			for(int col=0;col<m;col++){
				cout<<prevFlips[row][col]<<" ";
				}
				cout<<"\n";
			}
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < m; ++col) {
                int result = MAX_INT;
                if (currK == 0) {
                    if (row == 0 && col == 0) {
                        result = 0;
                    }
                }
                else {
                    if (row > 0) {
                        result = min(result,
                                     prevFlips[row - 1][col] + (points[row - 1][col] == POINT_DOWN ? 0 : 1));
                    }
                    if (row < n - 1) {
                        result = min(result,
                                     prevFlips[row + 1][col] + (points[row + 1][col] == POINT_UP ? 0 : 1));
                    }
                    if (col > 0) {
                        result = min(result,
                                     prevFlips[row][col - 1] + (points[row][col - 1] == POINT_RIGHT ? 0 : 1));
                    }
                    if (col < m - 1) {
                        result = min(result,
                                     prevFlips[row][col + 1] + (points[row][col + 1] == POINT_LEFT ? 0 : 1));
                    }
                    if (row == destRow && col == destCol) {
                        result = min(result, prevFlips[row][col]);
                    }
                }
                flips[row][col] = result;
            }
        }
    }
    for(int row=0;row<n;row++){
			for(int col=0;col<m;col++){
				cout<<flips[row][col]<<" ";
				}
				cout<<"\n";
			}
    int minFlip = flips[destRow][destCol];
    cout << ((minFlip != MAX_INT) ? minFlip : -1);
    
    for (int ix = 0; ix < n; ++ix) {
        delete[] flips1[ix];
        delete[] flips2[ix];
    }
    delete[] flips1;
    delete[] flips2;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m, k;
    cin >> n;
    cin >> m;
    cin >> k;
    
    PointType** points = new PointType*[n];
    for (int ix = 0; ix < n; ++ix) {
        points[ix] = new PointType[m];
    }
    
    int destRow = -1;
    int destCol = -1;
    for (int ix = 0; ix < n; ++ix) {
        string row;
        cin >> row;
        assert(row.length() == m);
        for (int iy = 0; iy < m; ++iy) {
            points[ix][iy] = getPoint(row[iy]);
            if (points[ix][iy] == POINT_DEST) {
                assert(destRow == -1 && destCol == -1);
                destRow = ix;
                destCol = iy;
            }
        }
    }
    assert(destRow != -1 && destCol != -1);
    
    processPoints(points, n, m, k, destRow, destCol);
    
    for (int ix = 0; ix < n; ++ix) {
        delete[] points[ix];
    }
    delete[] points;
    getchar();
    return 0;
}
