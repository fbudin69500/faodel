Release Information
===================

This file provides information about different releases of the
faodel tools. Releases are named alphabetically and have a
4-digit ID associated with them that designates the year and month of
the release.

Cachet (1.1803.1)
-----------------
- Summary: Flattened repos, simplify builds, and do external release
- Release Improvements:
  - Quicker build system
  - Better stability with OpBox core
- Significant User Visible Changes:
  - Renamed gutties to common. Gutties namespace is now faodel.
  - Switched default OpBox core to threaded
- Known Issues
  - Similar to 0.1801.1
  - Kelpie is still a preview and may have stability issues
  - NNTI MPI transport may have stability issues

Belfry (0.1801.1)
-----------------
- Summary: Rename to FAODEL, expanded Opbox and Kelpie features
- Release Improvements:
  - Renamed repo and internals from data-warehouse to FAODEL
  - Simplified release process
  - Updated LDO API
  - Added Opbox threaded core
  - Unified network config tags at the Opbox level
  - New Kelpie core ("standard") has networking capabilities
  - Kelpie has a preliminary IOM interface for posix io
- Significant User Visible Changes:
  - The name external config file environment variable changed from 
    CONFIG to FAODEL_CONFIG
  - The Opbox network configurations tags are now the same for either 
    NNTI or libfabric
- Known Issues
  - Mutrino builds are still challenging
  - OpBox/Dirman does not allow new connections after one app shuts down
  - IOM API expected to need changes for other backends
  - Kelpie row operations not implemented
  - Libfabric wrapper does not implement Atomics and lacks maturity 
  - Sparse documentation
  
Amigo (0.1707.2)
----------------
- Summary: Bug fix release, for friendly users
- Release Improvements:
  - Improved stability of NNTI at large scale
  - Fixed include dir bug in DataWarehouseConfig.cmake
  - Fixed "always on" debug message in Kelpie
- Known Issues
  - Same as 1707.1

Amigo (0.1707.1)
----------------
- Summary: First packaged release, for friendly users
- Release Improvements:
  - Stable versions of SBL, Gutties, WebHook, NNTI, Lunasa, and Opbox
  - Experimental version of Kelpie (nonet)
  - Switched to Graith CMake modules
  - Initial doxygen and readme documentation
- Known Issues
  - Mutrino builds are still challenging
  - Kelpie only supports nonet core (for local testing)
  - OpBox/Dirman does not allow new connections after one app shuts down
  - Sparse documentation (especially examples)