#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
//   QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
//   QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
//   QApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);

  QApplication a(argc, argv);
  MainWindow w;
  w.setWindowTitle(w.windowTitle().arg(qVersion()));
  w.show();
  return a.exec();
}
