# Server-Pure-Bypass
This repository has a Server Pure Bypass with MinHook for Counter-Strike: Global Offensive game. It's fully open source and loadable into the game as a [Dynamic-link library (DLL)](https://en.wikipedia.org/wiki/Dynamic-link_library)

![](https://img.shields.io/badge/language-c++-e76089?style=plastic) ![](https://img.shields.io/badge/game-csgo-yellow?style=plastic) ![](https://img.shields.io/badge/license-GNU-green?style=plastic) ![](https://img.shields.io/badge/arch-x86-d9654f?style=plastic)

## What is Server Pure?
Pure server is one that forces all clients on the server to use content that matches what is on the server.

![](https://github.com/Kruziikrel1/Server-Pure-Bypass/blob/main/thumbnail.png)

## How to setup MinHook files?
* First go MinHook submodule folder then download MinHook files on project page or clone project repository from GitBash or Github Desktop.

* If you download project files with manual method you need extract zip file.

* Move "include" folder to "src" folder.

* Then change folder name "src" to "MinHook"

* Finally move MinHook folder to Server Pure Bypass Project

## How to build Server Pure Bypass Project files?
* First of all you should download project files on project page or clone this repository from GitBash or GitHub Desktop on your PC. [Server-Pure-Bypass.zip](https://github.com/Kruziikrel1/Server-Pure-Bypass/releases)

* If you download project files with manual method you need extract zip file.

* Run .sln file on Visual Studio (2019+).

* Change build configuration to Debug or Release | x86 and press Build button or press <kbd>CTRL+B</kbd> on your keyboard.

* Check out bin folder include that.

## How to load into the game?
* First download any [Dynamic-link library (DLL)](https://en.wikipedia.org/wiki/Dynamic-link_library) injector or use my [Open Source Injector](https://github.com/Kruziikrel1/Kruzinjector) and open.

* Then select builded [Dynamic-link library (DLL)](https://en.wikipedia.org/wiki/Dynamic-link_library) file and Inject to csgo.exe

* That's all, enjoy it :)
