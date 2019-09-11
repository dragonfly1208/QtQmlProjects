#ifndef FILEIO_H
#define FILEIO_H

#include <QQuickItem>

class FileIO : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(FileIO)

public:
    FileIO(QQuickItem *parent = nullptr);
    ~FileIO();
};

#endif // FILEIO_H
