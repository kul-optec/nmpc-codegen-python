# nmpc-codegen-python
Python version of nmpc-codegen

# What is this?
Nmpc-codegen generates MPC controllers. The user provides the dynamics of the system, a number of conditions and some MPC parameters in python. Nmpc-codegen will then generate the NMPC controller in c89 code that can be used on embedded devices. Check out the [website](https://kul-forbes.github.io/nmpc-codegen) for more information.

If you want to use this library for research feel free to contact willem dot melis at outlook dot com . If you have problems of any kind with nmpc-codegen feel free to make an issue.

# Warning: nmpc-codegen does not work with Casadi 3.5 update comming soon !

# Install
[Installation instructions](https://kul-forbes.github.io/nmpc-codegen/install/Python_install.html)

# Requirements
- Python3
- Casadi 3.2 or more recent
- gcc toolchain
