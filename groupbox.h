#ifndef GROUPBOX_H
#define GROUPBOX_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QGroupBox;
QT_END_NAMESPACE

class GroupBox : public QWidget
{
    Q_OBJECT

public:
    GroupBox(QWidget *parent = nullptr);

private:
    QGroupBox *createFirstExclusiveGroup();
    QGroupBox *createSecondExclusiveGroup();
    QGroupBox *createNonExclusiveGroup();
    QGroupBox *createPushButtonGroup();
};
#endif // GROUPBOX_H
