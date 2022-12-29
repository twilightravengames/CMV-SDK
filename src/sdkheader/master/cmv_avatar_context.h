/*************************************************
* Twilight Raven Games LLC
* Contiguous Meta-Verse Project SDK
* cmv_base.cpp
* Licensing Information:
* This software is provided without support, free at cost, developed in conjunction with
* other developers, and Twilight Raven Games LLC does not hold itself responsible for any 
* damages or potential hardware, software, commercial, or corporate liabilities. 
* The research that is distributed in the form of Word Documents (.docx) files is properietary
* knowlwedge of Twilight Raven Games LLC and will be used according to its chief officers 
* discretion. This software is available for free distribution, improvement, and alteration
* according to the terms of the GPL v3.0 license found at
* https://www.gnu.org/licenses/gpl-3.0.en.html
* We ask that users of this file repository not alter the trunk or dev branches of this software
* without explicit permission from an officer of Twilight Raven Games LLC.
* Twilight Raven Games LLC can be reached at twilightravengames@gmail.com or through contacts
* on our website at http://www.twilightravengames.com/
*
* If you improve upon our research or software we ask that you cite our Limited Liability Corporation
* in the documentaiton and marketing of your application. We ask that all supplements or changes 
* to our research and software comform to these lciensing agreements. 
* We also ask that if you plan to produce changes to the repository that have no been orchestrated 
* or pre-arranged by our chief officecrs that you fork this repository and make your own ongoing changes
* while still citing your source.
* Please refer to our github README including its changelog.
* Originally written: 10/22/2022 11:20 EDT United Staes of America
*/


//////////////////////////////
//Includes
//////////////////////////////

#include "cmv_base.h"


//////////////////////////////
//Class Declarations
//////////////////////////////

//////////////////////////////
// cmvAvatarContext
// Purpose: Provides a class for managing the transition of Avatars 
//			between StruMML pages. The idea being the fact that as one transitions
//          from game to game, world ot world, or office to office, one would change
//          Avatars according to that sites' StruMML definition

class cmvAvatarContext
{
public:
	//Default constructor
	cmvAvatarContext();
	
	//Default deconstructor
	~cmvAvatarContext();
	
};
