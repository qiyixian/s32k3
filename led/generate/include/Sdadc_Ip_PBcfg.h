/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : ADC_SAR
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.0
*   Build Version        : S32K3_RTD_3_0_0_D2303_ASR_REL_4_7_REV_0000_20230331
*
*   Copyright 2020 - 2023 NXP Semiconductors
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef SDADC_IP_PBCFG_H
#define SDADC_IP_PBCFG_H


/**
*   @file
*
*   @addtogroup sdadc_ip_config Adc Sar IPL Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Sdadc_Ip_Types.h"
#include "DSPSS_Types.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define SDADC_IP_VENDOR_ID_PBCFG                     43
#define SDADC_IP_AR_RELEASE_MAJOR_VERSION_PBCFG      4
#define SDADC_IP_AR_RELEASE_MINOR_VERSION_PBCFG      7
#define SDADC_IP_AR_RELEASE_REVISION_VERSION_PBCFG   0
#define SDADC_IP_SW_MAJOR_VERSION_PBCFG              3
#define SDADC_IP_SW_MINOR_VERSION_PBCFG              0
#define SDADC_IP_SW_PATCH_VERSION_PBCFG              0


/*==================================================================================================
*                                    FILE VERSION CHECKS
==================================================================================================*/

/* Check if SDADC_Ip_PBcfg.h file and SDADC_Ip_Types.h file are of the same vendor */
#if (SDADC_IP_VENDOR_ID_PBCFG != SDADC_IP_VENDOR_ID_TYPES)
    #error "SDADC_Ip_PBcfg.h and SDADC_Ip_Types.h have different vendor ids"
#endif

/* Check if SDADC_Ip_PBcfg.h file and SDADC_Ip_Types.h file are of the same Autosar version */
#if ((SDADC_IP_AR_RELEASE_MAJOR_VERSION_PBCFG != SDADC_IP_AR_RELEASE_MAJOR_VERSION_TYPES) || \
     (SDADC_IP_AR_RELEASE_MINOR_VERSION_PBCFG != SDADC_IP_AR_RELEASE_MINOR_VERSION_TYPES) || \
     (SDADC_IP_AR_RELEASE_REVISION_VERSION_PBCFG != SDADC_IP_AR_RELEASE_REVISION_VERSION_TYPES) \
    )
    #error "AutoSar Version Numbers of SDADC_Ip_PBcfg.h and SDADC_Ip_Types.h are different"
#endif

/* Check if SDADC_Ip_PBcfg.h file and SDADC_Ip_Types.h file are of the same Software version */
#if ((SDADC_IP_SW_MAJOR_VERSION_PBCFG != SDADC_IP_SW_MAJOR_VERSION_TYPES) || \
     (SDADC_IP_SW_MINOR_VERSION_PBCFG != SDADC_IP_SW_MINOR_VERSION_TYPES) || \
     (SDADC_IP_SW_PATCH_VERSION_PBCFG != SDADC_IP_SW_PATCH_VERSION_TYPES) \
    )
  #error "Software Version Numbers of SDADC_Ip_PBcfg.h and SDADC_Ip_Types.h are different"
#endif

/* Check if SDADC_Ip_PBcfg.h file and DSPSS_Types.h file are of the same vendor */
#if (SDADC_IP_VENDOR_ID_PBCFG != DSPSS_VENDOR_ID_TYPES)
    #error "SDADC_Ip_PBcfg.h and DSPSS_Types.h have different vendor ids"
#endif

/* Check if SDADC_Ip_PBcfg.h file and DSPSS_Types.h file are of the same Autosar version */
#if ((SDADC_IP_AR_RELEASE_MAJOR_VERSION_PBCFG != DSPSS_AR_RELEASE_MAJOR_VERSION_TYPES) || \
     (SDADC_IP_AR_RELEASE_MINOR_VERSION_PBCFG != DSPSS_AR_RELEASE_MINOR_VERSION_TYPES) || \
     (SDADC_IP_AR_RELEASE_REVISION_VERSION_PBCFG != DSPSS_AR_RELEASE_REVISION_VERSION_TYPES) \
    )
    #error "AutoSar Version Numbers of SDADC_Ip_PBcfg.h and DSPSS_Types.h are different"
#endif

/* Check if SDADC_Ip_PBcfg.h file and DSPSS_Types.h file are of the same Software version */
#if ((SDADC_IP_SW_MAJOR_VERSION_PBCFG != DSPSS_SW_MAJOR_VERSION_TYPES) || \
     (SDADC_IP_SW_MINOR_VERSION_PBCFG != DSPSS_SW_MINOR_VERSION_TYPES) || \
     (SDADC_IP_SW_PATCH_VERSION_PBCFG != DSPSS_SW_PATCH_VERSION_TYPES) \
    )
  #error "Software Version Numbers of SDADC_Ip_PBcfg.h and DSPSS_Types.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"


#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"


#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"



#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"


#ifdef __cplusplus
}
#endif


/** @} */

#endif /* SDADC_IP_PBCFG_H */
