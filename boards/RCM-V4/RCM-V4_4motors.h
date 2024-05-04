/**
Bits of code that might be helpful when starting a program with an original RCM board
https://github.com/RCMgames/RCM-Hardware-V4
// from https://github.com/RCMgames/useful-code/tree/main/boards
*/

// all the servo drivers
JMotorDriverEsp32Servo servo1Driver = JMotorDriverEsp32Servo(port1);
JMotorDriverEsp32Servo servo2Driver = JMotorDriverEsp32Servo(port2);
JMotorDriverEsp32Servo servo3Driver = JMotorDriverEsp32Servo(port3);
JMotorDriverEsp32Servo servo4Driver = JMotorDriverEsp32Servo(port4);
JMotorDriverEsp32Servo servo5Driver = JMotorDriverEsp32Servo(port5);
JMotorDriverEsp32Servo servo6Driver = JMotorDriverEsp32Servo(port6);
JMotorDriverEsp32Servo servo7Driver = JMotorDriverEsp32Servo(port7);

JMotorDriverEsp32HBridge motorADriver = JMotorDriverEsp32HBridge(portA);
JMotorDriverEsp32HBridge motorBDriver = JMotorDriverEsp32HBridge(portB);
JMotorDriverEsp32HBridge motorCDriver = JMotorDriverEsp32HBridge(portC);
JMotorDriverEsp32HBridge motorDDriver = JMotorDriverEsp32HBridge(portD);

// variables for the drivers
float servo1Val = 0;
float servo2Val = 0;
float servo3Val = 0;
float servo4Val = 0;
float servo5Val = 0;
float servo6Val = 0;
float servo7Val = 0;

float motorAVal = 0;
float motorBVal = 0;
float motorCVal = 0;
float motorDVal = 0;

// set all the motor drivers (you can put this in Enabled())
servo1Driver.set(servo1Val);
servo2Driver.set(servo2Val);
servo3Driver.set(servo3Val);
servo4Driver.set(servo4Val);
servo5Driver.set(servo5Val);
servo6Driver.set(servo6Val);
servo7Driver.set(servo7Val);

motorADriver.set(motorAVal);
motorBDriver.set(motorBVal);
motorCDriver.set(motorCVal);
motorDDriver.set(motorDVal);

// enable all the motor drivers (you can put this in Enable())
servo1Driver.enable();
servo2Driver.enable();
servo3Driver.enable();
servo4Driver.enable();
servo5Driver.enable();
servo6Driver.enable();
servo7Driver.enable();

motorADriver.enable();
motorBDriver.enable();
motorCDriver.enable();
motorDDriver.enable();

// disable all the motor drivers (you can put this in Disable())
servo1Driver.disable();
servo2Driver.disable();
servo3Driver.disable();
servo4Driver.disable();
servo5Driver.disable();
servo6Driver.disable();
servo7Driver.disable();

motorADriver.disable();
motorBDriver.disable();
motorCDriver.disable();
motorDDriver.disable();

// receive values for all the variables (you can put this in WifiDataToParse())
servo1Val = EWD::recvFl();
servo2Val = EWD::recvFl();
servo3Val = EWD::recvFl();
servo4Val = EWD::recvFl();
servo5Val = EWD::recvFl();
servo6Val = EWD::recvFl();
servo7Val = EWD::recvFl();

motorAVal = EWD::recvFl();
motorBVal = EWD::recvFl();
motorCVal = EWD::recvFl();
motorDVal = EWD::recvFl();
