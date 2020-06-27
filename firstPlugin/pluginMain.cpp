#include "firstCommand.h"

#include <maya/MFnPlugin.h>

MStatus initializePlugin(MObject obj)
{
	MStatus status;

	MFnPlugin fnPlugin(obj, "Chad Vernon", "1.0", "Any");

	status = fnPlugin.registerCommand("myFancyCommand", FirstCommand::creator);
	CHECK_MSTATUS_AND_RETURN_IT(status);

	return MS::kSuccess;
}


MStatus uninitializePlugin(MObject obj)
{
	MStatus status;

	MFnPlugin fnPlugin(obj);

	status = fnPlugin.deregisterCommand("myFancyCommand");
	CHECK_MSTATUS_AND_RETURN_IT(status);

	return MS::kSuccess;
}