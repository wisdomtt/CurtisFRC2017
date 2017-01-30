#ifndef PrintHello_H
#define PrintHello_H
#include "iostream"
#include "Commands/Subsystem.h"

class PrintHello : public Command {
public:
	PrintHello();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // PrintHello_H
