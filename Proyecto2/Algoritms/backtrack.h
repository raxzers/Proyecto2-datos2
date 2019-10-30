#ifndef BACKTRACK_H
#define BACKTRACK_H



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
    /**
     * @brief isReachable
     * @param maze
     * @param x
     * @param y
     * @param fx
     * @param fy
     * @return
     */
    bool isReachable(int maze[10][10],int x, int y,int fx, int fy);
    /**
     * @brief ruta
     */
    std::string ruta;
    /**
     * @brief lruta
     */
    LinkedList<int> *lruta= new LinkedList<int>();
private:

    /**
     * @brief n
     */
    int n = 10, m = 10;
    /**
     * @brief visited
     */
    bool visited[10][10];
};

#endif // BACKTRACK_H
