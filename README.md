# pio-arduino-lib-development-example

Demonstrates a basic PlatformIO setup in which a library can be developed.

The library is put in the `lib/` folder, whose files are modified during development.

Test code is being put into `src/`.

Finished example code can be put into the `examples/` folder of the library.

An example can be test-compiled without copying it to the `src/` folder by using `pio ci` commands, e.g.

```
pio ci --board=uno lib/MyTestLibrary/examples/example-01 --lib lib/MyTestLibrary
```

For compiling `example-01`. 

You however cannot upload an example that way, only test-compile it for boards (which can be multiple). 
For that, you have to copy the example's content into `src/` (and delete all previous content in `src/`), 
then build & upload it as a normal PlatformIO project.