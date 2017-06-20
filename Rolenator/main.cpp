#include <QApplication>
#include "Rolenator.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    Rolenator rolenator;
    rolenator.show();
    return app.exec();
}
