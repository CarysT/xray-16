#pragma once

#include "Common/Common.hpp"
#include "Common/FSMacros.hpp"
#include "xrCore/xrCore.h"

#include "xrServerEntities/xrEProps.h"
#include "xrEProps.h"

#include <msclr/marshal.h>

inline System::String^ BackSlashToSlash(pcstr originalString)
{
    System::String^ newString = gcnew System::String(originalString);
    return newString->Replace('\\', '/');
}
