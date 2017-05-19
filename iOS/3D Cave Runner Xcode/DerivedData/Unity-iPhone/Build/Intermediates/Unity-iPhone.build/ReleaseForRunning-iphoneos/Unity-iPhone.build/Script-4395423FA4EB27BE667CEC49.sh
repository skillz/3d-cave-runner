#!/bin/sh
if [ -e "${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/Skillz.framework/postprocess.sh" ]; then
    /bin/sh "${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/Skillz.framework/postprocess.sh"
fi
