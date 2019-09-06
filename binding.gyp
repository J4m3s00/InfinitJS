{
    "targets": [{
        "target_name": "testlib",
        "sources": [ "testlib.cpp", "testworker.cpp"],
        "include_dirs": [ "<!(node -e \"require('nan')\")" ]
    }]
}