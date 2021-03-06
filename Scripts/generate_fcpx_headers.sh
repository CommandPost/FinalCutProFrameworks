#!/bin/bash

#
# EXAMPLE USAGE:
# ./generate_fcpx_headers.sh "/Applications/Final Cut Pro.app" "/Users/Username/Desktop/Final Cut Pro"
#

# ---------------------------------------------------------
# VALIDATE SCRIPT ARGUMENTS:
# ---------------------------------------------------------
if [ "$1" == "" ] || [ "$2" == "" ]; then
    echo "Usage: $0 FCPX_PATH OUTPUT_PATH"
    exit 1
fi

# ---------------------------------------------------------
# ABORT IF ANYTHING FAILS:
# ---------------------------------------------------------
#set -eu
#set -o pipefail

# ---------------------------------------------------------
# DEFINE PATHS:
# ---------------------------------------------------------
SCRIPT_PATH="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )"
FCPX_PATH="$1"
OUTPUT_PATH="$2"
ROOT_FOLDER_NAME="Headers"

# ---------------------------------------------------------
# CREATE OUTPUT FOLDER:
# ---------------------------------------------------------
cd "$OUTPUT_PATH"
mkdir "$ROOT_FOLDER_NAME"

# ---------------------------------------------------------
# CREATE OUTPUT FOLDER STRUCTURE:
# ---------------------------------------------------------
cd "$ROOT_FOLDER_NAME"
mkdir "Final Cut Pro"
mkdir "Frameworks"

cd "Frameworks"
mkdir "Bloodhound"
mkdir "Flexo"
mkdir "FxPlug"
mkdir "Helium"
mkdir "Lithium"
mkdir "LunaKit"
mkdir "MIO"
mkdir "MXFExportSDK"
mkdir "Ozone"
mkdir "PluginManager"
mkdir "ProAppsFxSupport"
mkdir "ProChannel"
mkdir "ProCore"
mkdir "ProCurveEditor"
mkdir "ProGL"
mkdir "ProGraphics"
mkdir "ProInspector"
mkdir "ProMedia"
mkdir "ProOSC"
mkdir "ProShapes"
mkdir "RetimingMath"
mkdir "Stalgo"
mkdir "StudioSharedResources"
mkdir "TextFramework"
mkdir "TLKEventDispatcher"
mkdir "TLKit"

# ---------------------------------------------------------
# CLASS-DUMP TIME:
# ---------------------------------------------------------
cd "$SCRIPT_PATH"
./class-dump "$1/Contents/MacOS/Final Cut Pro" -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Final Cut Pro"

./class-dump "$1/Contents/Frameworks/Bloodhound.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/Bloodhound"
./class-dump "$1/Contents/Frameworks/Flexo.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/Flexo"
./class-dump "$1/Contents/Frameworks/FxPlug.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/FxPlug"
./class-dump "$1/Contents/Frameworks/Helium.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/Helium"
./class-dump "$1/Contents/Frameworks/Lithium.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/Lithium"
./class-dump "$1/Contents/Frameworks/LunaKit.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/LunaKit"
./class-dump "$1/Contents/Frameworks/MIO.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/MIO"
./class-dump "$1/Contents/Frameworks/MXFExportSDK.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/MXFExportSDK"
./class-dump "$1/Contents/Frameworks/Ozone.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/Ozone"
./class-dump "$1/Contents/Frameworks/PluginManager.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/PluginManager"
./class-dump "$1/Contents/Frameworks/ProAppsFxSupport.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProAppsFxSupport"
./class-dump "$1/Contents/Frameworks/ProChannel.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProChannel"
./class-dump "$1/Contents/Frameworks/ProCore.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProCore"
./class-dump "$1/Contents/Frameworks/ProCurveEditor.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProCurveEditor"
./class-dump "$1/Contents/Frameworks/ProGL.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProGL"
./class-dump "$1/Contents/Frameworks/ProGraphics.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProGraphics"
./class-dump "$1/Contents/Frameworks/ProInspector.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProInspector"
./class-dump "$1/Contents/Frameworks/ProMedia.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProMedia"
./class-dump "$1/Contents/Frameworks/ProOSC.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProOSC"
./class-dump "$1/Contents/Frameworks/ProShapes.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/ProShapes"
./class-dump "$1/Contents/Frameworks/RetimingMath.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/RetimingMath"
./class-dump "$1/Contents/Frameworks/Stalgo.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/Stalgo"
./class-dump "$1/Contents/Frameworks/StudioSharedResources.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/StudioSharedResources"
./class-dump "$1/Contents/Frameworks/TextFramework.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/TextFramework"
./class-dump "$1/Contents/Frameworks/TLKEventDispatcher.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/TLKEventDispatcher"
./class-dump "$1/Contents/Frameworks/TLKit.framework" --arch x86_64 -s -H -o "$OUTPUT_PATH/$ROOT_FOLDER_NAME/Frameworks/TLKit"