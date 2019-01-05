#ifndef CHRONO_H
#define CHRONO_H

#include <QObject>

class Chrono : public QObject
{
    Q_OBJECT
public:
    explicit Chrono(QObject *parent = nullptr);

signals:

//    void isButtonClick(bool isClick);

public slots:

  //  void startChrono(bool isClick);
};

#endif // CHRONO_H
