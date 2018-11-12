/*
 * MotorControl.cpp
 *
 *  Created on: Nov 11, 2018
 *      Author: Nikki
 */

#include "MotorControl.h"



MotorControl::MotorControl(GPIO_TypeDef* IN1_PORT, uint16_t IN1,
		GPIO_TypeDef* IN2_PORT, uint16_t IN2,
		GPIO_TypeDef* D2_PORT, uint16_t D2)
{
	// TODO Auto-generated constructor stub

	_IN1_PORT = IN1_PORT;
	_IN1 = IN1;

	_IN2_PORT = IN2_PORT;
	_IN2 = IN2;

	_D2_PORT = D2_PORT;
	_D2 = D2;

}

MotorControl::setSpeed(float Speed)
{
	//HAL code for pin reversing and setting states for motor control
}

MotorControl::setState(MotorState State)
{
	switch (State)
	{
	case MotorControl.Enable:



	break;

	case MotorControl.LSBrake:



	break;

	case MotorControl.HSBrake:



	break;

	case MotorControl.Coast:



	break;

	}
}


//MotorControl::~MotorControl()
//{
	// TODO Auto-generated destructor stub
//}

