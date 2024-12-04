/**
Bits of code that might be helpful when starting a program with an original RCM board
https://github.com/RCMgames/RCM-Hardware-BYTE
// from https://github.com/RCMgames/useful-code/tree/main/boards
*/

// all the servo drivers
JMotorDriverEsp32Servo servo1 = JMotorDriverEsp32Servo(port1);
JMotorDriverEsp32Servo servo2 = JMotorDriverEsp32Servo(port2);
JMotorDriverEsp32Servo servo3 = JMotorDriverEsp32Servo(port3);
JMotorDriverEsp32Servo servo4 = JMotorDriverEsp32Servo(port4);
JMotorDriverEsp32Servo servo5 = JMotorDriverEsp32Servo(port5);
JMotorDriverEsp32Servo servo6 = JMotorDriverEsp32Servo(port6);
JMotorDriverEsp32Servo servo7 = JMotorDriverEsp32Servo(port7);
JMotorDriverEsp32Servo servo8 = JMotorDriverEsp32Servo(port8);

// all the motor drivers
JMotorDriverTMC7300 motorA = JMotorDriverTMC7300(portA);
JMotorDriverTMC7300 motorB = JMotorDriverTMC7300(portB);
JMotorDriverTMC7300 motorC = JMotorDriverTMC7300(portC);
JMotorDriverTMC7300 motorD = JMotorDriverTMC7300(portD);
JMotorDriverTMC7300 motorE = JMotorDriverTMC7300(portE);
JMotorDriverTMC7300 motorF = JMotorDriverTMC7300(portF);
JMotorDriverTMC7300 motorG = JMotorDriverTMC7300(portG);
JMotorDriverTMC7300 motorH = JMotorDriverTMC7300(portH);

// variables for the drivers
float servo1Val = 0;
float servo2Val = 0;
float servo3Val = 0;
float servo4Val = 0;
float servo5Val = 0;
float servo6Val = 0;
float servo7Val = 0;
float servo8Val = 0;

float motorAVal = 0;
float motorBVal = 0;
float motorCVal = 0;
float motorDVal = 0;
float motorEVal = 0;
float motorFVal = 0;
float motorGVal = 0;
float motorHVal = 0;

// set all the motor drivers (you can put this in Enabled())
servo1.set(servo1Val);
servo2.set(servo2Val);
servo3.set(servo3Val);
servo4.set(servo4Val);
servo5.set(servo5Val);
servo6.set(servo6Val);
servo7.set(servo7Val);
servo8.set(servo8Val);

motorA.set(motorAVal);
motorB.set(motorBVal);
motorC.set(motorCVal);
motorD.set(motorDVal);
motorE.set(motorEVal);
motorF.set(motorFVal);
motorG.set(motorGVal);
motorH.set(motorHVal);

// enable all the motor drivers (you can put this in Enable())
servo1.enable();
servo2.enable();
servo3.enable();
servo4.enable();
servo5.enable();
servo6.enable();
servo7.enable();
servo8.enable();

motorA.enable();
motorB.enable();
motorC.enable();
motorD.enable();
motorE.enable();
motorF.enable();
motorG.enable();
motorH.enable();

// disable all the motor drivers (you can put this in Disable())
servo1.disable();
servo2.disable();
servo3.disable();
servo4.disable();
servo5.disable();
servo6.disable();
servo7.disable();
servo8.disable();

motorA.disable();
motorB.disable();
motorC.disable();
motorD.disable();
motorE.disable();
motorF.disable();
motorG.disable();
motorH.disable();

// receive values for all the variables (you can put this in WifiDataToParse())
servo1Val = EWD::recvFl();
servo2Val = EWD::recvFl();
servo3Val = EWD::recvFl();
servo4Val = EWD::recvFl();
servo5Val = EWD::recvFl();
servo6Val = EWD::recvFl();
servo7Val = EWD::recvFl();
servo8Val = EWD::recvFl();

motorAVal = EWD::recvFl();
motorBVal = EWD::recvFl();
motorCVal = EWD::recvFl();
motorDVal = EWD::recvFl();
motorEVal = EWD::recvFl();
motorFVal = EWD::recvFl();
motorGVal = EWD::recvFl();
motorHVal = EWD::recvFl();
