#pragma execution_character_set("utf-8")

#ifndef EQUIPMENTTAB_H
#define EQUIPMENTTAB_H

#include <QCheckBox>
#include <QWidget>
#include <QtCore>

#include "gameconfig.h"
#include "gamedata.h"
#include "listtab.h"

#include "ui_equipmenttabform.h"

class EquipmentTab : public ListTab, private Ui::EquipmentTabForm {
    Q_OBJECT

public:
    explicit EquipmentTab(SaveManager* mgr, int num1Offset, int itemCount, QWidget* parent = 0, int sectionId = -1);
    ~EquipmentTab();

public slots:
    virtual void setButtonsEnabled(bool s);

private:
    Ui::EquipmentTabForm* form;
};

#endif // EQUIPMENTTAB_H
