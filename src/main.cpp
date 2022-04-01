#include <Arduino.h>
#include <AX12A.h>
#include <FlexCAN.h>
#include "kinetis_flexcan.h"

#define DirectionPin (13u)
#define BaudRate (1000000ul)

#define SERVO_AV_GAUCHE 5
#define SERVO_AV_DROIT 1
#define SERVO_ARR_GAUCHE 8
#define SERVO_ARR_DROIT 6

#define POS_DEFAUT_AV_DROIT 512
#define POS_PRISE_AV_DROIT 163
#define POS_DEFAUT_AV_GAUCHE 117
#define POS_PRISE_AV_GAUCHE 401

#define POS_DEFAUT_ARR_DROIT 948
#define POS_PRISE_ARR_DROIT 690
#define POS_DEFAUT_ARR_GAUCHE 746
#define POS_PRISE_ARR_GAUCHE 1020

void setup()
{
	ax12a.begin(BaudRate, DirectionPin, &Serial1);
	//Serial.begin(9600);
	pinMode(13, OUTPUT);
	digitalWrite(13, HIGH);
}

void loop()
{
	ax12a.move(SERVO_AV_DROIT, POS_DEFAUT_AV_DROIT);
	delay(1000);
	ax12a.move(SERVO_AV_DROIT, POS_PRISE_AV_DROIT);
	delay(1000);
	ax12a.move(SERVO_AV_GAUCHE, POS_DEFAUT_AV_GAUCHE);
	delay(1000);
	ax12a.move(SERVO_AV_GAUCHE, POS_PRISE_AV_GAUCHE);
	delay(1000);
	ax12a.move(SERVO_ARR_GAUCHE, POS_DEFAUT_ARR_GAUCHE);
	delay(1000);
	ax12a.move(SERVO_ARR_GAUCHE, POS_PRISE_ARR_GAUCHE);
	delay(1000);
	ax12a.move(SERVO_ARR_DROIT, POS_DEFAUT_ARR_DROIT);
	delay(1000);
	ax12a.move(SERVO_ARR_DROIT, POS_PRISE_ARR_DROIT);
	delay(1000);
}

void canHandler()
{

}

void moveServo(uint8_t servo,uint8_t pos){
	switch (servo)
	{
	case SERVO_AV_GAUCHE:
		
		break;
	
	
	}
}