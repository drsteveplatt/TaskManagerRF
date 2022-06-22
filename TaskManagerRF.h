// Main program include for TaskManagerRF
// Note this file should only be #include'd from the main program.
// Other C++ files in the program should #include TaskManagerRFSub.h
#ifndef TASKMANAGER_H_INCLUDED
#define TASKMANAGER_H_INCLUDED
#define TASKMANAGERRF_H_INCLUDED

#include <TaskManagerMacros.h>
#include <TaskManagerRFCore.h>
// These need to be here to ensure these are declared.
// Note that each main-file include in the TaskManager family has one of these.
// This ensures that the correct TaskMgr is used.
TaskManagerRF TaskMgr;
void loop() {
    TaskMgr.loop();
}
#endif // TASKMANAGER_H_INCLUDED


