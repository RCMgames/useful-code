/**
Bits of code that might be helpful when starting a program with an Alfredo Systems NoU2 board
https://www.alfredosys.com/products/alfredo-nou2/
// from https://github.com/RCMgames/useful-code/tree/main/boards
*/

// all the servo drivers
JMotorDriverEsp32Servo servo1Driver = JMotorDriverEsp32Servo(servo1port);
JMotorDriverEsp32Servo servo2Driver = JMotorDriverEsp32Servo(servo2port);
JMotorDriverEsp32Servo servo3Driver = JMotorDriverEsp32Servo(servo3port);
JMotorDriverEsp32Servo servo4Driver = JMotorDriverEsp32Servo(servo4port);

// all the motor drivers
JMotorDriverEsp32HBridge motor1Driver = JMotorDriverEsp32HBridge(motor1port);
JMotorDriverEsp32HBridge motor2Driver = JMotorDriverEsp32HBridge(motor2port);
JMotorDriverEsp32HBridge motor3Driver = JMotorDriverEsp32HBridge(motor3port);
JMotorDriverEsp32HBridge motor4Driver = JMotorDriverEsp32HBridge(motor4port);
JMotorDriverEsp32HBridge motor5Driver = JMotorDriverEsp32HBridge(motor5port);
JMotorDriverEsp32HBridge motor6Driver = JMotorDriverEsp32HBridge(motor6port);

// variables for the drivers
float servo1Val = 0;
float servo2Val = 0;
float servo3Val = 0;
float servo4Val = 0;

float motor1Val = 0;
float motor2Val = 0;
float motor3Val = 0;
float motor4Val = 0;
float motor5Val = 0;
float motor6Val = 0;

// set all the motor drivers (you can put this in Enabled())
servo1Driver.set(servo1Val);
servo2Driver.set(servo2Val);
servo3Driver.set(servo3Val);
servo4Driver.set(servo4Val);

motor1Driver.set(motor1Val);
motor2Driver.set(motor2Val);
motor3Driver.set(motor3Val);
motor4Driver.set(motor4Val);
motor5Driver.set(motor5Val);
motor6Driver.set(motor6Val);

// enable all the motor drivers (you can put this in Enable())
servo1Driver.enable();
servo2Driver.enable();
servo3Driver.enable();
servo4Driver.enable();

motor1Driver.enable();
motor2Driver.enable();
motor3Driver.enable();
motor4Driver.enable();
motor5Driver.enable();
motor6Driver.enable();

// disable all the motor drivers (you can put this in Disable())
servo1Driver.disable();
servo2Driver.disable();
servo3Driver.disable();
servo4Driver.disable();

motor1Driver.disable();
motor2Driver.disable();
motor3Driver.disable();
motor4Driver.disable();
motor5Driver.disable();
motor6Driver.disable();

// receive values for all the variables (you can put this in WifiDataToParse())
servo1Val = EWD::recvFl();
servo2Val = EWD::recvFl();
servo3Val = EWD::recvFl();
servo4Val = EWD::recvFl();

motor1Val = EWD::recvFl();
motor2Val = EWD::recvFl();
motor3Val = EWD::recvFl();
motor4Val = EWD::recvFl();
motor5Val = EWD::recvFl();
motor6Val = EWD::recvFl();
