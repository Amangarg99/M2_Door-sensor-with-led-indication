#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file project_config.h
 * @author Aman Garg
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 21-4-2022
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define switch_PORT (PORTB)    /**< Switch Port Number */
#define switch_PIN  (PORTB1)   /**< Switch Pin number  */

#endif /* __PROJECT_CONFIG_H__ */