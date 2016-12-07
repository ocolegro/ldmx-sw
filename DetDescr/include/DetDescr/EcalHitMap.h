#ifndef DETDESCR_ECALHITMAP_H_
#define DETDESCR_ECALHITMAP_H_

// ROOT
#include "TH2Poly.h"

//LDMX
#include "Event/EventConstants.h"

using event::EventConstants;

namespace detdescr {

class EcalHitMap {

    public:

		EcalHitMap(const double width = EventConstants::ECAL_MAP_XY, const double side = EventConstants::CELL_SIZE);

		void buildMap(Double_t xstart,
				Double_t ystart, //Map starting points
				Double_t a,  // side length
				Int_t k,     // # hexagons in a column
				Int_t s);

		inline TH2Poly * getMap(){
			return map;
		};



    private:

        TH2Poly *ecalMap;
};

}

#endif
