## Logger

### Requirements

1. Design type of log: log to console, file, server.

2. Specify logging for specific process.

3. Log server run as a daemon, all process send log to server and server writes to single log file.

4. Server has to detect connection via poll system call.

5. Server respone for two types of connection: localhost and local network.
