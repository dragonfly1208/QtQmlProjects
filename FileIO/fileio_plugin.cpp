#include "fileio_plugin.h"
#include "fileio.h"

#include <qqml.h>

void FileIOPlugin::registerTypes(const char *uri)
{
    // @uri com.mycompany.qmlcomponents
    qmlRegisterType<FileIO>(uri, 1, 0, "FileIO");
}

