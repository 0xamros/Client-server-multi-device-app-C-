Server-Client Application README
================================

Description
-----------

This repository contains a Server-Client application implemented in C++ using the Embarcadero C++ Builder. The application allows clients to connect to a server over a local network. Clients can enter the server's IP address, connect to the server, provide their name, and then choose one of three options (A, B, or C) to send data to the server. The server displays received data, including the date, time, client name, and the selected option, in a textbox list.

The application is designed for the Windows platform and supports multiple client platforms, such as Windows and Android, as long as they are connected to the same local network.

Features
--------

*   Connect to the server using the server's IP address.
*   Enter your name to identify yourself.
*   Choose between options A, B, and C to send data to the server.
*   The server displays received data in a textbox list, including date, time, client name, and the selected option.

Prerequisites
-------------

*   Embarcadero C++ Builder installed on your system.
*   All devices (server and clients) should be connected to the same local network.

How to Use
----------

1.  Clone this repository to your local machine.

bash

```bash
git clone https://github.com/0xamros/Client-server-multi-device-app-C-.git
```

2.  Open the project in Embarcadero C++ Builder.
    
3.  Build and run the server application on the intended platform (Windows).
    
4.  Build and run the client application on the desired platforms (Windows and Android). For Android, you may need to set up the necessary development environment.
    
5.  On the client application, enter the server's IP address and click the "Connect" button.
    
6.  Enter your name in the provided field.
    
7.  Choose one of the options (A, B, or C) by clicking the respective button.
    
8.  The selected data, including the current date, time, your name, and the chosen option, will be sent to the server and displayed in the server's textbox list.
    

Screenshots
-----------

![Server](https://github.com/0xamros/Client-server-multi-device-app-C-/blob/main/IMG/server.png)

_Figure 1: Server application displaying received data._


![Windows Client](https://raw.githubusercontent.com/0xamros/Client-server-multi-device-app-C-/main/IMG/client-win32.png)

_Figure 2: Windows client application._


![Android Client](https://github.com/0xamros/Client-server-multi-device-app-C-/blob/main/IMG/test.png)

_Figure 3: Android client with server applications._


Future Enhancements
-------------------

*   Implement secure communication between the server and clients.
*   Add support for more customizable options and data types.
*   Enhance the user interface and overall user experience.
*   Provide pre-built binaries for easy installation.

License
-------

This project is licensed under the [MIT License](LICENSE).

---

Feel free to fork and contribute to this project. If you encounter any issues or have suggestions for improvements, please create an issue or submit a pull request. Your contributions are highly appreciated!
