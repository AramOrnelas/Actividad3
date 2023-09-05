#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <QMainWindow>
using namespace std;




class Neurona {
private:
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;

public:
    Neurona(int _id, float _voltaje, int _posicion_x,int _posicion_y, int _red, int _green, int _blue ):id(_id),voltaje(_voltaje),posicion_x(_posicion_x),posicion_y(_posicion_y),red(_red),green(_green),blue(_blue){};
    void print()const{
        cout<<"neurona: "<<id << "voltaje: "<<voltaje<< "posicion_x:"<<posicion_x<<"posicion_y:"<<posicion_y<<"red"<<red<<"green"<<green<<"blue"<<blue<< endl;
    }
};


class Nodo {
public:
    Neurona neurona;
    Nodo* siguiente;

    Nodo(const Neurona _neurona): neurona(_neurona), siguiente(nullptr) {}
};

class lista{
public:
    void Mostrar (){

    }

};






QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Neurona n;
};
#endif // MAINWINDOW_H
