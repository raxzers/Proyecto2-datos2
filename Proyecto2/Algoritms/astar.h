#ifndef ASTAR_H
#define ASTAR_H
#include<bits/stdc++.h>
#define ROW 10
#define COL 10
using namespace std;
struct cell
{
    // Row and Column index of its parent
    // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
    int parent_i, parent_j;
    // f = g + h
    double f, g, h;
};
typedef pair<int, int> Pair;
typedef pair<double, pair<int, int>> pPair;

class Astar
{
public:
    Astar();
    void aStarSearch(int grid[][COL], int src, int dest);

        const string &getRoute() const;

        void setRoute(const string &route);

    private:
        void aStarSearch(int grid[][COL], Pair src, Pair dest);
        std::string route="";
        bool isValid(int row, int col);
        bool isUnBlocked(int grid[][COL], int row, int col);
        bool isDestination(int row, int col, Pair dest);
        double calculateHValue(int row, int col, Pair dest);
        void tracePath(cell cellDetails[][COL], Pair dest);
};

#endif // ASTAR_H
