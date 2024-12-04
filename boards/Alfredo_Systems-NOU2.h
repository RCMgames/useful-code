/**
Bits of code that might be helpful when starting a program with an Alfredo Systems NoU2 board
https://www.alfredosys.com/products/alfredo-nou2/
// from https://github.com/RCMgames/useful-code/tree/main/boards
*/

// all the servo drivers
JMotorDriverEsp32Servo servo1Driver = JMotorDriverEsp32Servo(port1);
JMotorDriverEsp32Servo servo2Driver = JMotorDriverEsp32Servo(port2);
JMotorDriverEsp32Servo servo3Driver = JMotorDriverEsp32Servo(port3);
JMotorDriverEsp32Servo servo4Driver = JMotorDriverEsp32Servo(port4);

// all the motor drivers
JMotorDriverEsp32HBridge motorADriver = JMotorDriverEsp32HBridge(portA);
JMotorDriverEsp32HBridge motorBDriver = JMotorDriverEsp32HBridge(portB);
JMotorDriverEsp32HBridge motorCDriver = JMotorDriverEsp32HBridge(portC);
JMotorDriverEsp32HBridge motorDDriver = JMotorDriverEsp32HBridge(portD);
JMotorDriverEsp32HBridge motorEDriver = JMotorDriverEsp32HBridge(portE);
JMotorDriverEsp32HBridge motorFDriver = JMotorDriverEsp32HBridge(portF);

// variables for the drivers
float servo1Val = 0;
float servo2Val = 0;
float servo3Val = 0;
float servo4Val = 0;

float motorAVal = 0;
float motorBVal = 0;
float motorCVal = 0;
float motorDVal = 0;
float motorEVal = 0;
float motorFVal = 0;

// set all the motor drivers (you can put this in Enabled())
servo1Driver.set(servo1Val);
servo2Driver.set(servo2Val);
servo3Driver.set(servo3Val);
servo4Driver.set(servo4Val);

motorADriver.set(motorAVal);
motorBDriver.set(motorBVal);
motorCDriver.set(motorCVal);
motorDDriver.set(motorDVal);
motorEDriver.set(motorEVal);
motorFDriver.set(motorFVal);

// enable all the motor drivers (you can put this in Enable())
servo1Driver.enable();
servo2Driver.enable();
servo3Driver.enable();
servo4Driver.enable();

motorADriver.enable();
motorBDriver.enable();
motorCDriver.enable();
motorDDriver.enable();
motorEDriver.enable();
motorFDriver.enable();

// disable all the motor drivers (you can put this in Disable())
servo1Driver.disable();
servo2Driver.disable();
servo3Driver.disable();
servo4Driver.disable();

motorADriver.disable();
motorBDriver.disable();
motorCDriver.disable();
motorDDriver.disable();
motorEDriver.disable();
motorFDriver.disable();

// receive values for all the variables (you can put this in WifiDataToParse())
servo1Val = EWD::recvFl();
servo2Val = EWD::recvFl();
servo3Val = EWD::recvFl();
servo4Val = EWD::recvFl();

motorAVal = EWD::recvFl();
motorBVal = EWD::recvFl();
motorCVal = EWD::recvFl();
motorDVal = EWD::recvFl();
motorEVal = EWD::recvFl();
motorFVal = EWD::recvFl();
