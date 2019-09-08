{
    "targets": [{
        "target_name": "testlib",
        "sources": [ "testlib.cpp", "testworker.cpp"],
        "include_dirs": [ "<!(node -e \"require('nan')\")", "Infinit/Infinit/src/" ],
        "libraries":  [
            "Infinit/bin/Debug-windows-x86_64/Infinit/Infinit"
        ],
        "cflags!": [ "-fno-exceptions" ],
        "cflags": [ "-std=c++17" ],
        "cflags_cc!": [ "-fno-exceptions" ]
    }]
}