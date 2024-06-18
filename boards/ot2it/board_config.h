#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "ADLINK Technology Inc."
#define PRODUCT_NAME "I-PI-OT2IT"
#define VOLUME_LABEL "OT2ITBOOT"
#define INDEX_URL "https://adlinktech.com/"
#define BOARD_ID "SAME54P20A-OT2IT-v0"

#define USB_VID 0x0B63
#define USB_PID 0xD101

#define LED_PIN PIN_PC30 		// Green
#define LED_TX_PIN PIN_PC28 	// Red
#define LED_RX_PIN PIN_PB31 	// Blue

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PB25C_SERCOM0_PAD1
#define BOOT_USART_PAD0                   PINMUX_PB24C_SERCOM0_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
