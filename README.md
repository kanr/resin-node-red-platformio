# resin-node-red

A Node-RED application with [resin-supervisor](https://docs.resin.io/runtime/supervisor-api/) flow [support](https://github.com/resin-io-projects/node-red-contrib-resinio), can be managed remotely via resin.io [publicURL](https://docs.resin.io/management/devices/#enable-public-device-url)

## Configure via [environment variables](https://docs.resin.io/management/env-vars/)
Variable Name | Default | Description
------------ | ------------- | -------------
PORT | `80` | the port that exposes the Node-RED UI
USERNAME | `none` | the Node-RED admin username
PASSWORD | `none` | the Node-RED admin password [hash](https://nodered.org/docs/security#generating-the-password-hash)

You **must** set the `USERNAME` and `PASSWORD` environment variables to be able to save or run programs in Node-RED.  
The hash for the `PASSWORD` variable can be generated using the [`node-red-admin`](https://nodered.org/docs/node-red-admin)
command line tool. Instructions for generating a password hash can be found in
the [Node-RED documentation](https://nodered.org/docs/security#generating-the-password-hash).  
More information about using and setting environment variables can be found in
the [resin.io docs](https://docs.resin.io/management/env-vars/).

## License

Copyright 2016 Resinio Ltd.

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<http://www.apache.org/licenses/LICENSE-2.0>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
