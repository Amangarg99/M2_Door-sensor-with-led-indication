#ifndef __SENSOR_H_
#define __SENSOR_H_
/**
 * @file sensor.h
 * @author Aman Garg()
 * @brief Project to operate door sensor with an LED connected to AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 21-4-2022
 * 
 */

/**
 * Macro Definitions
 */
#define SWITCH_ON 	(0x01)			/**< Switch state HIGH */
#define SWITCH_OFF	(0x00)			/**< Switch state LOW */

#define SWITCH_ON_TIME     (1000)  /**< Switch ON time in milli seconds  */
#define SWITCH_OFF_TIME    (500)   /**< Switch OFF time in milli seconds */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_switch_state(uint8_t state);


#endif /** __SENSOR_H_ */