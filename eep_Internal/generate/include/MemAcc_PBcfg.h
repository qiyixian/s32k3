/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : none
*   Dependencies         : MemAcc
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.0
*   Build Version        : S32K3_RTD_3_0_0_D2303_ASR_REL_4_7_REV_0000_20230331
*
*   (c) Copyright 2020 - 2023 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef MEMACC_PBCFG_H
#define MEMACC_PBCFG_H

/**
*   @file MemAcc_PBcfg.h
*
*   @addtogroup MEMACC
*   @{
*/

/* implements MemAcc_PBcfg.h_Artifact */

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "MemAcc_Types.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEMACC__PBCFG_VENDOR_ID_CFG                      43
#define MEMACC__PBCFG_AR_RELEASE_MAJOR_VERSION_CFG       4
#define MEMACC__PBCFG_AR_RELEASE_MINOR_VERSION_CFG       7
#define MEMACC__PBCFG_AR_RELEASE_REVISION_VERSION_CFG    0
#define MEMACC__PBCFG_SW_MAJOR_VERSION_CFG               3
#define MEMACC__PBCFG_SW_MINOR_VERSION_CFG               0
#define MEMACC__PBCFG_SW_PATCH_VERSION_CFG               0


/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/* MemAcc address areas unique id */
#define MEMACC_ADDRESS_AREA_0_ID        (0U)
#define MEMACC_ADDRESS_AREA_1_ID        (1U)

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
                                 GLOBAL CONSTANT DECLARATIONS
==================================================================================================*/

#define MEMACC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

/* Configuration of MemAcc */
extern const MemAcc_ConfigType MemAcc_Config;

#define MEMACC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemAcc_MemMap.h"

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* MEMACC_PBCFG_H */

