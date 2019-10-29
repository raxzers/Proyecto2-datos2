#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::armarTableroCasillasNegras()
{
    QPixmap casillaNegra(":/new/prefix1/casillaNegra.png");
    ui->casilla00->setIcon(casillaNegra);
    ui->casilla02->setIcon(casillaNegra);
    ui->casilla04->setIcon(casillaNegra);
    ui->casilla06->setIcon(casillaNegra);
    ui->casilla08->setIcon(casillaNegra);
    ui->casilla11->setIcon(casillaNegra);
    ui->casilla13->setIcon(casillaNegra);
    ui->casilla15->setIcon(casillaNegra);
    ui->casilla17->setIcon(casillaNegra);
    ui->casilla19->setIcon(casillaNegra);

    ui->casilla20->setIcon(casillaNegra);
    ui->casilla22->setIcon(casillaNegra);
    ui->casilla24->setIcon(casillaNegra);
    ui->casilla26->setIcon(casillaNegra);
    ui->casilla28->setIcon(casillaNegra);
    ui->casilla31->setIcon(casillaNegra);
    ui->casilla33->setIcon(casillaNegra);
    ui->casilla35->setIcon(casillaNegra);
    ui->casilla37->setIcon(casillaNegra);
    ui->casilla39->setIcon(casillaNegra);

    ui->casilla40->setIcon(casillaNegra);
    ui->casilla42->setIcon(casillaNegra);
    ui->casilla44->setIcon(casillaNegra);
    ui->casilla46->setIcon(casillaNegra);
    ui->casilla48->setIcon(casillaNegra);
    ui->casilla51->setIcon(casillaNegra);
    ui->casilla53->setIcon(casillaNegra);
    ui->casilla55->setIcon(casillaNegra);
    ui->casilla57->setIcon(casillaNegra);
    ui->casilla59->setIcon(casillaNegra);

    ui->casilla60->setIcon(casillaNegra);
    ui->casilla62->setIcon(casillaNegra);
    ui->casilla64->setIcon(casillaNegra);
    ui->casilla66->setIcon(casillaNegra);
    ui->casilla68->setIcon(casillaNegra);
    ui->casilla71->setIcon(casillaNegra);
    ui->casilla73->setIcon(casillaNegra);
    ui->casilla75->setIcon(casillaNegra);
    ui->casilla77->setIcon(casillaNegra);
    ui->casilla79->setIcon(casillaNegra);

    ui->casilla80->setIcon(casillaNegra);
    ui->casilla82->setIcon(casillaNegra);
    ui->casilla84->setIcon(casillaNegra);
    ui->casilla86->setIcon(casillaNegra);
    ui->casilla88->setIcon(casillaNegra);
    ui->casilla91->setIcon(casillaNegra);
    ui->casilla93->setIcon(casillaNegra);
    ui->casilla95->setIcon(casillaNegra);
    ui->casilla97->setIcon(casillaNegra);
    ui->casilla99->setIcon(casillaNegra);

}

void MainWindow::armarTableroCasillasBlancas()
{
    QPixmap casillaBlanco(":/new/prefix1/casillaBlanco.png");
    ui->casilla01->setIcon(casillaBlanco);
    ui->casilla03->setIcon(casillaBlanco);
    ui->casilla05->setIcon(casillaBlanco);
    ui->casilla07->setIcon(casillaBlanco);
    ui->casilla09->setIcon(casillaBlanco);
    ui->casilla10->setIcon(casillaBlanco);
    ui->casilla12->setIcon(casillaBlanco);
    ui->casilla14->setIcon(casillaBlanco);
    ui->casilla16->setIcon(casillaBlanco);
    ui->casilla18->setIcon(casillaBlanco);

    ui->casilla21->setIcon(casillaBlanco);
    ui->casilla23->setIcon(casillaBlanco);
    ui->casilla25->setIcon(casillaBlanco);
    ui->casilla27->setIcon(casillaBlanco);
    ui->casilla29->setIcon(casillaBlanco);
    ui->casilla30->setIcon(casillaBlanco);
    ui->casilla32->setIcon(casillaBlanco);
    ui->casilla34->setIcon(casillaBlanco);
    ui->casilla36->setIcon(casillaBlanco);
    ui->casilla38->setIcon(casillaBlanco);

    ui->casilla41->setIcon(casillaBlanco);
    ui->casilla43->setIcon(casillaBlanco);
    ui->casilla45->setIcon(casillaBlanco);
    ui->casilla47->setIcon(casillaBlanco);
    ui->casilla49->setIcon(casillaBlanco);
    ui->casilla50->setIcon(casillaBlanco);
    ui->casilla52->setIcon(casillaBlanco);
    ui->casilla54->setIcon(casillaBlanco);
    ui->casilla56->setIcon(casillaBlanco);
    ui->casilla58->setIcon(casillaBlanco);

    ui->casilla61->setIcon(casillaBlanco);
    ui->casilla63->setIcon(casillaBlanco);
    ui->casilla65->setIcon(casillaBlanco);
    ui->casilla67->setIcon(casillaBlanco);
    ui->casilla69->setIcon(casillaBlanco);
    ui->casilla70->setIcon(casillaBlanco);
    ui->casilla72->setIcon(casillaBlanco);
    ui->casilla74->setIcon(casillaBlanco);
    ui->casilla76->setIcon(casillaBlanco);
    ui->casilla78->setIcon(casillaBlanco);

    ui->casilla81->setIcon(casillaBlanco);
    ui->casilla83->setIcon(casillaBlanco);
    ui->casilla85->setIcon(casillaBlanco);
    ui->casilla87->setIcon(casillaBlanco);
    ui->casilla89->setIcon(casillaBlanco);
    ui->casilla90->setIcon(casillaBlanco);
    ui->casilla92->setIcon(casillaBlanco);
    ui->casilla94->setIcon(casillaBlanco);
    ui->casilla96->setIcon(casillaBlanco);
    ui->casilla98->setIcon(casillaBlanco);


}

void MainWindow::asignarTorres()
{
    QPixmap torreArquera(":/new/prefix1/torreArqueros.png");
    QPixmap torreMago(":/new/prefix1/torreMago.png");
    QPixmap torreArtillero(":/new/prefix1/torreArtillero.jpg");
    QPixmap torreFuego(":/new/prefix1/torreLanzaFuego.png");
    ui->torreArqueraButton->setIcon(torreArquera);
    ui->torreMagoButton->setIcon(torreMago);
    ui->torreArtilleraButton->setIcon(torreArtillero);
    ui->torreFuegoButton->setIcon(torreFuego);

}

void MainWindow::habilitatTorres()
{
    ui->torreMagoButton->setEnabled(true);
    ui->torreArqueraButton->setEnabled(true);
    ui->torreFuegoButton->setEnabled(true);
    ui->torreArtilleraButton->setEnabled(true);
    ui->eliminarCursoButton->setEnabled(true);
}

void MainWindow::desabilitarTorres()
{
    ui->torreMagoButton->setEnabled(false);
    ui->torreArqueraButton->setEnabled(false);
    ui->torreFuegoButton->setEnabled(false);
    ui->torreArtilleraButton->setEnabled(false);
    ui->eliminarCursoButton->setEnabled(false);
}

void MainWindow::evaluarEstuduante(int casillaTorre, int casillaEstudiante, QString tipoTorre)
{
    if(tipoTorre == "TorreArquera"){
        ataqueTorreArquera(casillaTorre,casillaEstudiante);
    }
    if(tipoTorre =="TorreMago"){
        ataqueTorreMago(casillaTorre,casillaEstudiante);
    }
    if(tipoTorre == "TorreArtillero"){
        ataqueTorreArtillero(casillaTorre,casillaEstudiante);
    }

}

void MainWindow::ataqueTorreArquera(int casillaTorre, int casillaEstudiante)
{
    QPixmap signoPregunta(":/new/prefix1/signoPregunta.png");

    if(casillaEstudiante - casillaTorre==11){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==10){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

    if(casillaEstudiante - casillaTorre==9){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==1){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

    if(casillaEstudiante - casillaTorre==-1){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-9){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {


        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==-10){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-11){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

}

void MainWindow::ataqueTorreMago(int casillaTorre, int casillaEstudiante)
{
    QPixmap signoPregunta(":/new/prefix1/signoPregunta.png");
    if(casillaEstudiante - casillaTorre==11){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==10){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

    if(casillaEstudiante - casillaTorre==9){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==1){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

    if(casillaEstudiante - casillaTorre==-1){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-9){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {


        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==-10){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-11){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

    if(casillaEstudiante - casillaTorre==22){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==21){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==20){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==19){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==18){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==12){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==8){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==2){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-2){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-8){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-12){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-18){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;

        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==-19){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==-20){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-21){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-22){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;



        }
    }
}

void MainWindow::ataqueTorreArtillero(int casillaTorre, int casillaEstudiante)
{
    QPixmap signoPregunta(":/new/prefix1/signoPregunta.png");
    if(casillaEstudiante - casillaTorre==11){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==10){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

    if(casillaEstudiante - casillaTorre==9){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==1){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

    if(casillaEstudiante - casillaTorre==-1){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-9){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {


        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==-10){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-11){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }

    if(casillaEstudiante - casillaTorre==22){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==21){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==20){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==19){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==18){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==12){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==8){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==2){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 98:
            lb->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 99:
            lb->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-2){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 90:
            lb->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 91:
            lb->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 92:
            lb->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 93:
            lb->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 94:
            lb->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 95:
            lb->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 96:
            lb->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 97:
            lb->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-8){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 88:
            lb->setGeometry(ui->casilla88->x()+25,ui->casilla88->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 89:
            lb->setGeometry(ui->casilla89->x()+25,ui->casilla89->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-12){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 80:
            lb->setGeometry(ui->casilla80->x()+25,ui->casilla80->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 81:
            lb->setGeometry(ui->casilla81->x()+25,ui->casilla81->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 82:
            lb->setGeometry(ui->casilla82->x()+25,ui->casilla82->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 83:
            lb->setGeometry(ui->casilla83->x()+25,ui->casilla83->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 84:
            lb->setGeometry(ui->casilla84->x()+25,ui->casilla84->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 85:
            lb->setGeometry(ui->casilla85->x()+25,ui->casilla85->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 86:
            lb->setGeometry(ui->casilla86->x()+25,ui->casilla86->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 87:
            lb->setGeometry(ui->casilla87->x()+25,ui->casilla87->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-18){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;

        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==-19){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
    if(casillaEstudiante - casillaTorre==-20){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 9:
            lb->setGeometry(ui->casilla09->x()+25,ui->casilla09->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 19:
            lb->setGeometry(ui->casilla19->x()+25,ui->casilla19->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 29:
            lb->setGeometry(ui->casilla29->x()+25,ui->casilla29->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 39:
            lb->setGeometry(ui->casilla39->x()+25,ui->casilla39->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 49:
            lb->setGeometry(ui->casilla49->x()+25,ui->casilla49->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 59:
            lb->setGeometry(ui->casilla59->x()+25,ui->casilla59->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 69:
            lb->setGeometry(ui->casilla69->x()+25,ui->casilla69->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 79:
            lb->setGeometry(ui->casilla79->x()+25,ui->casilla79->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-21){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 8:
            lb->setGeometry(ui->casilla08->x()+25,ui->casilla08->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 18:
            lb->setGeometry(ui->casilla18->x()+25,ui->casilla18->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 28:
            lb->setGeometry(ui->casilla28->x()+25,ui->casilla28->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 38:
            lb->setGeometry(ui->casilla38->x()+25,ui->casilla38->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 48:
            lb->setGeometry(ui->casilla48->x()+25,ui->casilla48->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 58:
            lb->setGeometry(ui->casilla58->x()+25,ui->casilla58->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 68:
            lb->setGeometry(ui->casilla68->x()+25,ui->casilla68->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 78:
            lb->setGeometry(ui->casilla78->x()+25,ui->casilla78->y()+25,20,20);
            lb->setVisible(true);
            break;

        }
    }
    if(casillaEstudiante - casillaTorre==-22){
        QLabel *lb = new QLabel;
        lb->setVisible(false);
        lb->setPixmap(signoPregunta);

        switch (casillaEstudiante) {

        case 0:
            lb->setGeometry(ui->casilla00->x()+25,ui->casilla00->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 1:
            lb->setGeometry(ui->casilla01->x()+25,ui->casilla01->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 2:
            lb->setGeometry(ui->casilla02->x()+25,ui->casilla02->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 3:
            lb->setGeometry(ui->casilla03->x()+25,ui->casilla03->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 4:
            lb->setGeometry(ui->casilla04->x()+25,ui->casilla04->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 5:
            lb->setGeometry(ui->casilla05->x()+25,ui->casilla05->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 6:
            lb->setGeometry(ui->casilla06->x()+25,ui->casilla06->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 7:
            lb->setGeometry(ui->casilla07->x()+25,ui->casilla07->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 10:
            lb->setGeometry(ui->casilla10->x()+25,ui->casilla10->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 11:
            lb->setGeometry(ui->casilla11->x()+25,ui->casilla11->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 12:
            lb->setGeometry(ui->casilla12->x()+25,ui->casilla12->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 13:
            lb->setGeometry(ui->casilla13->x()+25,ui->casilla13->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 14:
            lb->setGeometry(ui->casilla14->x()+25,ui->casilla14->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 15:
            lb->setGeometry(ui->casilla15->x()+25,ui->casilla15->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 16:
            lb->setGeometry(ui->casilla16->x()+25,ui->casilla16->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 17:
            lb->setGeometry(ui->casilla17->x()+25,ui->casilla17->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 20:
            lb->setGeometry(ui->casilla20->x()+25,ui->casilla20->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 21:
            lb->setGeometry(ui->casilla21->x()+25,ui->casilla21->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 22:
            lb->setGeometry(ui->casilla22->x()+25,ui->casilla22->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 23:
            lb->setGeometry(ui->casilla23->x()+25,ui->casilla23->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 24:
            lb->setGeometry(ui->casilla24->x()+25,ui->casilla24->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 25:
            lb->setGeometry(ui->casilla25->x()+25,ui->casilla25->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 26:
            lb->setGeometry(ui->casilla26->x()+25,ui->casilla26->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 27:
            lb->setGeometry(ui->casilla27->x()+25,ui->casilla27->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 30:
            lb->setGeometry(ui->casilla30->x()+25,ui->casilla30->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 31:
            lb->setGeometry(ui->casilla31->x()+25,ui->casilla31->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 32:
            lb->setGeometry(ui->casilla32->x()+25,ui->casilla32->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 33:
            lb->setGeometry(ui->casilla33->x()+25,ui->casilla33->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 34:
            lb->setGeometry(ui->casilla34->x()+25,ui->casilla34->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 35:
            lb->setGeometry(ui->casilla35->x()+25,ui->casilla35->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 36:
            lb->setGeometry(ui->casilla36->x()+25,ui->casilla36->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 37:
            lb->setGeometry(ui->casilla37->x()+25,ui->casilla37->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 40:
            lb->setGeometry(ui->casilla40->x()+25,ui->casilla40->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 41:
            lb->setGeometry(ui->casilla41->x()+25,ui->casilla41->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 42:
            lb->setGeometry(ui->casilla42->x()+25,ui->casilla42->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 43:
            lb->setGeometry(ui->casilla43->x()+25,ui->casilla43->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 44:
            lb->setGeometry(ui->casilla44->x()+25,ui->casilla44->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 45:
            lb->setGeometry(ui->casilla45->x()+25,ui->casilla45->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 46:
            lb->setGeometry(ui->casilla46->x()+25,ui->casilla46->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 47:
            lb->setGeometry(ui->casilla47->x()+25,ui->casilla47->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 50:
            lb->setGeometry(ui->casilla50->x()+25,ui->casilla50->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 51:
            lb->setGeometry(ui->casilla51->x()+25,ui->casilla51->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 52:
            lb->setGeometry(ui->casilla52->x()+25,ui->casilla52->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 53:
            lb->setGeometry(ui->casilla53->x()+25,ui->casilla53->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 54:
            lb->setGeometry(ui->casilla54->x()+25,ui->casilla54->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 55:
            lb->setGeometry(ui->casilla55->x()+25,ui->casilla55->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 56:
            lb->setGeometry(ui->casilla56->x()+25,ui->casilla56->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 57:
            lb->setGeometry(ui->casilla57->x()+25,ui->casilla57->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 60:
            lb->setGeometry(ui->casilla60->x()+25,ui->casilla60->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 61:
            lb->setGeometry(ui->casilla61->x()+25,ui->casilla61->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 62:
            lb->setGeometry(ui->casilla62->x()+25,ui->casilla62->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 63:
            lb->setGeometry(ui->casilla63->x()+25,ui->casilla63->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 64:
            lb->setGeometry(ui->casilla64->x()+25,ui->casilla64->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 65:
            lb->setGeometry(ui->casilla65->x()+25,ui->casilla65->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 66:
            lb->setGeometry(ui->casilla66->x()+25,ui->casilla66->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 67:
            lb->setGeometry(ui->casilla67->x()+25,ui->casilla67->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 70:
            lb->setGeometry(ui->casilla70->x()+25,ui->casilla70->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 71:
            lb->setGeometry(ui->casilla71->x()+25,ui->casilla71->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 72:
            lb->setGeometry(ui->casilla72->x()+25,ui->casilla72->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 73:
            lb->setGeometry(ui->casilla73->x()+25,ui->casilla73->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 74:
            lb->setGeometry(ui->casilla74->x()+25,ui->casilla74->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 75:
            lb->setGeometry(ui->casilla75->x()+25,ui->casilla75->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 76:
            lb->setGeometry(ui->casilla76->x()+25,ui->casilla76->y()+25,20,20);
            lb->setVisible(true);
            break;
        case 77:
            lb->setGeometry(ui->casilla77->x()+25,ui->casilla77->y()+25,20,20);
            lb->setVisible(true);
            break;
        }
    }
}

void MainWindow::moverEstudiante(int casillaActual, int casillaSiguiente,int numZombie)
{
    if(casillaActual==90||casillaActual==91|| casillaActual == 92||casillaActual==93||casillaActual==94|| casillaActual == 95||casillaActual==96||casillaActual==97|| casillaActual == 98||casillaActual == 99){
        switch (casillaActual) {
            case 90:
                if(numZombie==0){
                    ui->zombie00->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==1){
                    ui->zombie01->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==2){
                    ui->zombie02->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==3){
                    ui->zombie03->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==4){
                    ui->zombie04->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==5){
                    ui->zombie05->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==6){
                    ui->zombie06->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==7){
                    ui->zombie07->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==8){
                    ui->zombie08->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==9){
                    ui->zombie09->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==10){
                    ui->zombie10->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==11){
                    ui->zombie11->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==12){
                    ui->zombie12->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==13){
                    ui->zombie13->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==14){
                    ui->zombie14->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==15){
                    ui->zombie15->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==16){
                    ui->zombie16->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==17){
                    ui->zombie17->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==18){
                    ui->zombie18->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
                if(numZombie==19){
                    ui->zombie19->setGeometry(ui->casilla90->x()+25,ui->casilla90->y()+25,35,35);
                }
            break;
        case 91:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla91->x()+25,ui->casilla91->y()+25,35,35);
            }
        break;
        case 92:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla92->x()+25,ui->casilla92->y()+25,35,35);
            }
        break;
        case 93:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla93->x()+25,ui->casilla93->y()+25,35,35);
            }
        break;
        case 94:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla94->x()+25,ui->casilla94->y()+25,35,35);
            }
        break;
        case 95:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla95->x()+25,ui->casilla95->y()+25,35,35);
            }
            break;
        case 96:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla96->x()+25,ui->casilla96->y()+25,35,35);
            }
            break;
        case 97:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla97->x()+25,ui->casilla97->y()+25,35,35);
            }
        break;
        case 98:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla98->x()+25,ui->casilla98->y()+25,35,35);
            }
        break;
        case 99:
            if(numZombie==0){
                ui->zombie00->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==1){
                ui->zombie01->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==2){
                ui->zombie02->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==3){
                ui->zombie03->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==4){
                ui->zombie04->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==5){
                ui->zombie05->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==6){
                ui->zombie06->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==7){
                ui->zombie07->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==8){
                ui->zombie08->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==9){
                ui->zombie09->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==10){
                ui->zombie10->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==11){
                ui->zombie11->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==12){
                ui->zombie12->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==13){
                ui->zombie13->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==14){
                ui->zombie14->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==15){
                ui->zombie15->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==16){
                ui->zombie16->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==17){
                ui->zombie17->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==18){
                ui->zombie18->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
            if(numZombie==19){
                ui->zombie19->setGeometry(ui->casilla99->x()+25,ui->casilla99->y()+25,35,35);
            }
        break;

        }
    }
    if(casillaActual-casillaSiguiente == 11){
        if(numZombie == 0){
            ui->zombie00->setGeometry(ui->zombie00->x()-35,ui->zombie00->y()-35,35,35);
        }
        if(numZombie == 1){
            ui->zombie01->setGeometry(ui->zombie01->x()-35,ui->zombie01->y()-35,35,35);
        }
        if(numZombie == 2){
            ui->zombie02->setGeometry(ui->zombie02->x()-35,ui->zombie02->y()-35,35,35);
        }
        if(numZombie == 3){
            ui->zombie03->setGeometry(ui->zombie03->x()-35,ui->zombie03->y()-35,35,35);
        }
        if(numZombie == 4){
            ui->zombie04->setGeometry(ui->zombie04->x()-35,ui->zombie04->y()-35,35,35);
        }
        if(numZombie == 5){
            ui->zombie05->setGeometry(ui->zombie05->x()-35,ui->zombie05->y()-35,35,35);
        }
        if(numZombie == 6){
            ui->zombie06->setGeometry(ui->zombie06->x()-35,ui->zombie06->y()-35,35,35);
        }
        if(numZombie == 7){
            ui->zombie07->setGeometry(ui->zombie07->x()-35,ui->zombie07->y()-35,35,35);
        }
        if(numZombie == 8){
            ui->zombie08->setGeometry(ui->zombie08->x()-35,ui->zombie08->y()-35,35,35);
        }
        if(numZombie == 9){
            ui->zombie09->setGeometry(ui->zombie09->x()-35,ui->zombie09->y()-35,35,35);
        }
        if(numZombie == 10){
            ui->zombie10->setGeometry(ui->zombie10->x()-35,ui->zombie10->y()-35,35,35);
        }
        if(numZombie == 11){
            ui->zombie11->setGeometry(ui->zombie11->x()-35,ui->zombie11->y()-35,35,35);
        }
        if(numZombie == 12){
            ui->zombie12->setGeometry(ui->zombie12->x()-35,ui->zombie12->y()-35,35,35);
        }
        if(numZombie == 13){
            ui->zombie13->setGeometry(ui->zombie13->x()-35,ui->zombie13->y()-35,35,35);
        }
        if(numZombie == 14){
            ui->zombie14->setGeometry(ui->zombie14->x()-35,ui->zombie14->y()-35,35,35);
        }
        if(numZombie == 15){
            ui->zombie15->setGeometry(ui->zombie15->x()-35,ui->zombie15->y()-35,35,35);
        }
        if(numZombie == 16){
            ui->zombie16->setGeometry(ui->zombie16->x()-35,ui->zombie16->y()-35,35,35);
        }
        if(numZombie == 17){
            ui->zombie17->setGeometry(ui->zombie17->x()-35,ui->zombie17->y()-35,35,35);
        }
        if(numZombie == 18){
            ui->zombie18->setGeometry(ui->zombie18->x()-35,ui->zombie18->y()-35,35,35);
        }
        if(numZombie == 19){
            ui->zombie19->setGeometry(ui->zombie19->x()-35,ui->zombie19->y()-35,35,35);
        }
    }
    if(casillaActual-casillaSiguiente == 10){
        if(numZombie == 0){
            ui->zombie00->setGeometry(ui->zombie00->x(),ui->zombie00->y()-35,35,35);
        }
        if(numZombie == 1){
            ui->zombie01->setGeometry(ui->zombie01->x(),ui->zombie01->y()-35,35,35);
        }
        if(numZombie == 2){
            ui->zombie02->setGeometry(ui->zombie02->x(),ui->zombie02->y()-35,35,35);
        }
        if(numZombie == 3){
            ui->zombie03->setGeometry(ui->zombie03->x(),ui->zombie03->y()-35,35,35);
        }
        if(numZombie == 4){
            ui->zombie04->setGeometry(ui->zombie04->x(),ui->zombie04->y()-35,35,35);
        }
        if(numZombie == 5){
            ui->zombie05->setGeometry(ui->zombie05->x(),ui->zombie05->y()-35,35,35);
        }
        if(numZombie == 6){
            ui->zombie06->setGeometry(ui->zombie06->x(),ui->zombie06->y()-35,35,35);
        }
        if(numZombie == 7){
            ui->zombie07->setGeometry(ui->zombie07->x(),ui->zombie07->y()-35,35,35);
        }
        if(numZombie == 8){
            ui->zombie08->setGeometry(ui->zombie08->x(),ui->zombie08->y()-35,35,35);
        }
        if(numZombie == 9){
            ui->zombie09->setGeometry(ui->zombie09->x(),ui->zombie09->y()-35,35,35);
        }
        if(numZombie == 10){
            ui->zombie10->setGeometry(ui->zombie10->x(),ui->zombie10->y()-35,35,35);
        }
        if(numZombie == 11){
            ui->zombie11->setGeometry(ui->zombie11->x(),ui->zombie11->y()-35,35,35);
        }
        if(numZombie == 12){
            ui->zombie12->setGeometry(ui->zombie12->x(),ui->zombie12->y()-35,35,35);
        }
        if(numZombie == 13){
            ui->zombie13->setGeometry(ui->zombie13->x(),ui->zombie13->y()-35,35,35);
        }
        if(numZombie == 14){
            ui->zombie14->setGeometry(ui->zombie14->x(),ui->zombie14->y()-35,35,35);
        }
        if(numZombie == 15){
            ui->zombie15->setGeometry(ui->zombie15->x(),ui->zombie15->y()-35,35,35);
        }
        if(numZombie == 16){
            ui->zombie16->setGeometry(ui->zombie16->x(),ui->zombie16->y()-35,35,35);
        }
        if(numZombie == 17){
            ui->zombie17->setGeometry(ui->zombie17->x(),ui->zombie17->y()-35,35,35);
        }
        if(numZombie == 18){
            ui->zombie18->setGeometry(ui->zombie18->x(),ui->zombie18->y()-35,35,35);
        }
        if(numZombie == 19){
            ui->zombie19->setGeometry(ui->zombie19->x(),ui->zombie19->y()-35,35,35);
        }
    }
    if(casillaActual-casillaSiguiente == 9){
        if(numZombie == 0){
            ui->zombie00->setGeometry(ui->zombie00->x()+35,ui->zombie00->y()-35,35,35);
        }
        if(numZombie == 1){
            ui->zombie01->setGeometry(ui->zombie01->x()+35,ui->zombie01->y()-35,35,35);
        }
        if(numZombie == 2){
            ui->zombie02->setGeometry(ui->zombie02->x()+35,ui->zombie02->y()-35,35,35);
        }
        if(numZombie == 3){
            ui->zombie03->setGeometry(ui->zombie03->x()+35,ui->zombie03->y()-35,35,35);
        }
        if(numZombie == 4){
            ui->zombie04->setGeometry(ui->zombie04->x()+35,ui->zombie04->y()-35,35,35);
        }
        if(numZombie == 5){
            ui->zombie05->setGeometry(ui->zombie05->x()+35,ui->zombie05->y()-35,35,35);
        }
        if(numZombie == 6){
            ui->zombie06->setGeometry(ui->zombie06->x()+35,ui->zombie06->y()-35,35,35);
        }
        if(numZombie == 7){
            ui->zombie07->setGeometry(ui->zombie07->x()+35,ui->zombie07->y()-35,35,35);
        }
        if(numZombie == 8){
            ui->zombie08->setGeometry(ui->zombie08->x()+35,ui->zombie08->y()-35,35,35);
        }
        if(numZombie == 9){
            ui->zombie09->setGeometry(ui->zombie09->x()+35,ui->zombie09->y()-35,35,35);
        }
        if(numZombie == 10){
            ui->zombie10->setGeometry(ui->zombie10->x()+35,ui->zombie10->y()-35,35,35);
        }
        if(numZombie == 11){
            ui->zombie11->setGeometry(ui->zombie11->x()+35,ui->zombie11->y()-35,35,35);
        }
        if(numZombie == 12){
            ui->zombie12->setGeometry(ui->zombie12->x()+35,ui->zombie12->y()-35,35,35);
        }
        if(numZombie == 13){
            ui->zombie13->setGeometry(ui->zombie13->x()+35,ui->zombie13->y()-35,35,35);
        }
        if(numZombie == 14){
            ui->zombie14->setGeometry(ui->zombie14->x()+35,ui->zombie14->y()-35,35,35);
        }
        if(numZombie == 15){
            ui->zombie15->setGeometry(ui->zombie15->x()+35,ui->zombie15->y()-35,35,35);
        }
        if(numZombie == 16){
            ui->zombie16->setGeometry(ui->zombie16->x()+35,ui->zombie16->y()-35,35,35);
        }
        if(numZombie == 17){
            ui->zombie17->setGeometry(ui->zombie17->x()+35,ui->zombie17->y()-35,35,35);
        }
        if(numZombie == 18){
            ui->zombie18->setGeometry(ui->zombie18->x()+35,ui->zombie18->y()-35,35,35);
        }
        if(numZombie == 19){
            ui->zombie19->setGeometry(ui->zombie19->x()+35,ui->zombie19->y()-35,35,35);
        }
    }
    if(casillaActual-casillaSiguiente == 1){
        if(numZombie == 0){
            ui->zombie00->setGeometry(ui->zombie00->x()-35,ui->zombie00->y(),35,35);
        }
        if(numZombie == 1){
            ui->zombie01->setGeometry(ui->zombie01->x()-35,ui->zombie01->y(),35,35);
        }
        if(numZombie == 2){
            ui->zombie02->setGeometry(ui->zombie02->x()-35,ui->zombie02->y(),35,35);
        }
        if(numZombie == 3){
            ui->zombie03->setGeometry(ui->zombie03->x()-35,ui->zombie03->y(),35,35);
        }
        if(numZombie == 4){
            ui->zombie04->setGeometry(ui->zombie04->x()-35,ui->zombie04->y(),35,35);
        }
        if(numZombie == 5){
            ui->zombie05->setGeometry(ui->zombie05->x()-35,ui->zombie05->y(),35,35);
        }
        if(numZombie == 6){
            ui->zombie06->setGeometry(ui->zombie06->x()-35,ui->zombie06->y(),35,35);
        }
        if(numZombie == 7){
            ui->zombie07->setGeometry(ui->zombie07->x()-35,ui->zombie07->y(),35,35);
        }
        if(numZombie == 8){
            ui->zombie08->setGeometry(ui->zombie08->x()-35,ui->zombie08->y(),35,35);
        }
        if(numZombie == 9){
            ui->zombie09->setGeometry(ui->zombie09->x()-35,ui->zombie09->y(),35,35);
        }
        if(numZombie == 10){
            ui->zombie10->setGeometry(ui->zombie10->x()-35,ui->zombie10->y(),35,35);
        }
        if(numZombie == 11){
            ui->zombie11->setGeometry(ui->zombie11->x()-35,ui->zombie11->y(),35,35);
        }
        if(numZombie == 12){
            ui->zombie12->setGeometry(ui->zombie12->x()-35,ui->zombie12->y(),35,35);
        }
        if(numZombie == 13){
            ui->zombie13->setGeometry(ui->zombie13->x()-35,ui->zombie13->y(),35,35);
        }
        if(numZombie == 14){
            ui->zombie14->setGeometry(ui->zombie14->x()-35,ui->zombie14->y(),35,35);
        }
        if(numZombie == 15){
            ui->zombie15->setGeometry(ui->zombie15->x()-35,ui->zombie15->y(),35,35);
        }
        if(numZombie == 16){
            ui->zombie16->setGeometry(ui->zombie16->x()-35,ui->zombie16->y(),35,35);
        }
        if(numZombie == 17){
            ui->zombie17->setGeometry(ui->zombie17->x()-35,ui->zombie17->y(),35,35);
        }
        if(numZombie == 18){
            ui->zombie18->setGeometry(ui->zombie18->x()-35,ui->zombie18->y(),35,35);
        }
        if(numZombie == 19){
            ui->zombie19->setGeometry(ui->zombie19->x()-35,ui->zombie19->y(),35,35);
        }
    }
    if(casillaActual-casillaSiguiente == -1){
        if(numZombie == 0){
            ui->zombie00->setGeometry(ui->zombie00->x()+35,ui->zombie00->y(),35,35);
        }
        if(numZombie == 1){
            ui->zombie01->setGeometry(ui->zombie01->x()+35,ui->zombie01->y(),35,35);
        }
        if(numZombie == 2){
            ui->zombie02->setGeometry(ui->zombie02->x()+35,ui->zombie02->y(),35,35);
        }
        if(numZombie == 3){
            ui->zombie03->setGeometry(ui->zombie03->x()+35,ui->zombie03->y(),35,35);
        }
        if(numZombie == 4){
            ui->zombie04->setGeometry(ui->zombie04->x()+35,ui->zombie04->y(),35,35);
        }
        if(numZombie == 5){
            ui->zombie05->setGeometry(ui->zombie05->x()+35,ui->zombie05->y(),35,35);
        }
        if(numZombie == 6){
            ui->zombie06->setGeometry(ui->zombie06->x()+35,ui->zombie06->y(),35,35);
        }
        if(numZombie == 7){
            ui->zombie07->setGeometry(ui->zombie07->x()+35,ui->zombie07->y(),35,35);
        }
        if(numZombie == 8){
            ui->zombie08->setGeometry(ui->zombie08->x()+35,ui->zombie08->y(),35,35);
        }
        if(numZombie == 9){
            ui->zombie09->setGeometry(ui->zombie09->x()+35,ui->zombie09->y(),35,35);
        }
        if(numZombie == 10){
            ui->zombie10->setGeometry(ui->zombie10->x()+35,ui->zombie10->y(),35,35);
        }
        if(numZombie == 11){
            ui->zombie11->setGeometry(ui->zombie11->x()+35,ui->zombie11->y(),35,35);
        }
        if(numZombie == 12){
            ui->zombie12->setGeometry(ui->zombie12->x()+35,ui->zombie12->y(),35,35);
        }
        if(numZombie == 13){
            ui->zombie13->setGeometry(ui->zombie13->x()+35,ui->zombie13->y(),35,35);
        }
        if(numZombie == 14){
            ui->zombie14->setGeometry(ui->zombie14->x()+35,ui->zombie14->y(),35,35);
        }
        if(numZombie == 15){
            ui->zombie15->setGeometry(ui->zombie15->x()+35,ui->zombie15->y(),35,35);
        }
        if(numZombie == 16){
            ui->zombie16->setGeometry(ui->zombie16->x()+35,ui->zombie16->y(),35,35);
        }
        if(numZombie == 17){
            ui->zombie17->setGeometry(ui->zombie17->x()+35,ui->zombie17->y(),35,35);
        }
        if(numZombie == 18){
            ui->zombie18->setGeometry(ui->zombie18->x()+35,ui->zombie18->y(),35,35);
        }
        if(numZombie == 19){
            ui->zombie19->setGeometry(ui->zombie19->x()+35,ui->zombie19->y(),35,35);
        }
    }
    if(casillaActual-casillaSiguiente == -9){
        if(numZombie == 0){
            ui->zombie00->setGeometry(ui->zombie00->x()-35,ui->zombie00->y()+35,35,35);
        }
        if(numZombie == 1){
            ui->zombie01->setGeometry(ui->zombie01->x()-35,ui->zombie01->y()+35,35,35);
        }
        if(numZombie == 2){
            ui->zombie02->setGeometry(ui->zombie02->x()-35,ui->zombie02->y()+35,35,35);
        }
        if(numZombie == 3){
            ui->zombie03->setGeometry(ui->zombie03->x()-35,ui->zombie03->y()+35,35,35);
        }
        if(numZombie == 4){
            ui->zombie04->setGeometry(ui->zombie04->x()-35,ui->zombie04->y()+35,35,35);
        }
        if(numZombie == 5){
            ui->zombie05->setGeometry(ui->zombie05->x()-35,ui->zombie05->y()+35,35,35);
        }
        if(numZombie == 6){
            ui->zombie06->setGeometry(ui->zombie06->x()-35,ui->zombie06->y()+35,35,35);
        }
        if(numZombie == 7){
            ui->zombie07->setGeometry(ui->zombie07->x()-35,ui->zombie07->y()+35,35,35);
        }
        if(numZombie == 8){
            ui->zombie08->setGeometry(ui->zombie08->x()-35,ui->zombie08->y()+35,35,35);
        }
        if(numZombie == 9){
            ui->zombie09->setGeometry(ui->zombie09->x()-35,ui->zombie09->y()+35,35,35);
        }
        if(numZombie == 10){
            ui->zombie10->setGeometry(ui->zombie10->x()-35,ui->zombie10->y()+35,35,35);
        }
        if(numZombie == 11){
            ui->zombie11->setGeometry(ui->zombie11->x()-35,ui->zombie11->y()+35,35,35);
        }
        if(numZombie == 12){
            ui->zombie12->setGeometry(ui->zombie12->x()-35,ui->zombie12->y()+35,35,35);
        }
        if(numZombie == 13){
            ui->zombie13->setGeometry(ui->zombie13->x()-35,ui->zombie13->y()+35,35,35);
        }
        if(numZombie == 14){
            ui->zombie14->setGeometry(ui->zombie14->x()-35,ui->zombie14->y()+35,35,35);
        }
        if(numZombie == 15){
            ui->zombie15->setGeometry(ui->zombie15->x()-35,ui->zombie15->y()+35,35,35);
        }
        if(numZombie == 16){
            ui->zombie16->setGeometry(ui->zombie16->x()-35,ui->zombie16->y()+35,35,35);
        }
        if(numZombie == 17){
            ui->zombie17->setGeometry(ui->zombie17->x()-35,ui->zombie17->y()+35,35,35);
        }
        if(numZombie == 18){
            ui->zombie18->setGeometry(ui->zombie18->x()-35,ui->zombie18->y()+35,35,35);
        }
        if(numZombie == 19){
            ui->zombie19->setGeometry(ui->zombie19->x()-35,ui->zombie19->y()+35,35,35);
        }
    }
    if(casillaActual-casillaSiguiente == -10){
        if(numZombie == 0){
            ui->zombie00->setGeometry(ui->zombie00->x(),ui->zombie00->y()+35,35,35);
        }
        if(numZombie == 1){
            ui->zombie01->setGeometry(ui->zombie01->x(),ui->zombie01->y()+35,35,35);
        }
        if(numZombie == 2){
            ui->zombie02->setGeometry(ui->zombie02->x(),ui->zombie02->y()+35,35,35);
        }
        if(numZombie == 3){
            ui->zombie03->setGeometry(ui->zombie03->x(),ui->zombie03->y()+35,35,35);
        }
        if(numZombie == 4){
            ui->zombie04->setGeometry(ui->zombie04->x(),ui->zombie04->y()+35,35,35);
        }
        if(numZombie == 5){
            ui->zombie05->setGeometry(ui->zombie05->x(),ui->zombie05->y()+35,35,35);
        }
        if(numZombie == 6){
            ui->zombie06->setGeometry(ui->zombie06->x(),ui->zombie06->y()+35,35,35);
        }
        if(numZombie == 7){
            ui->zombie07->setGeometry(ui->zombie07->x(),ui->zombie07->y()+35,35,35);
        }
        if(numZombie == 8){
            ui->zombie08->setGeometry(ui->zombie08->x(),ui->zombie08->y()+35,35,35);
        }
        if(numZombie == 9){
            ui->zombie09->setGeometry(ui->zombie09->x(),ui->zombie09->y()+35,35,35);
        }
        if(numZombie == 10){
            ui->zombie10->setGeometry(ui->zombie10->x(),ui->zombie10->y()+35,35,35);
        }
        if(numZombie == 11){
            ui->zombie11->setGeometry(ui->zombie11->x(),ui->zombie11->y()+35,35,35);
        }
        if(numZombie == 12){
            ui->zombie12->setGeometry(ui->zombie12->x(),ui->zombie12->y()+35,35,35);
        }
        if(numZombie == 13){
            ui->zombie13->setGeometry(ui->zombie13->x(),ui->zombie13->y()+35,35,35);
        }
        if(numZombie == 14){
            ui->zombie14->setGeometry(ui->zombie14->x(),ui->zombie14->y()+35,35,35);
        }
        if(numZombie == 15){
            ui->zombie15->setGeometry(ui->zombie15->x(),ui->zombie15->y()+35,35,35);
        }
        if(numZombie == 16){
            ui->zombie16->setGeometry(ui->zombie16->x(),ui->zombie16->y()+35,35,35);
        }
        if(numZombie == 17){
            ui->zombie17->setGeometry(ui->zombie17->x(),ui->zombie17->y()+35,35,35);
        }
        if(numZombie == 18){
            ui->zombie18->setGeometry(ui->zombie18->x(),ui->zombie18->y()+35,35,35);
        }
        if(numZombie == 19){
            ui->zombie19->setGeometry(ui->zombie19->x(),ui->zombie19->y()+35,35,35);
        }
    }
    if(casillaActual-casillaSiguiente == -11){
        if(numZombie == 0){
            ui->zombie00->setGeometry(ui->zombie00->x()+35,ui->zombie00->y()+35,35,35);
        }
        if(numZombie == 1){
            ui->zombie01->setGeometry(ui->zombie01->x()+35,ui->zombie01->y()+35,35,35);
        }
        if(numZombie == 2){
            ui->zombie02->setGeometry(ui->zombie02->x()+35,ui->zombie02->y()+35,35,35);
        }
        if(numZombie == 3){
            ui->zombie03->setGeometry(ui->zombie03->x()+35,ui->zombie03->y()+35,35,35);
        }
        if(numZombie == 4){
            ui->zombie04->setGeometry(ui->zombie04->x()+35,ui->zombie04->y()+35,35,35);
        }
        if(numZombie == 5){
            ui->zombie05->setGeometry(ui->zombie05->x()+35,ui->zombie05->y()+35,35,35);
        }
        if(numZombie == 6){
            ui->zombie06->setGeometry(ui->zombie06->x()+35,ui->zombie06->y()+35,35,35);
        }
        if(numZombie == 7){
            ui->zombie07->setGeometry(ui->zombie07->x()+35,ui->zombie07->y()+35,35,35);
        }
        if(numZombie == 8){
            ui->zombie08->setGeometry(ui->zombie08->x()+35,ui->zombie08->y()+35,35,35);
        }
        if(numZombie == 9){
            ui->zombie09->setGeometry(ui->zombie09->x()+35,ui->zombie09->y()+35,35,35);
        }
        if(numZombie == 10){
            ui->zombie10->setGeometry(ui->zombie10->x()+35,ui->zombie10->y()+35,35,35);
        }
        if(numZombie == 11){
            ui->zombie11->setGeometry(ui->zombie11->x()+35,ui->zombie11->y()+35,35,35);
        }
        if(numZombie == 12){
            ui->zombie12->setGeometry(ui->zombie12->x()+35,ui->zombie12->y()+35,35,35);
        }
        if(numZombie == 13){
            ui->zombie13->setGeometry(ui->zombie13->x()+35,ui->zombie13->y()+35,35,35);
        }
        if(numZombie == 14){
            ui->zombie14->setGeometry(ui->zombie14->x()+35,ui->zombie14->y()+35,35,35);
        }
        if(numZombie == 15){
            ui->zombie15->setGeometry(ui->zombie15->x()+35,ui->zombie15->y()+35,35,35);
        }
        if(numZombie == 16){
            ui->zombie16->setGeometry(ui->zombie16->x()+35,ui->zombie16->y()+35,35,35);
        }
        if(numZombie == 17){
            ui->zombie17->setGeometry(ui->zombie17->x()+35,ui->zombie17->y()+35,35,35);
        }
        if(numZombie == 18){
            ui->zombie18->setGeometry(ui->zombie18->x()+35,ui->zombie18->y()+35,35,35);
        }
        if(numZombie == 19){
            ui->zombie19->setGeometry(ui->zombie19->x()+35,ui->zombie19->y()+35,35,35);
        }
    }
}




void MainWindow::on_casilla00_clicked()
{

    //00
    casSelec =0;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}
/*
    QString mp= QString::fromStdString(p1.verMapa());
   qDebug() << mp;
*/
void MainWindow::on_casilla01_clicked()
{
    //01
    casSelec =1;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla02_clicked()
{

    //02
    casSelec =2;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla03_clicked()
{
    //03
    casSelec =3;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla04_clicked()
{
    //04
    casSelec =4;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla05_clicked()
{
    //05
    casSelec =5;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla06_clicked()
{
    //06
    casSelec =6;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla07_clicked()
{
    //07
    casSelec =7;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla08_clicked()
{
    //08
    casSelec =8;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla09_clicked()
{
    //09
    casSelec =9;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla10_clicked()
{
    //10
    casSelec =10;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla11_clicked()
{
    //11
    casSelec =11;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla12_clicked()
{

    //12
    casSelec =12;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla13_clicked()
{
    //13
    casSelec =13;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla14_clicked()
{
    //14
    casSelec =14;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla15_clicked()
{
    //15
    casSelec =15;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla16_clicked()
{
    //16
    casSelec =16;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla17_clicked()
{
    //17
    casSelec =17;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla18_clicked()
{
    //18
    casSelec =18;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla19_clicked()
{
    //19
    casSelec =19;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla20_clicked()
{
    //11
    casSelec =20;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla21_clicked()
{
    //21
    casSelec =21;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla22_clicked()
{

    //22
    casSelec =22;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla23_clicked()
{
    //23
    casSelec =23;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla24_clicked()
{
    //24
    casSelec =24;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla25_clicked()
{
    //25
    casSelec =25;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla26_clicked()
{
    //26
    casSelec =26;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla27_clicked()
{
    //27
    casSelec =27;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla28_clicked()
{
    //28
    casSelec =28;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla29_clicked()
{
    //29
    casSelec =29;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla30_clicked()
{
    //22
    casSelec =30;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}



void MainWindow::on_casilla31_clicked()
{
    //31
    casSelec =31;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla32_clicked()
{

    //32
    casSelec =32;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla33_clicked()
{
    //33
    casSelec =33;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla34_clicked()
{
    //34
    casSelec =34;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla35_clicked()
{
    //35
    casSelec =35;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla36_clicked()
{
    //36
    casSelec =36;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla37_clicked()
{
    //37
    casSelec =37;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla38_clicked()
{
    //38
    casSelec =38;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla39_clicked()
{
    //39
    casSelec =39;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla40_clicked()
{
    //33
    casSelec =40;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}



void MainWindow::on_casilla41_clicked()
{

    casSelec =41;

    casSelec =41;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla42_clicked()
{


    casSelec =42;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla43_clicked()
{
    //43
    casSelec =43;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla44_clicked()
{
    //44
    casSelec =44;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla45_clicked()
{
    //45
    casSelec =45;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla46_clicked()
{
    //46
    casSelec =46;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla47_clicked()
{

    casSelec =47;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla48_clicked()
{
    //48
    casSelec =48;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla49_clicked()
{

    casSelec =49;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla50_clicked()
{
    //50
    casSelec =50;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}



void MainWindow::on_casilla51_clicked()
{
    //51
    casSelec =51;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla52_clicked()
{

    //52
    casSelec =52;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla53_clicked()
{
    //53
    casSelec =53;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla54_clicked()
{
    //54
    casSelec =54;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla55_clicked()
{
    //55
    casSelec =55;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla56_clicked()
{
    //56
    casSelec =56;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla57_clicked()
{
    //57
    casSelec =57;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla58_clicked()
{
    //58
    casSelec =58;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla59_clicked()
{
    //59
    casSelec =59;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla60_clicked()
{
    //60
    casSelec =60;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}



void MainWindow::on_casilla61_clicked()
{
    //61
    casSelec =61;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla62_clicked()
{

    //62
    casSelec =62;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla63_clicked()
{
    //63
    casSelec =63;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla64_clicked()
{
    //64
    casSelec =64;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla65_clicked()
{
    //65
    casSelec =65;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla66_clicked()
{
    //66
    casSelec =66;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla67_clicked()
{

    casSelec =67;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla68_clicked()
{
    //68
    casSelec =68;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla69_clicked()
{
    //69
    casSelec =69;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla70_clicked()
{
    //70
    casSelec =70;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}



void MainWindow::on_casilla71_clicked()
{
    //71
    casSelec =71;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla72_clicked()
{

    //72
    casSelec =72;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla73_clicked()
{
    //73
    casSelec =73;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla74_clicked()
{
    //74
    casSelec =74;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla75_clicked()
{
    //75
    casSelec =75;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla76_clicked()
{
    //76
    casSelec =76;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla77_clicked()
{
    //77
    casSelec =77;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla78_clicked()
{
    //78
    casSelec =78;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla79_clicked()
{
    //79
    casSelec =79;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla80_clicked()
{
    //80
    casSelec =80;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}


void MainWindow::on_casilla81_clicked()
{
    //81
    casSelec =81;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla82_clicked()
{

    //82
    casSelec =82;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla83_clicked()
{
    //83
    casSelec =83;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla84_clicked()
{
    //84
    casSelec =84;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla85_clicked()
{
    //85
    casSelec =85;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla86_clicked()
{
    //86
    casSelec =86;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla87_clicked()
{
    //87
    casSelec =87;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla88_clicked()
{
    //88
    casSelec =88;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla89_clicked()
{
    //89
    casSelec =89;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla90_clicked()
{
    //90
    casSelec =90;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla91_clicked()
{
    //91
    casSelec =91;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}


}

void MainWindow::on_casilla92_clicked()
{

    //92
    casSelec =92;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla93_clicked()
{
    //93
    casSelec =93;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla94_clicked()
{
    //94
    casSelec =94;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla95_clicked()
{
    //95
    casSelec =95;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla96_clicked()
{
    //96
    casSelec =96;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla97_clicked()
{
    //97
    casSelec =97;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla98_clicked()
{

    //98

    casSelec =98;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}
}

void MainWindow::on_casilla99_clicked()
{
    //99
    casSelec =99;
    if(checkCredits()){
        habilitatTorres();

        p1.updatemapa(casSelec);
}

}


void MainWindow::on_torreArqueraButton_clicked()
{
    QPixmap torreArquera(":/new/prefix1/torreArqueros.png");

    switch (casSelec) {
    case 0:
        ui->casilla00->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 1:
        ui->casilla01->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 2:
        ui->casilla02->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 3:
        ui->casilla03->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 4:
        ui->casilla04->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 5:
        ui->casilla05->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 6:
        ui->casilla06->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 7:
        ui->casilla07->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 8:
        ui->casilla08->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 9:
        ui->casilla09->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 10:
        ui->casilla10->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 11:
        ui->casilla11->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 12:
        ui->casilla12->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 13:
        ui->casilla13->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 14:
        ui->casilla14->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 15:
        ui->casilla15->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 16:
        ui->casilla16->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 17:
        ui->casilla17->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 18:
        ui->casilla18->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 19:
        ui->casilla19->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 20:
        ui->casilla20->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 21:
        ui->casilla21->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 22:
        ui->casilla22->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 23:
        ui->casilla23->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 24:
        ui->casilla24->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 25:
        ui->casilla25->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 26:
        ui->casilla26->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 27:
        ui->casilla27->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 28:
        ui->casilla28->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 29:
        ui->casilla29->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 30:
        ui->casilla30->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 31:
        ui->casilla31->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 32:
        ui->casilla32->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 33:
        ui->casilla33->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 34:
        ui->casilla34->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 35:
        ui->casilla35->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 36:
        ui->casilla36->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 37:
        ui->casilla37->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 38:
        ui->casilla38->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 39:
        ui->casilla39->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 40:
        ui->casilla40->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 41:
        ui->casilla41->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 42:
        ui->casilla42->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 43:
        ui->casilla43->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 44:
        ui->casilla44->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 45:
        ui->casilla45->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 46:
        ui->casilla46->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 47:
        ui->casilla47->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 48:
        ui->casilla48->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 49:
        ui->casilla49->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 50:
        ui->casilla50->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 51:
        ui->casilla51->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 52:
        ui->casilla52->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 53:
        ui->casilla53->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 54:
        ui->casilla54->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 55:
        ui->casilla55->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 56:
        ui->casilla56->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 57:
        ui->casilla57->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 58:
        ui->casilla58->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 59:
        ui->casilla59->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 60:
        ui->casilla60->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 61:
        ui->casilla61->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 62:
        ui->casilla62->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 63:
        ui->casilla63->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 64:
        ui->casilla64->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 65:
        ui->casilla65->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 66:
        ui->casilla66->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 67:
        ui->casilla67->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 68:
        ui->casilla68->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 69:
        ui->casilla69->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 70:
        ui->casilla70->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 71:
        ui->casilla71->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 72:
        ui->casilla72->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 73:
        ui->casilla73->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 74:
        ui->casilla74->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 75:
        ui->casilla75->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 76:
        ui->casilla76->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 77:
        ui->casilla77->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 78:
        ui->casilla78->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 79:
        ui->casilla79->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 80:
        ui->casilla80->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 81:
        ui->casilla81->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 82:
        ui->casilla82->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 83:
        ui->casilla83->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 84:
        ui->casilla84->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 85:
        ui->casilla85->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 86:
        ui->casilla86->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 87:
        ui->casilla87->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 88:
        ui->casilla88->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 89:
        ui->casilla89->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 90:
        ui->casilla90->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 91:
        ui->casilla91->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 92:
        ui->casilla92->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 93:
        ui->casilla93->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 94:
        ui->casilla94->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 95:
        ui->casilla95->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 96:
        ui->casilla96->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 97:
        ui->casilla97->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 98:
        ui->casilla98->setIcon(torreArquera);
        desabilitarTorres();
        break;
    case 99:
        ui->casilla99->setIcon(torreArquera);
        desabilitarTorres();
        break;


    }
    int creditRest =p1.getCredits();
    p1.setCredits(creditRest-=10);
   ui->cantCreditos->setText(QString::number(p1.getCredits()));
    Torre t1= Torre();
    t1.setPos(casSelec);
    t1.setTorre(1);
    p1.setTorr(t1);



}

void MainWindow::on_torreMagoButton_clicked()
{
     QPixmap torreMago(":/new/prefix1/torreMago.png");
     switch (casSelec) {
         case 0:
             ui->casilla00->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 1:
             ui->casilla01->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 2:
             ui->casilla02->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 3:
             ui->casilla03->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 4:
             ui->casilla04->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 5:
             ui->casilla05->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 6:
             ui->casilla06->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 7:
             ui->casilla07->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 8:
             ui->casilla08->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 9:
             ui->casilla09->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 10:
             ui->casilla10->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 11:
             ui->casilla11->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 12:
             ui->casilla12->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 13:
             ui->casilla13->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 14:
             ui->casilla14->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 15:
             ui->casilla15->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 16:
             ui->casilla16->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 17:
             ui->casilla17->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 18:
             ui->casilla18->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 19:
             ui->casilla19->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 20:
             ui->casilla20->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 21:
             ui->casilla21->setIcon(torreMago);
                 desabilitarTorres();
                 break;
         case 22:
            ui->casilla22->setIcon(torreMago);
                desabilitarTorres();
                break;
         case 23:
                 ui->casilla23->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 24:
             ui->casilla24->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 25:
                 ui->casilla25->setIcon(torreMago);
                 desabilitarTorres();
                     break;
         case 26:
                 ui->casilla26->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 27:
                 ui->casilla27->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 28:
                 ui->casilla28->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 29:
                 ui->casilla29->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 30:
                 ui->casilla30->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 31:
                 ui->casilla31->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 32:
                 ui->casilla32->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 33:
                 ui->casilla33->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 34:
                 ui->casilla34->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 35:
                 ui->casilla35->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 36:
                 ui->casilla36->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 37:
                 ui->casilla37->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 38:
                 ui->casilla38->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 39:
                 ui->casilla39->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 40:
                 ui->casilla40->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 41:
                 ui->casilla41->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 42:
                 ui->casilla42->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 43:
                 ui->casilla43->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 44:
                 ui->casilla44->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 45:
                 ui->casilla45->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 46:
                 ui->casilla46->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 47:
                 ui->casilla47->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 48:
                 ui->casilla48->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 49:
                 ui->casilla49->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 50:
                 ui->casilla50->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 51:
                 ui->casilla51->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 52:
                 ui->casilla52->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 53:
                 ui->casilla53->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 54:
                 ui->casilla54->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 55:
                 ui->casilla55->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 56:
                 ui->casilla56->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 57:
                 ui->casilla57->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 58:
                 ui->casilla58->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 59:
                 ui->casilla59->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 60:
                 ui->casilla60->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 61:
                 ui->casilla61->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 62:
                 ui->casilla62->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 63:
                 ui->casilla63->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 64:
                 ui->casilla64->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 65:
                 ui->casilla65->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 66:
                 ui->casilla66->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 67:
                 ui->casilla67->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 68:
                 ui->casilla68->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 69:
                 ui->casilla69->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 70:
                 ui->casilla70->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 71:
                 ui->casilla71->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 72:
                 ui->casilla72->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 73:
                 ui->casilla73->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 74:
                 ui->casilla74->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 75:
                 ui->casilla75->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 76:
                 ui->casilla76->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 77:
                 ui->casilla77->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 78:
                 ui->casilla78->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 79:
                 ui->casilla79->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 80:
                 ui->casilla80->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 81:
                 ui->casilla81->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 82:
                 ui->casilla82->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 83:
                 ui->casilla83->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 84:
                 ui->casilla84->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 85:
                 ui->casilla85->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 86:
                 ui->casilla86->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 87:
                 ui->casilla87->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 88:
                 ui->casilla88->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 89:
                 ui->casilla89->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 90:
                 ui->casilla90->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 91:
                 ui->casilla91->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 92:
                 ui->casilla92->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 93:
                 ui->casilla93->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 94:
                 ui->casilla94->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 95:
                 ui->casilla95->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 96:
                 ui->casilla96->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 97:
                 ui->casilla97->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 98:
                 ui->casilla98->setIcon(torreMago);
                     desabilitarTorres();
                     break;
         case 99:
                 ui->casilla99->setIcon(torreMago);
                     desabilitarTorres();
                     break;


         }


     int creditRest =p1.getCredits();
     p1.setCredits(creditRest-=20);
    ui->cantCreditos->setText(QString::number(p1.getCredits()));
    Torre t1= Torre();
    t1.setPos(casSelec);
    t1.setTorre(2);
    p1.setTorr(t1);

\
}

void MainWindow::on_torreArtilleraButton_clicked()
{

    QPixmap torreArtillera(":/new/prefix1/torreArtillero.jpg");

    switch (casSelec) {
    case 0:
        ui->casilla00->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 1:
        ui->casilla01->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 2:
        ui->casilla02->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 3:
        ui->casilla03->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 4:
        ui->casilla04->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 5:
        ui->casilla05->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 6:
        ui->casilla06->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 7:
        ui->casilla07->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 8:
        ui->casilla08->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 9:
        ui->casilla09->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 10:
        ui->casilla10->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 11:
        ui->casilla11->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 12:
        ui->casilla12->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 13:
        ui->casilla13->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 14:
        ui->casilla14->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 15:
        ui->casilla15->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 16:
        ui->casilla16->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 17:
        ui->casilla17->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 18:
        ui->casilla18->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 19:
        ui->casilla19->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 20:
        ui->casilla20->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 21:
        ui->casilla21->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 22:
        ui->casilla22->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 23:
        ui->casilla23->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 24:
        ui->casilla24->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 25:
        ui->casilla25->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 26:
        ui->casilla26->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 27:
        ui->casilla27->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 28:
        ui->casilla28->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 29:
        ui->casilla29->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 30:
        ui->casilla30->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 31:
        ui->casilla31->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 32:
        ui->casilla32->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 33:
        ui->casilla33->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 34:
        ui->casilla34->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 35:
        ui->casilla35->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 36:
        ui->casilla36->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 37:
        ui->casilla37->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 38:
        ui->casilla38->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 39:
        ui->casilla39->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 40:
        ui->casilla40->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 41:
        ui->casilla41->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 42:
        ui->casilla42->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 43:
        ui->casilla43->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 44:
        ui->casilla44->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 45:
        ui->casilla45->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 46:
        ui->casilla46->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 47:
        ui->casilla47->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 48:
        ui->casilla48->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 49:
        ui->casilla49->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 50:
        ui->casilla50->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 51:
        ui->casilla51->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 52:
        ui->casilla52->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 53:
        ui->casilla53->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 54:
        ui->casilla54->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 55:
        ui->casilla55->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 56:
        ui->casilla56->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 57:
        ui->casilla57->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 58:
        ui->casilla58->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 59:
        ui->casilla59->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 60:
        ui->casilla60->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 61:
        ui->casilla61->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 62:
        ui->casilla62->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 63:
        ui->casilla63->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 64:
        ui->casilla64->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 65:
        ui->casilla65->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 66:
        ui->casilla66->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 67:
        ui->casilla67->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 68:
        ui->casilla68->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 69:
        ui->casilla69->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 70:
        ui->casilla70->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 71:
        ui->casilla71->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 72:
        ui->casilla72->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 73:
        ui->casilla73->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 74:
        ui->casilla74->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 75:
        ui->casilla75->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 76:
        ui->casilla76->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 77:
        ui->casilla77->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 78:
        ui->casilla78->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 79:
        ui->casilla79->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 80:
        ui->casilla80->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 81:
        ui->casilla81->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 82:
        ui->casilla82->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 83:
        ui->casilla83->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 84:
        ui->casilla84->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 85:
        ui->casilla85->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 86:
        ui->casilla86->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 87:
        ui->casilla87->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 88:
        ui->casilla88->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 89:
        ui->casilla89->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 90:
        ui->casilla90->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 91:
        ui->casilla91->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 92:
        ui->casilla92->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 93:
        ui->casilla93->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 94:
        ui->casilla94->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 95:
        ui->casilla95->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 96:
        ui->casilla96->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 97:
        ui->casilla97->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 98:
        ui->casilla98->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    case 99:
        ui->casilla99->setIcon(torreArtillera);
        desabilitarTorres();
        break;
    }

    int creditRest =p1.getCredits();
    p1.setCredits(creditRest-=25);
   ui->cantCreditos->setText(QString::number(p1.getCredits()));
   Torre t1= Torre();
   t1.setPos(casSelec);
   t1.setTorre(3);
   p1.setTorr(t1);
}

void MainWindow::on_torreFuegoButton_clicked()
{

    QPixmap torreFuego(":/new/prefix1/torreLanzaFuego.png");

    switch (casSelec) {
                 case 0:
                     ui->casilla00->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 1:
                     ui->casilla01->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 2:
                     ui->casilla02->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 3:
                     ui->casilla03->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 4:
                     ui->casilla04->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 5:
                     ui->casilla05->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 6:
                     ui->casilla06->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 7:
                     ui->casilla07->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 8:
                     ui->casilla08->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 9:
                     ui->casilla09->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 10:
                     ui->casilla10->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 11:
                     ui->casilla11->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 12:
                     ui->casilla12->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 13:
                     ui->casilla13->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 14:
                     ui->casilla14->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 15:
                     ui->casilla15->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 16:
                     ui->casilla16->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 17:
                     ui->casilla17->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 18:
                     ui->casilla18->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 19:
                     ui->casilla19->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 20:
                     ui->casilla20->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 21:
                     ui->casilla21->setIcon(torreFuego);
                         desabilitarTorres();
                         break;
                 case 22:
                    ui->casilla22->setIcon(torreFuego);
                        desabilitarTorres();
                        break;
                 case 23:
                         ui->casilla23->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 24:
                     ui->casilla24->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 25:
                         ui->casilla25->setIcon(torreFuego);
                         desabilitarTorres();
                             break;
                 case 26:
                         ui->casilla26->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 27:
                         ui->casilla27->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 28:
                         ui->casilla28->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 29:
                         ui->casilla29->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 30:
                         ui->casilla30->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 31:
                         ui->casilla31->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 32:
                         ui->casilla32->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 33:
                         ui->casilla33->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 34:
                         ui->casilla34->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 35:
                         ui->casilla35->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 36:
                         ui->casilla36->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 37:
                         ui->casilla37->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 38:
                         ui->casilla38->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 39:
                         ui->casilla39->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 40:
                         ui->casilla40->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 41:
                         ui->casilla41->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 42:
                         ui->casilla42->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 43:
                         ui->casilla43->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 44:
                         ui->casilla44->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 45:
                         ui->casilla45->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 46:
                         ui->casilla46->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 47:
                         ui->casilla47->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 48:
                         ui->casilla48->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 49:
                         ui->casilla49->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 50:
                         ui->casilla50->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 51:
                         ui->casilla51->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 52:
                         ui->casilla52->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 53:
                         ui->casilla53->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 54:
                         ui->casilla54->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 55:
                         ui->casilla55->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 56:
                         ui->casilla56->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 57:
                         ui->casilla57->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 58:
                         ui->casilla58->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 59:
                         ui->casilla59->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 60:
                         ui->casilla60->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 61:
                         ui->casilla61->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 62:
                         ui->casilla62->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 63:
                         ui->casilla63->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 64:
                         ui->casilla64->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 65:
                         ui->casilla65->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 66:
                         ui->casilla66->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 67:
                         ui->casilla67->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 68:
                         ui->casilla68->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 69:
                         ui->casilla69->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 70:
                         ui->casilla70->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 71:
                         ui->casilla71->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 72:
                         ui->casilla72->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 73:
                         ui->casilla73->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 74:
                         ui->casilla74->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 75:
                         ui->casilla75->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 76:
                         ui->casilla76->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 77:
                         ui->casilla77->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 78:
                         ui->casilla78->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 79:
                         ui->casilla79->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 80:
                         ui->casilla80->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 81:
                         ui->casilla81->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 82 :
                         ui->casilla82->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 83:
                         ui->casilla83->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 84:
                         ui->casilla84->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 85:
                         ui->casilla85->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 86:
                         ui->casilla86->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 87:
                         ui->casilla87->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 88:
                         ui->casilla88->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 89:
                         ui->casilla89->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 90:
                         ui->casilla90->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 91:
                         ui->casilla91->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 92:
                         ui->casilla92->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 93:
                         ui->casilla93->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 94:
                         ui->casilla94->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 95:
                         ui->casilla95->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 96:
                         ui->casilla96->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 97:
                         ui->casilla97->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 98:
                         ui->casilla98->setIcon(torreFuego);
                             desabilitarTorres();
                             break;
                 case 99:
                         ui->casilla99->setIcon(torreFuego);
                             desabilitarTorres();
                             break;


                 }

    int creditRest =p1.getCredits();
    p1.setCredits(creditRest-=30);
   ui->cantCreditos->setText(QString::number(p1.getCredits()));
   Torre t1= Torre();
   t1.setPos(casSelec);
   t1.setTorre(4);
   p1.setTorr(t1);

}

void MainWindow::on_eliminarCursoButton_clicked()
{
    QPixmap casillaBlanca(":/new/prefix1/casillaBlanco.png");
    QPixmap casillaNegra(":/new/prefix1/casillaNegra.png");
    switch (casSelec) {
    case 0:
        ui->casilla00->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 1:
        ui->casilla01->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 2:
        ui->casilla02->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 3:
        ui->casilla03->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 4:
        ui->casilla04->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 5:
        ui->casilla05->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 6:
        ui->casilla06->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 7:
        ui->casilla07->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 8:
        ui->casilla08->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 9:
        ui->casilla09->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 10:
        ui->casilla10->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 11:
        ui->casilla11->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 12:
        ui->casilla12->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 13:
        ui->casilla13->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 14:
        ui->casilla14->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 15:
        ui->casilla15->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 16:
        ui->casilla16->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 17:
        ui->casilla17->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 18:
        ui->casilla18->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 19:
        ui->casilla19->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 20:
        ui->casilla20->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 21:
        ui->casilla21->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 22:
        ui->casilla22->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 23:
        ui->casilla23->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 24:
        ui->casilla24->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 25:
        ui->casilla25->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 26:
        ui->casilla26->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 27:
        ui->casilla27->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 28:
        ui->casilla28->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 29:
        ui->casilla29->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 30:
        ui->casilla30->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 31:
        ui->casilla31->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 32:
        ui->casilla32->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 33:
        ui->casilla33->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 34:
        ui->casilla34->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 35:
        ui->casilla35->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 36:
        ui->casilla36->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 37:
        ui->casilla37->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 38:
        ui->casilla38->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 39:
        ui->casilla39->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 40:
        ui->casilla40->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 41:
        ui->casilla41->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 42:
        ui->casilla42->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 43:
        ui->casilla43->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 44:
        ui->casilla44->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 45:
        ui->casilla45->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 46:
        ui->casilla46->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 47:
        ui->casilla47->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 48:
        ui->casilla48->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 49:
        ui->casilla49->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 50:
        ui->casilla50->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 51:
        ui->casilla51->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 52:
        ui->casilla52->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 53:
        ui->casilla53->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 54:
        ui->casilla54->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 55:
        ui->casilla55->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 56:
        ui->casilla56->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 57:
        ui->casilla57->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 58:
        ui->casilla58->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 59:
        ui->casilla59->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 60:
        ui->casilla60->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 61:
        ui->casilla61->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 62:
        ui->casilla62->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 63:
        ui->casilla63->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 64:
        ui->casilla64->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 65:
        ui->casilla65->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 66:
        ui->casilla66->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 67:
        ui->casilla67->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 68:
        ui->casilla68->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 69:
        ui->casilla69->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 70:
        ui->casilla70->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 71:
        ui->casilla71->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 72:
        ui->casilla72->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 73:
        ui->casilla73->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 74:
        ui->casilla74->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 75:
        ui->casilla75->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 76:
        ui->casilla76->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 77:
        ui->casilla77->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 78:
        ui->casilla78->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 79:
        ui->casilla79->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 80:
        ui->casilla80->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 81:
        ui->casilla81->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 82:
        ui->casilla82->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 83:
        ui->casilla83->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 84:
        ui->casilla84->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 85:
        ui->casilla85->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 86:
        ui->casilla86->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 87:
        ui->casilla87->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 88:
        ui->casilla88->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 89:
        ui->casilla89->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 90:
        ui->casilla90->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 91:
        ui->casilla91->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 92:
        ui->casilla92->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 93:
        ui->casilla93->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 94:
        ui->casilla94->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 95:
        ui->casilla95->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 96:
        ui->casilla96->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 97:
        ui->casilla97->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    case 98:
        ui->casilla98->setIcon(casillaBlanca);
        desabilitarTorres();
        break;
    case 99:
        ui->casilla99->setIcon(casillaNegra);
        desabilitarTorres();
        break;
    }



    int creditRest =p1.getCredits();
    p1.setCredits(creditRest += 15);
   ui->cantCreditos->setText(QString::number(p1.getCredits()));

}

bool MainWindow::checkCredits()
{
    if(p1.getCredits()<=0){
        return false;
    }
    return true;
}

void MainWindow::on_IniciarButton_clicked()
{
    armarTableroCasillasNegras();
    armarTableroCasillasBlancas();
    asignarTorres();
    ui->cantCreditos->setText(QString::number(p1.getCredits()));

}
