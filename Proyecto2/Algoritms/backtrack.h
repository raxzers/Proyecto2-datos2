#ifndef BACKTRACK_H
#define BACKTRACK_H

#define N 10
#define M 10

#include "../sturctures/LinkedList.h"
#include <string>
#include <cstring>
#include <stack>

class node {
public:
    int x, y;
    int dir;

    node(int i, int j)
    {
        x = i;
        y = j;

        // Initially direction
        // set to 0
        dir = 0;
    }
};

class Backtrack
{
public:
    Backtrack();
    bool isReachable(int maze[N][M],int x, int y,int fx, int fy);
    std::string ruta;
    LinkedList<int> *lruta= new LinkedList<int>();
private:

    int n = N, m = M;
    bool visited[N][M];
};

#endif // BACKTRACK_H
