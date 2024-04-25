/**
Bits of code that might be helpful when starting a program with an original RCM board
https://github.com/RCMgames/RCM-Hardware-Nibble
// from https://github.com/RCMgames/useful-code/tree/main/boards
*/

// all the servo drivers
JMotorDriverEsp32Servo servo1Driver = JMotorDriverEsp32Servo(port1);
JMotorDriverEsp32Servo servo2Driver = JMotorDriverEsp32Servo(port2);
JMotorDriverEsp32Servo servo3Driver = JMotorDriverEsp32Servo(port3);
JMotorDriverEsp32Servo servo4Driver = JMotorDriverEsp32Servo(port4);

// all the motor drivers
JMotorDriverTMC7300 motor1Driver = JMotorDriverTMC7300(portA);
JMotorDriverTMC7300 motor2Driver = JMotorDriverTMC7300(portB);
JMotorDriverTMC7300 motor3Driver = JMotorDriverTMC7300(portC);
JMotorDriverTMC7300 motor4Driver = JMotorDriverTMC7300(portD);

// variables for the drivers
float servo1Val = 0;
float servo2Val = 0;
float servo3Val = 0;
float servo4Val = 0;

float motor1Val = 0;
float motor2Val = 0;
float motor3Val = 0;
float motor4Val = 0;

// set all the motor drivers (you can put this in Enabled())
servo1Driver.set(servo1Val);
servo2Driver.set(servo2Val);
servo3Driver.set(servo3Val);
servo4Driver.set(servo4Val);

motor1Driver.set(motor1Val);
motor2Driver.set(motor2Val);
motor3Driver.set(motor3Val);
motor4Driver.set(motor4Val);

// enable all the motor drivers (you can put this in Enable())
servo1Driver.enable();
servo2Driver.enable();
servo3Driver.enable();
servo4Driver.enable();

motor1Driver.enable();
motor2Driver.enable();
motor3Driver.enable();
motor4Driver.enable();

// disable all the motor drivers (you can put this in Disable())
servo1Driver.disable();
servo2Driver.disable();
servo3Driver.disable();
servo4Driver.disable();

motor1Driver.disable();
motor2Driver.disable();
motor3Driver.disable();
motor4Driver.disable();

// receive values for all the variables (you can put this in WifiDataToParse())
motor1Val = EWD::recvFl();
motor2Val = EWD::recvFl();
motor3Val = EWD::recvFl();
motor4Val = EWD::recvFl();

servo1Val = EWD::recvFl();
servo2Val = EWD::recvFl();
servo3Val = EWD::recvFl();
servo4Val = EWD::recvFl();
