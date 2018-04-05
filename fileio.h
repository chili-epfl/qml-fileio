#ifndef FILEIO_H
#define FILEIO_H

#include <QQuickItem>

class FileIo : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(FileIo)

    Q_PROPERTY(QUrl path READ path WRITE setPath NOTIFY pathChanged)

public:
    FileIo(QQuickItem *parent = nullptr);
    ~FileIo();

    const QUrl &path() const { return mPath; }

public slots:
    void setPath(QUrl source);
    void write(QString text);
    void append(QString text);

signals:
    void pathChanged(QUrl arg);

private:
    QUrl mPath;
};

#endif // FILEIO_H
