#ifndef FILEIO_H
#define FILEIO_H

#include <QQuickItem>

class FileIo : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(FileIo)

    Q_PROPERTY(QString path READ path WRITE setPath NOTIFY pathChanged)

public:
    FileIo(QQuickItem *parent = nullptr);
    ~FileIo();

    const QString &path() const { return mPath; }

public slots:
    void setPath(QString path);
    void write(QString text);
    void append(QString text);
    QString readAll();

signals:
    void pathChanged(QString arg);

private:
    QString mPath;
};

#endif // FILEIO_H
