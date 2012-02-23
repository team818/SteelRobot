#ifndef BALL_UP_H
#define BALL_UP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */

class BallUp: public CommandBase {
public:
	BallUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
