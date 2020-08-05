#ifndef CCUSTOMBUTTTON_H
#define CCUSTOMBUTTTON_H

#include <QWidget>
#include <QPushButton>

class CCustomButtton : public QPushButton
{
    Q_OBJECT
public:
    explicit CCustomButtton(QString strText, QWidget *parent = nullptr);

private:
//    void        initUI();

signals:

public slots:
};

#endif // CCUSTOMBUTTTON_H
