#ifndef TOWER_H
#define TOWER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Tower: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *BallMotor;
	DigitalInput *BallLimit;
public:
	Tower();
	bool LimitStatus();
	void InitDefaultCommand();
	void TowerStop();
	void ballup();
	void balldown();
};

#endif

