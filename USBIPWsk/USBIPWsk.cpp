#include "USBIPWsk.h"
#include "exports.h"

#ifdef ALLOC_PRAGMA
#pragma alloc_text(INIT, DriverEntry)
#endif
/*++////////////////////////////////////////////////////////////////////////////

DriverEntry()

Routine Description:

Temporary entry point needed to initialize the class system dll.
It doesn't do anything.

Arguments:

DriverObject - Pointer to the driver object created by the system.

Return Value:

STATUS_SUCCESS

--*/
NTSTATUS
DriverEntry(
	IN PDRIVER_OBJECT DriverObject,
	IN PUNICODE_STRING RegistryPath
)
{
	UNREFERENCED_PARAMETER(DriverObject);
	UNREFERENCED_PARAMETER(RegistryPath);

	return STATUS_SUCCESS;
}

/*++////////////////////////////////////////////////////////////////////////////

DriverUnload()

Routine Description:

called when there are no more references to the driver.  this allows
drivers to be updated without rebooting.

Arguments:

DriverObject - a pointer to the driver object that is being unloaded

Status:

--*/
VOID
DriverUnload(
	IN PDRIVER_OBJECT DriverObject
)
{
	UNREFERENCED_PARAMETER(DriverObject);

	return;
}

void InitializeWskClient()
{
	KdPrint((__FUNCTION__"\n"));

	return;
}

NTSTATUS DllUnload(VOID)
{
	KdPrint(("USBIPWsk.sys is now unloading\n"));

	return STATUS_SUCCESS;
}

NTSTATUS DllInitialize(
	_In_ PUNICODE_STRING RegistryPath
)
{
	UNREFERENCED_PARAMETER(RegistryPath);

	KdPrint(("USBIPWsk.sys is now loading\n"));
	KdPrint(("RegistryPath:%wZ\n", RegistryPath));

	return STATUS_SUCCESS;
}