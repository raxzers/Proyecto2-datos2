#include "backtrack.h"

Backtrack::Backtrack()
{
    memset(this->visited, true, sizeof(visited));
}

bool Backtrack::isReachable(int maze[N][M], int x, int y, int fx, int fy)
{
    // Initially starting at (0, 0).
        int i = x, j = y;

        std::stack<node> s;

        node temp(i, j);

        s.push(temp);

        while (!s.empty()) {

            // Pop the top node and move to the
            // left, right, top, down or retract
            // back according the value of node's
            // dir variable.
            temp = s.top();
            int d = temp.dir;
            i = temp.x, j = temp.y;

            // Increment the direction and
            // push the node in the stack again.
            temp.dir++;

            s.pop();

            s.push(temp);

            // salida
            if (i == fx and j == fy) {
                for(int i =0;i<lruta->getSize();i++){
                    ruta+=std::to_string(lruta->getElement(i)->getData())+",";
                }
                ruta.erase(ruta.length()-1);
                return true;
            }

            // direccion arriba

            if (d == 0) {
                if (i - 1 >= 0 and maze[i - 1][j] and
                    visited[i - 1][j]) {
                    node temp1(i - 1, j);
                    visited[i - 1][j] = false;
                    lruta->insertAtEnd(temp1.x*10+temp1.y);

                    s.push(temp1);
                }
            }

                // direccion iziquerda
            else if (d == 1) {
                if (j - 1 >= 0 and maze[i][j - 1] and
                    visited[i][j - 1]) {
                    node temp1(i, j - 1);
                    visited[i][j - 1] = false;
                    lruta->insertAtEnd(temp1.x*10+temp1.y);
                    s.push(temp1);
                }
            }

                // direccion abajo
            else if (d == 2) {
                if (i + 1 < n and maze[i + 1][j] and
                    visited[i + 1][j]) {
                    node temp1(i + 1, j);
                    visited[i + 1][j] = false;
                    lruta->insertAtEnd(temp1.x*10+temp1.y);
                    s.push(temp1);
                }
            }
                // direccion derecha
            else if (d == 3) {
                if (j + 1 < m and maze[i][j + 1] and
                    visited[i][j + 1]) {
                    node temp1(i, j + 1);
                    visited[i][j + 1] = false;
                    lruta->insertAtEnd(temp1.x*10+temp1.y);
                    s.push(temp1);
                }
            }

                // If none of the direction can take
                // the rat to the Food, retract back
                // to the path where the rat came from.
            else {
                lruta->deletelast();
                visited[temp.x][temp.y] = true;
                s.pop();

            }
        }

        // If the stack is empty and
        // no path is found return false.
        return false;
}
