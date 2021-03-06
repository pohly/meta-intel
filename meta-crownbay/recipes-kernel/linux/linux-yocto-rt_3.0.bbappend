FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

COMPATIBLE_MACHINE_crownbay-noemgd = "crownbay-noemgd"
KMACHINE_crownbay-noemgd = "crownbay"

KERNEL_FEATURES_append_crownbay-noemgd += " cfg/smp.scc"

COMPATIBLE_MACHINE_crownbay = "crownbay"
KMACHINE_crownbay = "crownbay"

KERNEL_FEATURES_append_crownbay += " cfg/smp.scc"

# Update the following to use a different BSP branch or meta SRCREV
#KBRANCH_crownbay-noemgd = "yocto/standard/preempt-rt/base"
#SRCREV_machine_pn-linux-yocto-rt_crownbay-noemgd ?= XXXX
#SRCREV_meta_pn-linux-yocto-rt_crownbay-noemgd ?= XXXX

#KBRANCH_crownbay = "yocto/standard/preempt-rt/base"
#SRCREV_machine_pn-linux-yocto-rt_crownbay ?= XXXX
#SRCREV_meta_pn-linux-yocto-rt_crownbay ?= XXXX
