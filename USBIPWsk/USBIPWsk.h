#ifndef _USBIPWSK_H
#define _USBIPWSK_H

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
//#include <dontuse.h>

EXTERN_C_START

//DECLSPEC_IMPORT int LoadPrinterDriver(int arg1);

DRIVER_INITIALIZE DriverEntry;

DRIVER_UNLOAD DriverUnload;

void InitializeWskClient();

EXTERN_C_END

#endif // !_USBIPWSK_H
