#include 
#include 

DeclareSimpleCommand(helloWorld, "Autodesk", "2019");

MStatus helloWorld::doIt(const MArgList&)
{
	cout << "Hello World\n" << endl;
	return MS::kSuccess;
}