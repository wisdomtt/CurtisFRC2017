#ifndef pTurn90_H
#define pTurn90_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class pTurn90 : public Command {
public:
	pTurn90();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // pTurn90_H
