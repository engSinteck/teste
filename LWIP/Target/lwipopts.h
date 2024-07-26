/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : Target/lwipopts.h
  * Description        : This file overrides LwIP stack default configuration
  *                      done in opt.h file.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion --------------------------------------*/
#ifndef __LWIPOPTS__H__
#define __LWIPOPTS__H__

#include "main.h"

/*-----------------------------------------------------------------------------*/
/* Current version of LwIP supported by CubeMx: 2.1.2 -*/
/*-----------------------------------------------------------------------------*/

/* Within 'USER CODE' section, code will be kept by default at each generation */
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

#ifdef __cplusplus
 extern "C" {
#endif

/* STM32CubeMX Specific Parameters (not defined in opt.h) ---------------------*/
/* Parameters set in STM32CubeMX LwIP Configuration GUI -*/
/*----- WITH_RTOS enabled (Since FREERTOS is set) -----*/
#define WITH_RTOS 1
/* Temporary workaround to avoid conflict on errno defined in STM32CubeIDE and lwip sys_arch.c errno */
#undef LWIP_PROVIDE_ERRNO
/*----- CHECKSUM_BY_HARDWARE enabled -----*/
#define CHECKSUM_BY_HARDWARE 1
/*-----------------------------------------------------------------------------*/

/* LwIP Stack Parameters (modified compared to initialization value in opt.h) -*/
/* Parameters set in STM32CubeMX LwIP Configuration GUI -*/
/*----- Default Value for LWIP_DNS: 0 ---*/
#define LWIP_DNS 1
/*----- Default Value for MEMP_NUM_TCP_PCB: 5 ---*/
#define MEMP_NUM_TCP_PCB 10
/*----- Value in opt.h for MEM_ALIGNMENT: 1 -----*/
#define MEM_ALIGNMENT 4
/*----- Default Value for MEM_SIZE: 1600 ---*/
#define MEM_SIZE 10*1024
 /*----- Default Value for H7 devices: 0x30044000 -----*/
 #define LWIP_RAM_HEAP_POINTER 0x2007C200
/*----- Default Value for MEMP_NUM_TCP_PCB_LISTEN: 8 ---*/
#define MEMP_NUM_TCP_PCB_LISTEN 10
/*----- Default Value for MEMP_NUM_TCP_SEG: 16 ---*/
#define MEMP_NUM_TCP_SEG 32
/*----- Default Value for ETHARP_SUPPORT_VLAN: 0 ---*/
#define ETHARP_SUPPORT_VLAN 1
/*----- Value in opt.h for LWIP_ETHERNET: LWIP_ARP || PPPOE_SUPPORT -*/
#define LWIP_ETHERNET 1
/*----- Default Value for LWIP_BROADCAST_PING: 0 ---*/
#define LWIP_BROADCAST_PING 1
/*----- Default Value for LWIP_MULTICAST_PING: 0 ---*/
#define LWIP_MULTICAST_PING 1
/*----- Value in opt.h for LWIP_DNS_SECURE: (LWIP_DNS_SECURE_RAND_XID | LWIP_DNS_SECURE_NO_MULTIPLE_OUTSTANDING | LWIP_DNS_SECURE_RAND_SRC_PORT) -*/
#define LWIP_DNS_SECURE 7
/*----- Default Value for TCP_MSS: 536 ---*/
#define TCP_MSS 1460
/*----- Default Value for TCP_CALCULATE_EFF_SEND_MSS: 1 ---*/
#define TCP_CALCULATE_EFF_SEND_MSS 0
/*----- Default Value for TCP_SND_BUF: 2920 ---*/
#define TCP_SND_BUF 5840
/*----- Default Value for TCP_SND_QUEUELEN: 17 ---*/
#define TCP_SND_QUEUELEN 16
/*----- Default Value for TCP_DEFAULT_LISTEN_BACKLOG: 255 ---*/
#define TCP_DEFAULT_LISTEN_BACKLOG 4
/*----- Default Value for LWIP_ALTCP: 0 ---*/
#define LWIP_ALTCP 1
/*----- Default Value for LWIP_ALTCP_TLS: 0 ---*/
#define LWIP_ALTCP_TLS 1
/*----- Value in opt.h for LWIP_NETIF_LINK_CALLBACK: 0 -----*/
#define LWIP_NETIF_LINK_CALLBACK 1
/*----- Value in opt.h for TCPIP_THREAD_STACKSIZE: 0 -----*/
#define TCPIP_THREAD_STACKSIZE 3072
/*----- Value in opt.h for TCPIP_THREAD_PRIO: 1 -----*/
#define TCPIP_THREAD_PRIO 40
/*----- Value in opt.h for TCPIP_MBOX_SIZE: 0 -----*/
#define TCPIP_MBOX_SIZE 6
/*----- Value in opt.h for SLIPIF_THREAD_STACKSIZE: 0 -----*/
#define SLIPIF_THREAD_STACKSIZE 3072
/*----- Value in opt.h for SLIPIF_THREAD_PRIO: 1 -----*/
#define SLIPIF_THREAD_PRIO 3
/*----- Value in opt.h for DEFAULT_THREAD_STACKSIZE: 0 -----*/
#define DEFAULT_THREAD_STACKSIZE 1024
/*----- Value in opt.h for DEFAULT_THREAD_PRIO: 1 -----*/
#define DEFAULT_THREAD_PRIO 3
/*----- Value in opt.h for DEFAULT_UDP_RECVMBOX_SIZE: 0 -----*/
#define DEFAULT_UDP_RECVMBOX_SIZE 6
/*----- Value in opt.h for DEFAULT_TCP_RECVMBOX_SIZE: 0 -----*/
#define DEFAULT_TCP_RECVMBOX_SIZE 6
/*----- Value in opt.h for DEFAULT_ACCEPTMBOX_SIZE: 0 -----*/
#define DEFAULT_ACCEPTMBOX_SIZE 6
/*----- Value in opt.h for RECV_BUFSIZE_DEFAULT: INT_MAX -----*/
#define RECV_BUFSIZE_DEFAULT 2000000000
/*----- Default Value for LWIP_HTTPD: 0 ---*/
#define LWIP_HTTPD 1
/*----- Default Value for LWIP_HTTPD_CGI: 0 ---*/
#define LWIP_HTTPD_CGI 1
/*----- Default Value for LWIP_HTTPD_SSI: 0 ---*/
#define LWIP_HTTPD_SSI 1
/*----- Default Value for LWIP_HTTPD_SUPPORT_POST: 0 ---*/
#define LWIP_HTTPD_SUPPORT_POST 1
/*----- Default Value for LWIP_HTTPD_MAX_TAG_NAME_LEN: 8 ---*/
#define LWIP_HTTPD_MAX_TAG_NAME_LEN 16
/*----- Default Value for LWIP_HTTPD_DYNAMIC_HEADERS: 0 ---*/
#define LWIP_HTTPD_DYNAMIC_HEADERS 1
/*----- Default Value for LWIP_HTTPD_REQ_BUFSIZE: 1023 ---*/
#define LWIP_HTTPD_REQ_BUFSIZE 2048
/*----- Default Value for LWIP_HTTPD_MAX_REQ_LENGTH: 1023 ---*/
#define LWIP_HTTPD_MAX_REQ_LENGTH 2048
/*----- Default Value for LWIP_HTTPD_FS_ASYNC_READ: 0 ---*/
#define LWIP_HTTPD_FS_ASYNC_READ 1
/*----- Value in opt.h for HTTPD_USE_CUSTOM_FSDATA: 0 -----*/
#define HTTPD_USE_CUSTOM_FSDATA 1
/*----- Value in opt.h for LWIP_STATS: 1 -----*/
#define LWIP_STATS 0
/*----- Value in opt.h for CHECKSUM_GEN_IP: 1 -----*/
#define CHECKSUM_GEN_IP 0
/*----- Value in opt.h for CHECKSUM_GEN_UDP: 1 -----*/
#define CHECKSUM_GEN_UDP 0
/*----- Value in opt.h for CHECKSUM_GEN_TCP: 1 -----*/
#define CHECKSUM_GEN_TCP 0
/*----- Value in opt.h for CHECKSUM_GEN_ICMP: 1 -----*/
#define CHECKSUM_GEN_ICMP 0
/*----- Value in opt.h for CHECKSUM_GEN_ICMP6: 1 -----*/
#define CHECKSUM_GEN_ICMP6 0
/*----- Value in opt.h for CHECKSUM_CHECK_IP: 1 -----*/
#define CHECKSUM_CHECK_IP 0
/*----- Value in opt.h for CHECKSUM_CHECK_UDP: 1 -----*/
#define CHECKSUM_CHECK_UDP 0
/*----- Value in opt.h for CHECKSUM_CHECK_TCP: 1 -----*/
#define CHECKSUM_CHECK_TCP 0
/*----- Value in opt.h for CHECKSUM_CHECK_ICMP: 1 -----*/
#define CHECKSUM_CHECK_ICMP 0
/*----- Value in opt.h for CHECKSUM_CHECK_ICMP6: 1 -----*/

// #define CHECKSUM_CHECK_ICMP6 0
/*----- Default Value for ETHARP_DEBUG: LWIP_DBG_OFF ---*/
//#define ETHARP_DEBUG LWIP_DBG_ON
/*----- Default Value for NETIF_DEBUG: LWIP_DBG_OFF ---*/
//#define NETIF_DEBUG LWIP_DBG_ON
/*----- Default Value for PBUF_DEBUG: LWIP_DBG_OFF ---*/
//#define PBUF_DEBUG LWIP_DBG_ON
/*----- Default Value for API_LIB_DEBUG: LWIP_DBG_OFF ---*/
//#define API_LIB_DEBUG LWIP_DBG_ON
/*----- Default Value for API_MSG_DEBUG: LWIP_DBG_OFF ---*/
//#define API_MSG_DEBUG LWIP_DBG_ON
/*----- Default Value for SOCKETS_DEBUG: LWIP_DBG_OFF ---*/
//#define SOCKETS_DEBUG LWIP_DBG_ON
/*----- Default Value for ICMP_DEBUG: LWIP_DBG_OFF ---*/
//#define ICMP_DEBUG LWIP_DBG_ON
/*----- Default Value for IGMP_DEBUG: LWIP_DBG_OFF ---*/
//#define IGMP_DEBUG LWIP_DBG_ON
/*----- Default Value for INET_DEBUG: LWIP_DBG_OFF ---*/
//#define INET_DEBUG LWIP_DBG_ON
/*----- Default Value for IP_DEBUG: LWIP_DBG_OFF ---*/
//#define IP_DEBUG LWIP_DBG_ON
/*----- Default Value for IP_REASS_DEBUG: LWIP_DBG_OFF ---*/
//#define IP_REASS_DEBUG LWIP_DBG_ON
/*----- Default Value for RAW_DEBUG: LWIP_DBG_OFF ---*/
//#define RAW_DEBUG LWIP_DBG_ON
/*----- Default Value for MEM_DEBUG: LWIP_DBG_OFF ---*/
//#define MEM_DEBUG LWIP_DBG_ON
/*----- Default Value for MEMP_DEBUG: LWIP_DBG_OFF ---*/
//#define MEMP_DEBUG LWIP_DBG_ON
/*----- Default Value for SYS_DEBUG: LWIP_DBG_OFF ---*/
//#define SYS_DEBUG LWIP_DBG_ON
/*----- Default Value for TIMERS_DEBUG: LWIP_DBG_OFF ---*/
//#define TIMERS_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_INPUT_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_INPUT_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_FR_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_FR_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_RTO_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_RTO_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_CWND_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_CWND_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_WND_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_WND_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_OUTPUT_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_OUTPUT_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_RST_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_RST_DEBUG LWIP_DBG_ON
/*----- Default Value for TCP_QLEN_DEBUG: LWIP_DBG_OFF ---*/
//#define TCP_QLEN_DEBUG LWIP_DBG_ON
/*----- Default Value for UDP_DEBUG: LWIP_DBG_OFF ---*/
//#define UDP_DEBUG LWIP_DBG_ON
/*----- Default Value for TCPIP_DEBUG: LWIP_DBG_OFF ---*/
//#define TCPIP_DEBUG LWIP_DBG_ON
/*----- Default Value for SLIP_DEBUG: LWIP_DBG_OFF ---*/
//#define SLIP_DEBUG LWIP_DBG_ON
/*----- Default Value for DHCP_DEBUG: LWIP_DBG_OFF ---*/
//#define DHCP_DEBUG LWIP_DBG_ON
/*----- Default Value for AUTOIP_DEBUG: LWIP_DBG_OFF ---*/
//#define AUTOIP_DEBUG LWIP_DBG_ON
/*----- Default Value for DNS_DEBUG: LWIP_DBG_OFF ---*/
//#define DNS_DEBUG LWIP_DBG_ON
/*----- Default Value for PPP_DEBUG: LWIP_DBG_OFF ---*/
//#define PPP_DEBUG LWIP_DBG_ON
/*----- Default Value for IP6_DEBUG: LWIP_DBG_OFF ---*/
//#define IP6_DEBUG LWIP_DBG_ON
/*----- Default Value for DHCP6_DEBUG: LWIP_DBG_OFF ---*/
//#define DHCP6_DEBUG LWIP_DBG_ON
/*----- Default Value for HTTPD_DEBUG: LWIP_DBG_OFF ---*/
//#define HTTPD_DEBUG LWIP_DBG_ON
/*----- Default Value for HTTPD_DEBUG_TIMING: LWIP_DBG_OFF ---*/
//#define HTTPD_DEBUG_TIMING LWIP_DBG_ON
/*----- Default Value for SNMP_DEBUG: LWIP_DBG_OFF ---*/
//#define SNMP_DEBUG LWIP_DBG_ON
/*----- Default Value for SNMP_MIB_DEBUG: LWIP_DBG_OFF ---*/
//#define SNMP_MIB_DEBUG LWIP_DBG_ON
/*----- Default Value for SNTP_DEBUG: LWIP_DBG_OFF ---*/
//#define SNTP_DEBUG LWIP_DBG_ON
/*----- Default Value for SMTP_DEBUG: LWIP_DBG_OFF ---*/
//#define SMTP_DEBUG LWIP_DBG_ON
/*----- Default Value for MDNS_DEBUG: LWIP_DBG_OFF ---*/
//#define MDNS_DEBUG LWIP_DBG_ON
/*----- Default Value for TFTP_DEBUG: LWIP_DBG_OFF ---*/
//#define TFTP_DEBUG LWIP_DBG_ON
/*----- Default Value for LWIP_TESTMODE: 0 ---*/
//#define LWIP_TESTMODE 1
/*-----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */
//#define LWIP_DEBUG 1
/* USER CODE END 1 */

#ifdef __cplusplus
}
#endif
#endif /*__LWIPOPTS__H__ */
