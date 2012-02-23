#ifndef BALL_DOWN_H
#define BALL_DOWN_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Team 818
 */

class BallDown: public CommandBase {
public:
	BallDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
