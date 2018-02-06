#
# Quartus is OK on any machine
# BUT CONNECT TO ocaepc42 TO WORK WITH DS-5 Altera Edition!
#

if [ -n "${LM_LICENSE_FILE}" ] ; then
    export LM_LICENSE_FILE="${LM_LICENSE_FILE}:1810@cimekey1"
else
    export LM_LICENSE_FILE="1810@cimekey1"
fi

## Set necessary environment variables for DS-5
if [ -n "${ARM_PRODUCT_PATH}" ] ; then
    export ARM_PRODUCT_PATH="/softslin/altera17_0/embedded/ds-5/sw/mapping"
else
    export ARM_PRODUCT_PATH="/softslin/altera17_0/embedded/ds-5/sw/mapping"
fi

if [ -n "${ARM_TOOL_VARIANT}" ] ; then
    export ARM_TOOL_VARIANT="altera"
else
    export ARM_TOOL_VARIANT="altera"
fi


##QUARTUS_ROOTDIR=/softslin/altera14_0/quartus
QUARTUS_ROOTDIR=/softslin/altera17_0/quartus
export QUARTUS_ROOTDIR

PATH="/softslin/altera17_0/quartus/bin:"${PATH}
export PATH


alias DS5='/softslin/altera17_0/embedded/ds-5/bin/eclipse'
alias bsp_editor='/softslin/altera17_0/embedded/host_tools/altera/preloadergen/bsp-editor'
alias ll='ls -l'
alias la='ls -A'
alias l='ls -aCF'

# after sourcing this file :
# type 'quartus&' to start Quartus Prime
# type 'DS5&' to start DS-5 Altera Ed
# type 'bsp_editor&' to start Altera preloader generator
