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

/**
 * @file        Mem_43_InFls_Cfg.c
 *
 * @addtogroup  MEM_43_INFLS
 * implements   Mem_43_InFls_Cfg.c_Artifact
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
#include "Mem_43_InFls_Cfg.h"
#include "C40_Ip_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define MEM_43_INFLS_VENDOR_ID_CFG_C                          43
#define MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C           4
#define MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C           7
#define MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C        0
#define MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C                   3
#define MEM_43_INFLS_SW_MINOR_VERSION_CFG_C                   0
#define MEM_43_INFLS_SW_PATCH_VERSION_CFG_C                   0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Mem_43_InFls_Cfg.h header file are of the same vendor */
#if (MEM_43_INFLS_VENDOR_ID_CFG_C != MEM_43_INFLS_VENDOR_ID_CFG)
    #error "Mem_43_InFls_Cfg.c and Mem_43_InFls_Cfg.h have different vendor ids"
#endif
/* Check if current file and Mem_43_InFls_Cfg.h header file are of the same Autosar version */
#if ((MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C    != MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C != MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Mem_43_InFls_Cfg.c and Mem_43_InFls_Cfg.h are different"
#endif
/* Check if current file and Mem_43_InFls_Cfg.h header file are of the same Software version */
#if ((MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C != MEM_43_INFLS_SW_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_MINOR_VERSION_CFG_C != MEM_43_INFLS_SW_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_PATCH_VERSION_CFG_C != MEM_43_INFLS_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Mem_43_InFls_Cfg.c and Mem_43_InFls_Cfg.h are different"
#endif

/* Check if current file and C40_Ip_Cfg.h header file are of the same vendor */
#if (MEM_43_INFLS_VENDOR_ID_CFG_C != C40_IP_VENDOR_ID_CFG)
    #error "Mem_43_InFls_Cfg.c and C40_Ip_Cfg.h have different vendor ids"
#endif
/* Check if current file and C40_Ip_Cfg.h header file are of the same Autosar version */
#if ((MEM_43_INFLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != C40_IP_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_MINOR_VERSION_CFG_C    != C40_IP_AR_RELEASE_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_AR_RELEASE_REVISION_VERSION_CFG_C != C40_IP_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Mem_43_InFls_Cfg.c and C40_Ip_Cfg.h are different"
#endif
/* Check if current file and C40_Ip_Cfg.h header file are of the same Software version */
#if ((MEM_43_INFLS_SW_MAJOR_VERSION_CFG_C != C40_IP_SW_MAJOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_MINOR_VERSION_CFG_C != C40_IP_SW_MINOR_VERSION_CFG) || \
     (MEM_43_INFLS_SW_PATCH_VERSION_CFG_C != C40_IP_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Mem_43_InFls_Cfg.c and C40_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                                 GLOBAL CONSTANT DECLARATIONS
==================================================================================================*/

#define MEM_43_INFLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mem_43_InFls_MemMap.h"


/* Mem Internal Units Configurations */
static const Mem_43_InFls_InternalUnitType Mem_43_InFls_InternalUnitsCfg[MEM_43_INFLS_INTERNAL_UNIT_COUNT] =
{
    {
        &C40_Ip_InitCfg                                    /* InternalConfig */
    }
};

/* Mem Devices Configurations */
static const Mem_43_InFls_MemDeviceType Mem_43_InFls_MemDevices =
{
    Mem_43_InFls_InternalUnitsCfg                          /* InternalUnits */
};


/* Configuration of MemSectorBatch */
const Mem_43_InFls_SectorBatchType Mem_43_InFls_MemInstance_0_SectorBatch[1U] =
{
    {
        268435456U,                                        /* StartAddress   */
        268436735U,                                        /* EndAddress     */
        1280U,                                             /* SectorSize     */
        1U,                                                /* ReadPageSize   */
        8U,                                                /* WritePageSize  */
        1280U,                                             /* EraseBurstSize */
        1U,                                                /* ReadBurstSize  */
        8U                                                 /* WriteBurstSize */
    }
};


/* Configuration of Mem instances */
static const Mem_43_InFls_MemInstanceType Mem_43_InFls_MemInstances[MEM_43_INFLS_MEM_INSTANCE_COUNT] =
{
    {
        MEM_43_INFLS_INSTANCE_0_ID,                        /* InstanceId       */
        1U,                                                /* SectorBatchCount */
        Mem_43_InFls_MemInstance_0_SectorBatch,            /* SectorBatches    */
        0U                                                 /* MemUnitIndex     */
    }
};


/* Configuration of Mem_43_InFls */
const Mem_43_InFls_ConfigType Mem_43_InFls_Config =
{
    Mem_43_InFls_MemInstances,                             /* MemInstances */
    &Mem_43_InFls_MemDevices                               /* MemDevices   */
};


#define MEM_43_INFLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mem_43_InFls_MemMap.h"


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

