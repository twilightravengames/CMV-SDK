# CMV-SDK
An open source software developer kit with the necessary libraries and API to implement, post to, and request from, a Contiguous Meta-Verse remote service


PROPOSAL CHANGES 11/2/2022
================
Primary scene graph support will be provided by USD
Additional information as necessary (such as rigging, physics.) will be provided within the StruMML file throguh our Universal Skeleton Interchange Format (USIF) libraries
RDS will acct as a series of deltas over USD objects and objects that cannot be stored as USD data
Delivery will still be consistent as built upon WWW and http framework with javascript support
StruMML will still serve as a definition file with RDS client/server modifications for multi-user sessions
RDS will take the form of JSON files that are directly related to updates to USD data
Web applications to RDS/StruMML/USD related data will be incorporatd through the provided library once linked against CMV-SDK and 
	be part of the StruMML/RDS standard
MDL-SDK (open-source by nVIdia) will be the default shader language for CMV-SDK
libMDLBridgeToSPIR ( a library to bridge MDL shaders to SPIR-V compatible shaders like GLSL and HLSL, Metal, Vulkan, etc. )

DEPENDENCIES
============
Consumes Qt 6 (For speedy convience functiosn)
Consumes libCMVDeFi (For Web 3/NFT/Blockchain/Crypto)
Consumes libUSD_CMV_Consumer (For USD support)
Consumes tinyxml2 (For DOM/document parsing)
Consumes jsonxx (For JSON document parsing and Object access)
Consumes libUSIF (For universal rigging support)
Consumes MDL-SDK (For default material shaders - materidal definition language by nVidia)
Consumes libMDLBridgeToSPIR (To convert CMV-SDK MDL materials to SPIR-V compatible shaders, for passing 
		to Qt 3D for web browsers, GL or DirectX for OpenXR, etc.)