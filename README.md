# HaxeSocketIssue
Code for issue showing socket not working with neko on latest haxe version

With version 2.1.0 of Neko and Haxe 3.2, socket.select fails on the neko platform. This was brought up in a comment by @kevinresol some months ago with the same problem on this commit, which introduced the bug. I have made a simple example of the bug at this repo.

Running the platform on Neko gives:

Called from ? line 1
Called from Main.hx line 28
Called from Main.hx line 7
Called from Main.hx line 17
Called from C:\HaxeToolkit\haxe\std/neko/_std/sys/net/Socket.hx line 241
Called from C:\HaxeToolkit\haxe\std/neko/_std/sys/net/Socket.hx line 235
Uncaught exception - Invalid call
Error: Command failed with error 1

Running on the C++ platform works as expected. This bug was originally raised at 5Mixer/mphx#34, but this appears to be a Haxe related bug.
