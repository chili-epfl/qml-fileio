#include "qml-fileio_plugin.h"
#include "QMLFileIo.h"

#include <qqml.h>

void Qml_FileioPlugin::registerTypes(const char *uri)
{
    // @uri QMLFileIo
    qmlRegisterType<QMLFileIo>(uri, 1, 0, "QMLFileIo");
}
