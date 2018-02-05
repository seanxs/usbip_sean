#ifndef _USBIPWSK_EXPORTSH
#define _USBIPWSK_EXPORTSH

#include <ntddk.h>
#include <wdm.h>
#include <wmilib.h> // required for WMILIB_CONTEXT
#include <initguid.h> // required for GUID definitions
#include <ntintsafe.h>
#include <usbdi.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

#define NTSTRSAFE_LIB
#include <ntstrsafe.h>

EXTERN_C_START

void InitializeWskClient();

EXTERN_C_END


#endif // !_USBIPWSK_EXPORTSH

