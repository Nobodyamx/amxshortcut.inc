# amxshortcut.inc

A basic plugin that will make your life much easier, enjoy.

# Functions

```
GetName(id)
```
Get user's name.
```
GetSteamAuthId(Id)
```
Get user's authid.

# How to install

Drop amxshortcut.inc into your includes folder (\cstrike\addons\amxmodx\scripting\include).__
Include it in your plugin by typing this "#include <amxshortcut>" just under "#include <amxmodx>"__
You can now use it :)__
  
# How to use

Usage for "GetName(id)":__
Example you want to get player's name, you'll probably do something like this:__
```
new name[128]
get_user_name(id, name, sizeof(name))
client_print_color(id, id, "Hello world, %s!", name);
```
But with this plugin you can just do this:__
```
client_print_color(id, id, "Hello world, %s", GetName(id));
```
It is the same thing, but with amxshortcut.inc its easier and faster!__
Usage for "GetSteamAuthId(id)":__
```
client_print_color(id, id, "Hello, your auth id is %s!", GetSteamAuthId(id));
```
|- Readme.md compatible with include version 0.1 -|
