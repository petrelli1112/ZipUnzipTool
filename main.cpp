#include <QCoreApplication>

#include "../zipunzip.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ZipUnzip tool;
    //解压zip包
    tool.unzip("C:/Qt/Tools/xxoo.zip", "C:/Qt/Tools/wx");
//    tool.zip("/Users/zdd/Projects/ZipUnzipTool/sqhy", "/Users/zdd/Projects/ZipUnzipTool/sqhy.zip");
    cout << " -- done --"<<endl;
    return a.exec();
}
