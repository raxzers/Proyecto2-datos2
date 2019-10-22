#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    armarTableroCasillasNegras();
    armarTableroCasillasBlancas();
    asignarTorres();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::armarTableroCasillasNegras()
{
     QPixmap casillaNegra("../ImagenesProyecto2/casillaNegra.png");
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
    QPixmap casillaBlanco("../ImagenesProyecto2/casillaBlanco.png");
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
    QPixmap torreArquera("../ImagenesProyecto2/torreArqueros.png");
     QPixmap torreMago("../ImagenesProyecto2/torreMago.png");
     QPixmap torreArtillero("../ImagenesProyecto2/torreArtillero.jpg");
     QPixmap torreFuego("../ImagenesProyecto2/torreLanzaFuego.png");
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


void MainWindow::on_casilla00_clicked()
{

    casillaSeleccionada = "casilla00";
    habilitatTorres();
    casSelec =0;
    QString to =casillaSeleccionada.right(2);
    p1.updatemapa(casSelec);


}
/*
    QString mp= QString::fromStdString(p1.verMapa());
   qDebug() << mp;
*/
void MainWindow::on_casilla01_clicked()
{
    casillaSeleccionada = "casilla01";
    casSelec =1;
    habilitatTorres();
    QString to =casillaSeleccionada.right(2);
    p1.updatemapa(casSelec);

}

void MainWindow::on_casilla02_clicked()
{

    habilitatTorres();
}

void MainWindow::on_casilla03_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla04_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla05_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla06_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla07_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla08_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla09_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla10_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla11_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla12_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla13_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla14_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla15_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla16_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla17_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla18_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla19_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla20_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla21_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla22_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla23_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla24_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla25_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla26_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla27_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla28_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla29_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla30_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla31_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla32_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla33_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla34_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla35_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla36_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla37_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla38_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla39_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla40_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla41_clicked()
{
   habilitatTorres();
}

void MainWindow::on_casilla42_clicked()
{
   habilitatTorres();
}

void MainWindow::on_casilla43_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla44_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla45_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla46_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla47_clicked()
{
   habilitatTorres();
}

void MainWindow::on_casilla48_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla49_clicked()
{
   habilitatTorres();
}

void MainWindow::on_casilla50_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla51_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla52_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla53_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla54_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla55_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla56_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla57_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla58_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla59_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla60_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla61_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla62_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla63_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla64_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla65_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla66_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla67_clicked()
{
   habilitatTorres();
}

void MainWindow::on_casilla68_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla69_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla70_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla71_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla72_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla73_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla74_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla75_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla76_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla77_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla78_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla79_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla80_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla81_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla82_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla83_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla84_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla85_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla86_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla87_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla88_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla89_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla90_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla91_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla92_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla93_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla94_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla95_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla96_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla97_clicked()
{
    habilitatTorres();

}

void MainWindow::on_casilla98_clicked()
{
    habilitatTorres();
}

void MainWindow::on_casilla99_clicked()
{
    habilitatTorres();
}

void MainWindow::on_torreArqueraButton_clicked()
{
    QPixmap torreArquera("../ImagenesProyecto2/torreArqueros.png");

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





}

void MainWindow::on_torreMagoButton_clicked()
{
     QPixmap torreMago("../ImagenesProyecto2/torreMago.png");
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


}

void MainWindow::on_torreArtilleraButton_clicked()
{

         QPixmap torreArtillero("../ImagenesProyecto2/torreArtillero.jpg");
         if (casillaSeleccionada == "casilla00") {

             ui->casilla00->setIcon(torreArtillero);
             desabilitarTorres();
         }
}

void MainWindow::on_torreFuegoButton_clicked()
{

    QPixmap torreFuego("../ImagenesProyecto2/torreLanzaFuego.png");
    if (casillaSeleccionada == "casilla00") {

        ui->casilla00->setIcon(torreFuego);
        desabilitarTorres();
    }
}
