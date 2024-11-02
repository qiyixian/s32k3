/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : C40
*   Dependencies         : None
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

#ifndef MEM_43_INFLS_CFG_DEFINES_H
#define MEM_43_INFLS_CFG_DEFINES_H

/**
 * @file        Mem_43_InFls_CfgDefines.h
 *
 * @addtogroup  MEM_43_INFLS Driver
 * implements   Mem_43_InFls_CfgDefines.h_Artifact
 *
 * @{
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


/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEM_43_INFLS_VENDOR_ID_CFG_DEFINES                           43
#define MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_DEFINES            4
#define MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_DEFINES            7
#define MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_DEFINES         0
#define MEM_43_INFLS_SW_MAJOR_VERSION_CFG_DEFINES                    3
#define MEM_43_INFLS_SW_MINOR_VERSION_CFG_DEFINES                    0
#define MEM_43_INFLS_SW_PATCH_VERSION_CFG_DEFINES                    0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/* Number of configured Mem instances */
#define MEM_43_INFLS_MEM_INSTANCE_COUNT                       (1U)

/* Number of configured Mem Internal Units */
#define MEM_43_INFLS_INTERNAL_UNIT_COUNT                      (1U)

/* Pre-processor switch to enable and disable development error detection */
#define MEM_43_INFLS_DEV_ERROR_DETECT                         (STD_OFF)

/* Mem Domain ID Value */
#define MEM_43_INFLS_DOMAIN_ID                                (0U)


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* MEM_43_INFLS_CFG_DEFINES_H */

