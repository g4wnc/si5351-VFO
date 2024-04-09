

/*
As of V1.13, this configuration file still exists, but most options
will now be selected from a configuration menu at run time and stored
in EEPROM. This should be easier for the user. However, some options
still need to be chosen by editing source code in this file. Instructions
precede each line to potentially be edited.

*/



// **********  BELOW - CHOSE I2C OR PARALLEL INTERFACE FOR LCD *************

// USER: IF USING AN LCD DISPLAY WITH A PARALLEL INTERFACE, 
// REMOVE THE COMMENT MARKS FROM THE LINE BELOW. IF USING AN I2C
// INTERFACE, THE COMMENT MARKS SHOULD REMAIN. (A COMMENT MARK IS
// TWO FORWARD SLASHES)


// #include <LiquidCrystal.h> // Remove comment marks '//' if not I2C interface

// USER: IF USING AN LCD DISPLAY FITTED WITH AN I2C INTERFACE, THE LINES BELOW
// SHOULD REMAIN UNCOMMENTED AND THE ONE ABOVE COMMENTED OUT OR DELETED
// OTHERWISE, ADD COMMENT MARKS OR DELETE THE TWO LINES BELOW

#include <LiquidCrystal_I2C.h> // comment out if NOT I2C
#define I2C_LCD true // comment out if NOT I2C




// **************************************************************************

// ********** BELOW: WHEN YOU INITIALLY START USING THE PROGRAM *************
// ********** YOU MAY WANT TO DETERMINE THE ACTUAL FREQUENCY OF THE *************
// ********** OF YOUR SI5351'S CRYSTAL AND ENTER BELOW TO CORRECT ***********
// ********** DISPLAY INACCURACY.                               *************

// USERS:
// Your Si5351a board may have a crystal frequency of 27 MHz or 25 MHz or
// possibly others. If your frequency output is significantly off, you may
// need to change the #define XTAL_FREQ line to suit. 
// Also you can fine tune or calibrate your device. See the user comment below.

	// #define XTAL_FREQ 27000000 // Crystal frequency for Hans' board
	// #define XTAL_FREQ 25000000 // NRK - Adafruit board is 25 MHz
	
	#define XTAL_FREQ 24999345 // my specific Si5351a board

	/*
	USERS:
	I determined my actual crystal frequency like this:
	Listening on my K3 with the Si5351a set at 7025000 Hz I read 7024816 Hz
	So my actual frequency is 25,000,000 * 7,024,816 / 7,025,000 which gives
	me 24,999,345. Of course I could have used a more accurate standard than
	the K3 if I'd chosen to.
	Please note that while in the CW mode, the output will be shifted by the
	value of CW_pitch, so you should take your reading in the “phone” mode
	or have the key closed.
	*/

// ****** ENTER INTERMEDIATE FREQUENCY FOR SUPERHET *************************
	
// ********** BELOW: YOU CAN USE THE CONTROLLER WITH A SUPERHET   ***********
// ********* RECEIVER. ENTER THE REQUIRED I.F. OFFSET BELOW AND *************
// ********* IT WILL BE ADDED TO THE DISPLAYED RECEIVE FREQUENCY ************	
	
	// *** INTERMEDIATE FREQUENCY OFFSET ***  V1.12
	// This value will be added to the receive frequency at the time the
	// registers are calculated. To NOT use an offest, simply make it equal
	// to 0. 
	
#define IF_OFFSET 0 // enter in Hertz, no commas or decimal, 0 for none