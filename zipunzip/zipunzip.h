#ifndef ZIPUNZIP_H
#define ZIPUNZIP_H

#include <QObject>

class ZipUnzip : public QObject
{
    Q_OBJECT
public:
    explicit ZipUnzip(QObject *parent = 0);

    ///
    /// \brief zip
    /// \param dirPath 需要压缩的路径
    /// \param zipPath 压缩成xx.zip
    /// \return
    ///
    bool zip(const QString &dirPath, const QString &zipPath);
    ///
    /// \brief unzip
    /// \param zipPath  源压缩包的全路径
    /// \param dirPath  解压到的目标路径
    /// \return
    ///
    bool unzip(const QString &zipPath, const QString &dirPath);
};

#endif // ZIPUNZIP_H
