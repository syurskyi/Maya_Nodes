#include "firstCommand.h"


FirstCommand::FirstCommand()
{
}


void* FirstCommand::creator()
{
	return new FirstCommand;
}


MStatus FirstCommand::doIt(const MArgList& argList)
{
	MGlobal::displayInfo("I just wrote my first command plug-in!");
	return MS::kSuccess;
}