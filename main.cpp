// Created by Eternity_boundary on Jan 4,2025
#include "Celestian.h"
#include <QApplication>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	Celestian w;
	w.setWindowTitle("Celestian++");
	w.show();
	return a.exec();
}