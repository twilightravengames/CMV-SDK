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
libMDLBridgeToSPIR ( a library to bridge MDL shaders to SPIR-V compatible shaders like GLSL and HLSL, Metal, Vulkan, etc. 

DEFINITION
==========
USD scene graphs are provided via <USD SRC> tags linking to a USD File format tag within a StruMML document
RDS modifier documents are provided as .JSON files with the master RDS session file linked using <RDS SRC> tag
Standard Javasccript and DOM manipulation tags apply from HTML to the StruMML XML format
The CMV SDK provides for manipulation of USD and RDS information through standard DOM like interface for Javascript purposes
Sector boundaries (hyperlinks) are provided by <SECTOR SRC> tags leading to another StruMML document URI
Sector dimensions are speified as part of parameters to the document definition tag <DOC DEFINTION>
DIV tags are supported for traditional DOM manipulation mechanisms (insertion of new code/file references, etc.)
<ADJUST> Tags with parameters can be nested wtihin <SECTOR SRC> tags to make CMV tag transitions more continuous(adjustments to avatar position on transition from one terrain to another for example, lining up terrain boundaries, etc.)
LOD (Level of Detail) information is provided by the client for the server for the browsing application to preview linked sectors via exchange of RDS
Avatar interaction between StruMML/RDS geometry and other avatars is provided via client and server side RDS negotiations
StruMML provides the definition according to a USD scene graph, RDS JSON files supply supplemental information based off of modifications to local and remote USD scene graphs
Web3 (crypto/nfts) are handled through DeFi library for CMV incorporation, data stored within USD StruMML definitions and modifications made by server and client RDS/StruMML/USD



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


CMV MODULES
===========
StruMML Sector Bridge - Handles the bridging between different sectors (different StruMML docs and server RDS files)
		- managges visual and logicla problems that deal specifially with continuity