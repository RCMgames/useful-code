// https://github.com/RCMgames/RCM-hardware-D1

// all the servo drivers
JMotorDriverAvrServo servo1Driver = JMotorDriverAvrServo(port1);
JMotorDriverAvrServo servo2Driver = JMotorDriverAvrServo(port2);

// all the motor drivers
JMotorDriverAvrHBridge motorADriver = JMotorDriverAvrHBridge(portA);
JMotorDriverAvrHBridge motorBDriver = JMotorDriverAvrHBridge(portB);

// variables for the drivers
float servo1Val = 0;
float servo2Val = 0;

float motorAVal = 0;
float motorBVal = 0;

// Enabled()
    servo1Driver.set(servo1Val);
    servo2Driver.set(servo2Val);

    motorADriver.set(motorAVal);
    motorBDriver.set(motorBVal);

// Enable()
    servo1Driver.enable();
    servo2Driver.enable();

    motorADriver.enable();
    motorBDriver.enable();

// Disable()
    servo1Driver.disable();
    servo2Driver.disable();

    motorADriver.disable();
    motorBDriver.disable();

// WifiDataToParse()
    servo1Val = EWD::recvFl();
    servo2Val = EWD::recvFl();

    motorAVal = EWD::recvFl();
    motorBVal = EWD::recvFl();

