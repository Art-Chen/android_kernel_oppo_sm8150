# SPDX-License-Identifier: GPL-2.0-only
# Copyright (C) 2018-2020 Oplus. All rights reserved.
#
# Makefile for the OPLUS Linux Kernel system team specific device drivers.
#

obj-y 	+= platform.o
obj-$(CONFIG_OPLUS_FEATURE_SHUTDOWN_DETECT)    += shutdown_detect/
obj-$(CONFIG_OPLUS_FEATURE_OPROJECT) 	+= oplus_project/
obj-$(CONFIG_OPLUS_FEATURE_RECORD_MDMRST)     += mdmrst/

ifdef CONFIG_OPLUS_SYSTEM_KERNEL_QCOM
obj-$(CONFIG_OPLUS_FEATURE_PROJECTINFO)	+=  project_info/
endif

#ifdef OPLUS_FEATURE_ESIM
#ChenGuoyao@NETWORK.SIM,2020/06/10, Add for eSIM
obj-$(CONFIG_OPLUS_OPPO_GPIO)    +=  oppo_gpio/
#endif /* OPLUS_FEATURE_ESIM */

obj-$(CONFIG_OPLUS_FEATURE_QCOM_PMICWD)     += qcom_pmicwd/
