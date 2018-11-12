/*
 * MotorControl.h
 *
 *  Created on: Nov 11, 2018
 *      Author: Nikki
 */

#include "stm32f3xx_hal.h"
#ifndef MOTORCONTROL_H_
#define MOTORCONTROL_H_

enum MotorState
{
	Enable,
	LSBrake,
	HSBrake,
	Coast
};

class MotorControl {
private:
	GPIO_TypeDef* _IN1_PORT;
	uint16_t _IN1;

	GPIO_TypeDef* _IN2_PORT;
	uint16_t _IN2;

	GPIO_TypeDef* _D2_PORT;
	uint16_t _D2;

	float speed; //This is a number between -1 to 1, with -1 being 100% reverse and 1 being 100% forward

	MotorState State;


public:
	MotorControl(GPIO_TypeDef* IN1_PORT, uint16_t IN1,
		GPIO_TypeDef* IN2_PORT, uint16_t IN2,
		GPIO_TypeDef* D2_PORT, uint16_t D2);

	void setSpeed(float Speed);

	void setState(MotorState State);


	// virtual ~MotorControl();
};

#endif /* MOTORCONTROL_H_ */
