#pragma once

#include <QtWidgets/QMainWindow>
#include <ui_cv08.h>
#include <algorithm>

class Player {
private:
    float score = 0.0;
public:
    Player() {}
    Player(float newscore) { score = newscore; } 
    void plusScore() { score = score + 1.0; }
    void preskocit() { score = score - 0.5; }
    void minusScore() { score = score - 1.0; }
    float getScore() { return score; }
    void resetScore() { score = 0.0; }
};

class Question {
private:
    QString q[10];
    QString a[10][4];
    int counter = 0;
    int lilcounter = 0;
    int shuffled[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
public:
    Question() {}
    QString genQuestion();
    QString GgenQuestion();
    QString giveAnswers();
    void resetCounter() { counter = 0; }
    void resetlilCounter() { lilcounter = 0; }
    void counterplus() { counter++; }
    void lilcounterplus() { lilcounter++; }
    int getCounter() { return counter; }
    void shuffle() { std::random_shuffle(std::begin(shuffled), std::end(shuffled)); }
    void shuffleFalse() { for (int i = 0; i < 10; i++) { shuffled[i] = i; } }

};

class cv08 : public QMainWindow
{
    Q_OBJECT
    
public:
    cv08(QWidget *parent = Q_NULLPTR);
    
private:
    Ui::cv08Class ui;
    Player player;
    Question question;

private slots:
    void on_comboBox_currentIndexChanged(int index);
    void on_Zolik1_clicked();
    void on_Zolik2_clicked();
    void on_Zolik3_clicked();
    void on_NovaButton_clicked();
    void on_UkoncitButton_clicked();
    void on_PotvrditButton_clicked();
    void on_PreskocitButton_clicked();
    void on_LineMeno_textChanged(QString s);
};

