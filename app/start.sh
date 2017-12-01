#!/bin/bash

export DBUS_SYSTEM_BUS_ADDRESS=unix:path=/host/run/dbus/system_bus_socket

# Make the default flows available in the user library
mkdir -p /data/node-red/user/lib/flows || true
cp /usr/src/app/flows/* /data/node-red/user/lib/flows/

# Install PlatformIO
python -c "$(curl -fsSL https://raw.githubusercontent.com/platformio/platformio/develop/scripts/get-platformio.py)"

# change directory to folder where is located downloaded "get-platformio.py"
cd /path/to/dir/where/is/located/get-platformio.py/script

# run it
python get-platformio.py

# Start app
node-red --settings /usr/src/app/settings.js
