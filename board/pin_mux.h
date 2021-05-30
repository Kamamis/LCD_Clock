/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Enables digital function */
#define IOCON_PIO_DIGITAL_EN 0x0100u
/*!
 * @brief Selects pin function 1 */
#define IOCON_PIO_FUNC1 0x01u
/*!
 * @brief Input function is not inverted */
#define IOCON_PIO_INV_DI 0x00u
/*!
 * @brief No addition pin function */
#define IOCON_PIO_MODE_INACT 0x00u
/*!
 * @brief Open drain is disabled */
#define IOCON_PIO_OPENDRAIN_DI 0x00u
/*!
 * @brief Standard mode, output slew rate control is enabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_13_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Pull-up current source enable in I2C mode.: Enabled. Pull resistor is conencted. */
#define PIO0_13_ECS_ENABLED 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_13_FUNC_ALT0 0x00u
/*!
 * @brief Selects function mode (on-chip pull-up/pull-down resistor control).: Pull-up. Pull-up resistor enabled. */
#define PIO0_13_MODE_PULL_UP 0x02u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_14_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Pull-up current source enable in I2C mode.: Enabled. Pull resistor is conencted. */
#define PIO0_14_ECS_ENABLED 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_14_FUNC_ALT0 0x00u
/*!
 * @brief Selects function mode (on-chip pull-up/pull-down resistor control).: Pull-up. Pull-up resistor enabled. */
#define PIO0_14_MODE_PULL_UP 0x02u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_2_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_2_FUNC_ALT0 0x00u
/*!
 * @brief
 * Selects function mode (on-chip pull-up/pull-down resistor control).
 * : Pull-down.
 * Pull-down resistor enabled.
 */
#define PIO0_2_MODE_PULL_DOWN 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_3_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_3_FUNC_ALT1 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_4_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_6_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_6_FUNC_ALT1 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_22_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_22_FUNC_ALT0 0x00u
/*!
 * @brief Selects function mode (on-chip pull-up/pull-down resistor control).: Pull-up. Pull-up resistor enabled. */
#define PIO1_22_MODE_PULL_UP 0x02u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_28_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_28_FUNC_ALT0 0x00u

/*! @name PIO0_2 (number 81), LCD_DC
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_LCD_DC_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_LCD_DC_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_LCD_DC_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_LCD_DC_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_LCD_DC_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO1_28 (number 73), LCD_RST
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_LCD_RST_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_LCD_RST_GPIO_PIN_MASK (1U << 28U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_LCD_RST_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_LCD_RST_PIN 28U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_LCD_RST_PIN_MASK (1U << 28U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PIO1_22 (number 41), ENC_A
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_ENC_A_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_ENC_A_GPIO_PIN_MASK (1U << 22U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_ENC_A_PORT 1U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_ENC_A_PIN 22U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_ENC_A_PIN_MASK (1U << 22U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_14 (number 72), ENC_B
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_ENC_B_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_ENC_B_GPIO_PIN_MASK (1U << 14U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_ENC_B_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_ENC_B_PIN 14U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_ENC_B_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_13 (number 71), ENC_S
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_ENC_S_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_ENC_S_GPIO_PIN_MASK (1U << 13U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_ENC_S_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_ENC_S_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_ENC_S_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
