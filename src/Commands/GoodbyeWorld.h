#ifndef GoodbyeWorld_H
#define GoodbyeWorld_H

#include "../CommandBase.h"

class GoodbyeWorld : public CommandBase {
public:
	GoodbyeWorld();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // GoodbyeWorld_H
