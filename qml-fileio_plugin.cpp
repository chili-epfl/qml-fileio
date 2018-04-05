#include "qml-fileio_plugin.h"
#include "fileio.h"

#include <qqml.h>

void Qml_FileioPlugin::registerTypes(const char *uri)
{
    // @uri ch.epfl.chili.fileio
    qmlRegisterType<FileIo>(uri, 1, 0, "FileIo");
}

