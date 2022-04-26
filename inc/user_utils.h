#ifndef __USER_UTILS_H__
#define __USER_UTILS_H__
/**
 * @file user_utils.h
 * @author Aman Garg ()
 * @brief User defined utilities used across the project
 * @version 0.1
 * @date 21-04-2022
 * 
 */
#include "project_config.h"
#include <util/delay.h>

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);

#endif /* __USER_UTILS_H__ */