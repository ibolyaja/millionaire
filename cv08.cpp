#include "cv08.h"

using namespace std;

cv08::cv08(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void cv08::on_LineMeno_textChanged(QString s)
{
    if (s == nullptr)
    {
        ui.NovaButton->setEnabled(false);
        ui.groupBox_2->setEnabled(false);
        ui.groupBox_3->setEnabled(false);
        ui.groupBox_4->setEnabled(false);
        ui.groupBox_5->setEnabled(false);
        ui.LineMeno->setEnabled(true);
    }
    else
    {
        ui.NovaButton->setEnabled(true);
    }
}

void cv08::on_comboBox_currentIndexChanged(int index) {
    if (index == 1)
    {
        ui.Zolik1->setVisible(false);
        ui.Zolik2->setVisible(true);
    }
    else if (index == 2)
    {
        ui.Zolik1->setVisible(false);
        ui.Zolik2->setVisible(false);
    }
    else
    {
        ui.Zolik1->setVisible(true);
        ui.Zolik2->setVisible(true);
    }
}

void cv08::on_Zolik1_clicked()
{
    ui.Zolik1->setEnabled(false);

    if (question.GgenQuestion() == QStringLiteral("Ktorý geometrický útvar nemá obvod?") ||
        question.GgenQuestion() == QStringLiteral("Kto objavil Tróju a neskor aj Mikény?") ||
        question.GgenQuestion() == QStringLiteral("Ktoré je najkratšie ročné obdobie?"))
    {
        ui.radioButtonB->setEnabled(false);
        ui.radioButtonD->setEnabled(false);
        ui.radioButtonA->setChecked(true);
    }
    else if (question.GgenQuestion() == QStringLiteral("Ktorá kniha Harryho Pottera je najhrubšia?"))
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonD->setEnabled(false);
        ui.radioButtonB->setChecked(true);
    }
    else if (question.GgenQuestion() == QStringLiteral("Ako sa volal krstným menom fyzik Tesla?") ||
        question.GgenQuestion() == QStringLiteral("Koľko planét sú v slnečnej sústave?") ||
        question.GgenQuestion() == QStringLiteral("Ktorá korporácia vyvýjal programovaný jazyk C#?") ||
        question.GgenQuestion() == QStringLiteral("Akú približnú hodnotu má konštanta pí?"))
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonB->setEnabled(false);
        ui.radioButtonC->setChecked(true);
    }
    else
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonC->setEnabled(false);
        ui.radioButtonB->setChecked(true);
    }
}
void cv08::on_Zolik2_clicked()
{
    ui.Zolik2->setEnabled(false);

    if (question.GgenQuestion() == QStringLiteral("Ktorý geometrický útvar nemá obvod?") ||
        question.GgenQuestion() == QStringLiteral("Kto objavil Tróju a neskor aj Mikény?") ||
        question.GgenQuestion() == QStringLiteral("Ktoré je najkratšie ročné obdobie?"))
    {
        ui.radioButtonB->setEnabled(false);
        ui.radioButtonD->setEnabled(false);
        ui.radioButtonA->setChecked(true);
    }
    else if (question.GgenQuestion() == QStringLiteral("Ktorá kniha Harryho Pottera je najhrubšia?"))
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonD->setEnabled(false);
        ui.radioButtonB->setChecked(true);
    }
    else if (question.GgenQuestion() == QStringLiteral("Ako sa volal krstným menom fyzik Tesla?") ||
        question.GgenQuestion() == QStringLiteral("Koľko planét sú v slnečnej sústave?") ||
        question.GgenQuestion() == QStringLiteral("Ktorá korporácia vyvýjal programovaný jazyk C#?") ||
        question.GgenQuestion() == QStringLiteral("Akú približnú hodnotu má konštanta pí?"))
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonB->setEnabled(false);
        ui.radioButtonC->setChecked(true);
    }
    else
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonC->setEnabled(false);
        ui.radioButtonB->setChecked(true);
    }
}
void cv08::on_Zolik3_clicked()
{
    ui.Zolik3->setEnabled(false);

    if (question.GgenQuestion() == QStringLiteral("Ktorý geometrický útvar nemá obvod?") ||
        question.GgenQuestion() == QStringLiteral("Kto objavil Tróju a neskor aj Mikény?") ||
        question.GgenQuestion() == QStringLiteral("Ktoré je najkratšie ročné obdobie?"))
    {
        ui.radioButtonB->setEnabled(false);
        ui.radioButtonD->setEnabled(false);
        ui.radioButtonA->setChecked(true);
    }
    else if (question.GgenQuestion() == QStringLiteral("Ktorá kniha Harryho Pottera je najhrubšia?"))
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonD->setEnabled(false);
        ui.radioButtonB->setChecked(true);
    }
    else if (question.GgenQuestion() == QStringLiteral("Ako sa volal krstným menom fyzik Tesla?") ||
        question.GgenQuestion() == QStringLiteral("Koľko planét sú v slnečnej sústave?") ||
        question.GgenQuestion() == QStringLiteral("Ktorá korporácia vyvýjal programovaný jazyk C#?") ||
        question.GgenQuestion() == QStringLiteral("Akú približnú hodnotu má konštanta pí?"))
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonB->setEnabled(false);
        ui.radioButtonC->setChecked(true);
    }
    else
    {
        ui.radioButtonA->setEnabled(false);
        ui.radioButtonC->setEnabled(false);
        ui.radioButtonB->setChecked(true);
    }
}


void cv08::on_NovaButton_clicked()
{
    question.shuffleFalse();
    if (ui.checkBox->isChecked())
    {
        question.shuffle();
    }
    
    question.resetCounter();
    ui.doubleSpinBox->setValue(0.0);
    ui.UkoncitButton->setEnabled(true);
    ui.Zolik1->setEnabled(true);
    ui.Zolik2->setEnabled(true);
    ui.Zolik3->setEnabled(true);
    ui.groupBox_2->setEnabled(true);
    ui.groupBox_3->setEnabled(true);
    ui.groupBox_4->setEnabled(true);
    ui.groupBox_5->setEnabled(true);
    ui.plainTextEdit->setPlainText(question.genQuestion());
    ui.NovaButton->setEnabled(false);
    ui.radioButtonA->setText(question.giveAnswers());
    question.lilcounterplus();
    ui.radioButtonB->setText(question.giveAnswers());
    question.lilcounterplus();
    ui.radioButtonC->setText(question.giveAnswers());
    question.lilcounterplus();
    ui.radioButtonD->setText(question.giveAnswers());
    question.counterplus();
    question.resetlilCounter();
    ui.comboBox->setEnabled(false);
    ui.checkBox->setEnabled(false);
    ui.plainTextEdit->setEnabled(true);
    ui.radioButtonA->setEnabled(true);
    ui.radioButtonB->setEnabled(true);
    ui.radioButtonC->setEnabled(true);
    ui.radioButtonD->setEnabled(true);
}

void cv08::on_UkoncitButton_clicked()
{
    ui.LineMeno->setText(nullptr);
    ui.plainTextEdit->setPlainText(nullptr);
    ui.doubleSpinBox->setValue(player.getScore()-(1/2.0)*(11.0-question.getCounter()));
    player.resetScore();
    ui.UkoncitButton->setEnabled(false);
    ui.comboBox->setEnabled(true);
    ui.checkBox->setEnabled(true);
}

//void cv08::on_PotvrditButton_clicked()
//{
//    if (question.getCounter() == 10)
//    {
//        ui.LineMeno->setText(nullptr);
//        ui.plainTextEdit->setPlainText(nullptr);
//    }
//    else
//    {
//        if (ui.radioButtonA->isChecked())
//        {
//            player.plusScore();
//            ui.doubleSpinBox->setValue(player.getScore());
//            ui.plainTextEdit->setPlainText(question.setQuestion());
//
//            ui.radioButtonA->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonB->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonC->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonD->setText(question.giveAnswers());
//            question.counterplus();
//            question.resetlilCounter();
//        }
//        else if (ui.radioButtonB->isChecked())
//        {
//            player.plusScore();
//            ui.doubleSpinBox->setValue(player.getScore());
//            ui.plainTextEdit->setPlainText(question.setQuestion());
//
//            ui.radioButtonA->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonB->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonC->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonD->setText(question.giveAnswers());
//            question.counterplus();
//            question.resetlilCounter();
//        }
//        else if (ui.radioButtonC->isChecked())
//        {
//            player.plusScore();
//            ui.doubleSpinBox->setValue(player.getScore());
//            ui.plainTextEdit->setPlainText(question.setQuestion());
//
//            ui.radioButtonA->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonB->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonC->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonD->setText(question.giveAnswers());
//            question.counterplus();
//            question.resetlilCounter();
//        }
//        else
//        {
//            player.minusScore();
//            ui.doubleSpinBox->setValue(player.getScore());
//            ui.plainTextEdit->setPlainText(question.setQuestion());
//
//            ui.radioButtonA->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonB->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonC->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonD->setText(question.giveAnswers());
//            question.counterplus();
//            question.resetlilCounter();
//        }
//    }
//    
//
//}

//void cv08::on_PotvrditButton_clicked()
//{
//    if (question.getCounter() < 10)
//    {
//        if (ui.radioButtonA->isChecked())
//        {
//            player.plusScore();
//            ui.doubleSpinBox->setValue(player.getScore());
//            ui.plainTextEdit->setPlainText(question.setQuestion());
//
//            ui.radioButtonA->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonB->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonC->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonD->setText(question.giveAnswers());
//            question.counterplus();
//            question.resetlilCounter();
//        }
//        else if (ui.radioButtonB->isChecked())
//        {
//            player.plusScore();
//            ui.doubleSpinBox->setValue(player.getScore());
//            ui.plainTextEdit->setPlainText(question.setQuestion());
//
//            ui.radioButtonA->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonB->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonC->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonD->setText(question.giveAnswers());
//            question.counterplus();
//            question.resetlilCounter();
//        }
//        else if (ui.radioButtonC->isChecked())
//        {
//            player.plusScore();
//            ui.doubleSpinBox->setValue(player.getScore());
//            ui.plainTextEdit->setPlainText(question.setQuestion());
//
//            ui.radioButtonA->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonB->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonC->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonD->setText(question.giveAnswers());
//            question.counterplus();
//            question.resetlilCounter();
//        }
//        else
//        {
//            player.minusScore();
//            ui.doubleSpinBox->setValue(player.getScore());
//            ui.plainTextEdit->setPlainText(question.setQuestion());
//
//            ui.radioButtonA->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonB->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonC->setText(question.giveAnswers());
//            question.lilcounterplus();
//            ui.radioButtonD->setText(question.giveAnswers());
//            question.counterplus();
//            question.resetlilCounter();
//        }
//        
//    }
//    else
//    {
//        if (ui.radioButtonD->isChecked())
//        {
//            player.plusScore();
//        }
//        else
//        {
//            player.minusScore();
//        }
//        ui.LineMeno->setText(nullptr);
//        ui.plainTextEdit->setPlainText(nullptr);
//        ui.doubleSpinBox->setValue(player.getScore());
//    }
//
//
//}



void cv08::on_PotvrditButton_clicked()
{
    if (question.getCounter() < 10)
    {
        if (player.getScore() <= 0)
        {
            player.resetScore();
        }
        if (ui.radioButtonA->isChecked() && (question.GgenQuestion() == QStringLiteral("Ktorý geometrický útvar nemá obvod?")||
            question.GgenQuestion() == QStringLiteral("Kto objavil Tróju a neskor aj Mikény?")||
            question.GgenQuestion() == QStringLiteral("Ktoré je najkratšie ročné obdobie?")))
        {
            player.plusScore();
            ui.doubleSpinBox->setValue(player.getScore());
            ui.plainTextEdit->setPlainText(question.genQuestion());

            ui.radioButtonA->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonB->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonC->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonD->setText(question.giveAnswers());
            question.counterplus();
            question.resetlilCounter();
        }
        else if (ui.radioButtonB->isChecked() && (question.GgenQuestion() == QStringLiteral("Ktorá kniha Harryho Pottera je najhrubšia?")))
        {
            player.plusScore();
            ui.doubleSpinBox->setValue(player.getScore());
            ui.plainTextEdit->setPlainText(question.genQuestion());

            ui.radioButtonA->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonB->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonC->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonD->setText(question.giveAnswers());
            question.counterplus();
            question.resetlilCounter();
        }
        else if (ui.radioButtonC->isChecked()&& (question.GgenQuestion() == QStringLiteral("Ako sa volal krstným menom fyzik Tesla?") ||
            question.GgenQuestion() == QStringLiteral("Koľko planét sú v slnečnej sústave?") ||
            question.GgenQuestion() == QStringLiteral("Ktorá korporácia vyvýjal programovaný jazyk C#?") ||
            question.GgenQuestion() == QStringLiteral("Akú približnú hodnotu má konštanta pí?")))
        {
            player.plusScore();
            ui.doubleSpinBox->setValue(player.getScore());
            ui.plainTextEdit->setPlainText(question.genQuestion());

            ui.radioButtonA->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonB->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonC->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonD->setText(question.giveAnswers());
            question.counterplus();
            question.resetlilCounter();
        }
        else if(ui.radioButtonD->isChecked() && (question.GgenQuestion() != QStringLiteral("Ktorý geometrický útvar nemá obvod?") &&
            question.GgenQuestion() != QStringLiteral("Kto objavil Tróju a neskor aj Mikény?") &&
            question.GgenQuestion() != QStringLiteral("Ktoré je najkratšie ročné obdobie?") &&
            question.GgenQuestion() != QStringLiteral("Ktorá kniha Harryho Pottera je najhrubšia?") &&
            question.GgenQuestion() != QStringLiteral("Ako sa volal krstným menom fyzik Tesla?") &&
            question.GgenQuestion() != QStringLiteral("Koľko planét sú v slnečnej sústave?") &&
            question.GgenQuestion() != QStringLiteral("Ktorá korporácia vyvýjal programovaný jazyk C#?") &&
            question.GgenQuestion() != QStringLiteral("Akú približnú hodnotu má konštanta pí?")))
        {
            player.plusScore();
            ui.doubleSpinBox->setValue(player.getScore());
            ui.plainTextEdit->setPlainText(question.genQuestion());

            ui.radioButtonA->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonB->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonC->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonD->setText(question.giveAnswers());
            question.counterplus();
            question.resetlilCounter();
        }
        else
        {
            player.minusScore();
            ui.doubleSpinBox->setValue(player.getScore());
            ui.plainTextEdit->setPlainText(question.genQuestion());

            ui.radioButtonA->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonB->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonC->setText(question.giveAnswers());
            question.lilcounterplus();
            ui.radioButtonD->setText(question.giveAnswers());
            question.counterplus();
            question.resetlilCounter();
        }

    }
    else
    {
        if (ui.radioButtonD->isChecked())
        {
            player.plusScore();
        }
        else
        {
            player.minusScore();
        }
        ui.LineMeno->setText(nullptr);
        ui.plainTextEdit->setPlainText(nullptr);
        ui.doubleSpinBox->setValue(player.getScore());
        ui.UkoncitButton->setEnabled(false);
        player.resetScore();
    }
    ui.radioButtonA->setEnabled(true);
    ui.radioButtonB->setEnabled(true);
    ui.radioButtonC->setEnabled(true);
    ui.radioButtonD->setEnabled(true);
}

void cv08::on_PreskocitButton_clicked()
{
    if (question.getCounter() == 10)
    {
        ui.LineMeno->setText(nullptr);
        ui.plainTextEdit->setPlainText(nullptr);
        player.preskocit();
        ui.doubleSpinBox->setValue(player.getScore());
        player.resetScore();
    }
    else
    {
        if (player.getScore() <= 0)
        {
            player.resetScore();
        }
        else
        {
            player.preskocit();
            ui.doubleSpinBox->setValue(player.getScore());
        }
        ui.plainTextEdit->setPlainText(question.genQuestion());
        ui.radioButtonA->setText(question.giveAnswers());
        question.lilcounterplus();
        ui.radioButtonB->setText(question.giveAnswers());
        question.lilcounterplus();
        ui.radioButtonC->setText(question.giveAnswers());
        question.lilcounterplus();
        ui.radioButtonD->setText(question.giveAnswers());
        question.counterplus();
        question.resetlilCounter();
    }
}

QString Question::genQuestion()
{
    q[shuffled[0]] = QStringLiteral("Ktorý je 4. planéta od Sola?");
    q[shuffled[1]] = QStringLiteral("Ako sa volal krstným menom fyzik Tesla?");
    q[shuffled[2]] = QStringLiteral("Ktorý geometrický útvar nemá obvod?");
    q[shuffled[3]] = QStringLiteral("Ktorá korporácia vyvýjal programovaný jazyk C#?");
    q[shuffled[4]] = QStringLiteral("Kto objavil Tróju a neskor aj Mikény?");
    q[shuffled[5]] = QStringLiteral("Ktorá kniha Harryho Pottera je najhrubšia?");
    q[shuffled[6]] = QStringLiteral("Koľko planét sú v slnečnej sústave?");
    q[shuffled[7]] = QStringLiteral("Ktoré je najkratšie ročné obdobie?");
    q[shuffled[8]] = QStringLiteral("Akú približnú hodnotu má konštanta pí?");
    q[shuffled[9]] = QStringLiteral("Koľko je rýchlosť svetla?");
    return q[counter];
};
QString Question::GgenQuestion()
{
    q[shuffled[0]];
    q[shuffled[1]];
    q[shuffled[2]];
    q[shuffled[3]];
    q[shuffled[4]];
    q[shuffled[5]];
    q[shuffled[6]];
    q[shuffled[7]];
    q[shuffled[8]];
    q[shuffled[9]];
    return q[counter-1];
};

QString Question::giveAnswers()
{
    a[shuffled[0]][0] = "A) Venus";
    a[shuffled[0]][1] = "B) Zem";
    a[shuffled[0]][2] = "C) Jupiter";
    a[shuffled[0]][3] = "D) Mars";
    a[shuffled[1]][0] = "A) Isaac";
    a[shuffled[1]][1] = "B) Thomas";
    a[shuffled[1]][2] = "C) Nikola";
    a[shuffled[1]][3] = "D) Elon";

    a[shuffled[2]][0] = "A) Priamka";
    a[shuffled[2]][1] = QStringLiteral("B) Štvorec");
    a[shuffled[2]][2] = QStringLiteral("C) Trojuholník");
    a[shuffled[2]][3] = "D) Elipsa";
    a[shuffled[3]][0] = "A) Apple";
    a[shuffled[3]][1] = "B) Huawei";
    a[shuffled[3]][2] = "C) Microsoft";
    a[shuffled[3]][3] = "D) Samsung";

    a[shuffled[4]][0] = "A) Heinrich Schliemann";
    a[shuffled[4]][1] = "B) Karl Friederichs";
    a[shuffled[4]][2] = "C) Eduard Gerhard";
    a[shuffled[4]][3] = "D) Klaus Schmidt";
    a[shuffled[5]][0] = "A) 4.";
    a[shuffled[5]][1] = "B) 5.";
    a[shuffled[5]][2] = "C) 7.";
    a[shuffled[5]][3] = "D) 3.";

    a[shuffled[6]][0] = "A) 10";
    a[shuffled[6]][1] = "B) 9";
    a[shuffled[6]][2] = "C) 8";
    a[shuffled[6]][3] = "D) 7";
    a[shuffled[7]][0] = "A) Zima";
    a[shuffled[7]][1] = "B) Jar";
    a[shuffled[7]][2] = "C) Leto";
    a[shuffled[7]][3] = QStringLiteral("D) Jeseň");

    a[shuffled[8]][0] = "A) 9.8";
    a[shuffled[8]][1] = "B) 6.28";
    a[shuffled[8]][2] = "C) 3.14";
    a[shuffled[8]][3] = "D) 2.71";
    a[shuffled[9]][0] = "A) 300 000 km/h";
    a[shuffled[9]][1] = "B) 300 000 m/h";
    a[shuffled[9]][2] = "C) 300 000 m/s";
    a[shuffled[9]][3] = "D) 300 000 km/s";

    return a[counter][lilcounter];
}
