Qt "Hello world" project
========================

This repository contains completely useless sources written in C++ using Qt widgets. The only one purpose of them is just to test different publicity available build servers / tools and find the way to use them for Qt projects.

Right now there are files demonstrating integration with:

- *[AppVeyor](https://ci.appveyor.com/project/Kolcha/hello)*, file [.appveyor.yml][appveyor-conf]
- *[Travis CI](https://travis-ci.org/github/Kolcha/hello)*, file [.travis.yml][travis-conf]

Both configurations demonstrate how to create build tasks for multiple systems/configurations. For example, *[AppVeyor][appveyor-conf]* is configured to build this project with few Qt versions using different compilers, and *[Travis][travis-conf]* - even to make builds on different OSes: few Ubuntu versions and few macOS versions.

Feel free to use configuration files from this project as base for your Qt-based app. Any suggestions/requests for integration with other build servers interesting for you (if these servers support building C++ projects) are welcome!

[appveyor-conf]: https://github.com/Kolcha/hello/blob/master/.appveyor.yml
[travis-conf]: https://github.com/Kolcha/hello/blob/master/.travis.yml
