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
    /**
    *
    * @brief constructor del busca caminos a*
    **/
    Astar();
    /**
    * @brief metodo para encontrar un camino
    * @param grid mapa del juego
    * @param src lugar de origen
    * @param dest salida
    **/
    void aStarSearch(int grid[][COL], int src, int dest);
    /**
    *
    * @brief encapsulacion para la variable route
    **/
    const string &getRoute() const;
    /**
    *
    * @brief encapsulacion para la variable route
    **/
   void setRoute(const string &route);
private:
   /**
   * @brief metodo interno para encontrar un camino
    * @param grid mapa del juego
    * @param src coordenada lugar de origen
    * @param dest coordenada salida
   **/
    void aStarSearch(int grid[][COL], Pair src, Pair dest);
    /**
    *
    * @brief variable de la ruta
    **/
     std::string route="";
     /**
     * @brief busca si es valido
     * @param row fila en la matriz
     * @param col columna en la matriz
     * @return si es valido
     **/
     bool isValid(int row, int col);
     /**
     * @brief busca si esta bloqueado
     * @param row fila en la matriz
     * @param col columna en la matriz
     * @return si esta bloqueado
     **/
     bool isUnBlocked(int grid[][COL], int row, int col);
     /**
     * @brief busca si es destino
     * @param row fila en la matriz
     * @param col columna en la matriz
     * @param dest coordenada destino
     * @return si es destino
     **/
     bool isDestination(int row, int col, Pair dest);
     /**
     * @brief calcula h
     * @param row fila en la matriz
     * @param col columna en la matriz
     * @param dest coordenada destino
     * @return h
     **/
     double calculateHValue(int row, int col, Pair dest);
     /**
     * @brief traza la ruta
     * @param cellDetails matriza del mapa
     * @param dest coordenada destino
     **/
     void tracePath(cell cellDetails[][COL], Pair dest);
};

#endif // ASTAR_H
