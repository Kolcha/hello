Qt "Hello world" project
========================

This repository contains completely useless sources written in C++ using Qt widgets. The only one purpose of them is just to test different publicity available build servers / tools and find the way to use them for Qt projects.

Right now there are files demonstrating integration with:

- *[AppVeyor](https://ci.appveyor.com/project/Kolcha/hello)*, file [.appveyor.yml][appveyor-conf]
- *[Travis CI](https://travis-ci.org/github/Kolcha/hello)*, file [.travis.yml][travis-conf]

Both configurations demonstrate how to create build tasks for multiple systems/configurations. For example, *[AppVeyor][appveyor-conf]* is configured to build this project with few Qt versions using different compilers, and *[Travis][travis-conf]* - even to make builds on different OSes: few Ubuntu versions and few macOS versions.

Also this sources is used in example project on *[openSUSE Build Service][obs-project]*, just to understand how to package Qt-based software for various Linux distributions. Linux package project sources are available [here][obs-project].

[Commit history](https://github.com/Kolcha/hello/commits/master) is also can be useful. For example, there you can find commits containing code for [Travis CI GitHub Releases integration](https://github.com/Kolcha/hello/commit/bf4d608d3c9e6fd46b9e44b3ec4f51e3130f79f5) or [other build systems](https://github.com/Kolcha/hello/commit/fdb9633a2085a00cbeed9615178b016adf25bde7) (rather than cmake) usage.

Feel free to use configuration files from this project as base for your Qt-based app. Any suggestions/requests for integration with other build servers interesting for you (if these servers support building C++ projects) are welcome!

[appveyor-conf]: https://github.com/Kolcha/hello/blob/master/.appveyor.yml
[travis-conf]: https://github.com/Kolcha/hello/blob/master/.travis.yml
[obs-project]: https://build.opensuse.org/package/show/home:nikoneko:test/hello
