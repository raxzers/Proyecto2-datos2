#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "GameObjets/Player.h"
#include <qlabel.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void armarTableroCasillasNegras();
    void armarTableroCasillasBlancas();
    void asignarTorres();
    void habilitatTorres();
    void desabilitarTorres();
    void evaluarEstuduante(int casillaTorre, int casillaEstudiante, QString tipoTorre);
    void ataqueTorreArquera(int casillaTorre, int casillaEstudiante);
    QString torreSeleccionada;
    QString casillaSeleccionada;
    Player p1=Player();
    int casSelec;

private slots:
    void on_casilla00_clicked();

    void on_casilla01_clicked();

    void on_casilla02_clicked();

    void on_casilla03_clicked();

    void on_casilla04_clicked();

    void on_casilla05_clicked();

    void on_casilla06_clicked();

    void on_casilla07_clicked();

    void on_casilla08_clicked();

    void on_casilla09_clicked();

    void on_casilla10_clicked();

    void on_casilla11_clicked();

    void on_casilla12_clicked();

    void on_casilla13_clicked();

    void on_casilla14_clicked();

    void on_casilla15_clicked();

    void on_casilla16_clicked();

    void on_casilla17_clicked();

    void on_casilla18_clicked();

    void on_casilla19_clicked();

    void on_casilla20_clicked();

    void on_casilla21_clicked();

    void on_casilla22_clicked();

    void on_casilla23_clicked();

    void on_casilla24_clicked();

    void on_casilla25_clicked();

    void on_casilla26_clicked();

    void on_casilla27_clicked();

    void on_casilla28_clicked();

    void on_casilla29_clicked();

    void on_casilla30_clicked();

    void on_casilla31_clicked();

    void on_casilla32_clicked();

    void on_casilla33_clicked();

    void on_casilla34_clicked();

    void on_casilla35_clicked();

    void on_casilla36_clicked();

    void on_casilla37_clicked();

    void on_casilla38_clicked();

    void on_casilla39_clicked();

    void on_casilla40_clicked();

    void on_casilla41_clicked();

    void on_casilla42_clicked();

    void on_casilla43_clicked();

    void on_casilla44_clicked();

    void on_casilla45_clicked();

    void on_casilla46_clicked();

    void on_casilla47_clicked();

    void on_casilla48_clicked();

    void on_casilla49_clicked();

    void on_casilla50_clicked();

    void on_casilla51_clicked();

    void on_casilla52_clicked();

    void on_casilla53_clicked();

    void on_casilla54_clicked();

    void on_casilla55_clicked();

    void on_casilla56_clicked();

    void on_casilla57_clicked();

    void on_casilla58_clicked();

    void on_casilla59_clicked();

    void on_casilla60_clicked();

    void on_casilla61_clicked();

    void on_casilla62_clicked();

    void on_casilla63_clicked();

    void on_casilla64_clicked();

    void on_casilla65_clicked();

    void on_casilla66_clicked();

    void on_casilla67_clicked();

    void on_casilla68_clicked();

    void on_casilla69_clicked();

    void on_casilla70_clicked();

    void on_casilla71_clicked();

    void on_casilla72_clicked();

    void on_casilla73_clicked();

    void on_casilla74_clicked();

    void on_casilla75_clicked();

    void on_casilla76_clicked();

    void on_casilla77_clicked();

    void on_casilla78_clicked();

    void on_casilla79_clicked();

    void on_casilla80_clicked();

    void on_casilla81_clicked();

    void on_casilla82_clicked();

    void on_casilla83_clicked();

    void on_casilla84_clicked();

    void on_casilla85_clicked();

    void on_casilla86_clicked();

    void on_casilla87_clicked();

    void on_casilla88_clicked();

    void on_casilla89_clicked();

    void on_casilla90_clicked();

    void on_casilla91_clicked();

    void on_casilla92_clicked();

    void on_casilla93_clicked();

    void on_casilla94_clicked();

    void on_casilla95_clicked();

    void on_casilla96_clicked();

    void on_casilla97_clicked();

    void on_casilla98_clicked();

    void on_casilla99_clicked();

    void on_torreArqueraButton_clicked();

    void on_torreMagoButton_clicked();

    void on_torreArtilleraButton_clicked();

    void on_torreFuegoButton_clicked();

    void on_eliminarCursoButton_clicked();

private:
    Ui::MainWindow *ui;
    bool checkCredits();
};
#endif // MAINWINDOW_H
