#include "CCustomButtton.h"
#include "global.h"

CCustomButtton::CCustomButtton(QString strText, QWidget *parent) : QPushButton(parent)
{
    QFont font(STR_MAIN_FONT_FAMILY, BUTTON_FONT_SIZE);

    this->setFont(font);
    this->setFixedSize(g_sizeScreen.width()/10, g_sizeScreen.width()/30);
    this->setText(strText);
    setStyleSheet("QPushButton {background-color: white; color: #39047a; border-style: outset; border-width: 4px; border-color: #39047a; border-radius: 5px;}");
}
