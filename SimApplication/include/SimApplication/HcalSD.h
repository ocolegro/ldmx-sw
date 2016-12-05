#ifndef SIMAPPLICATION_HCALSD_H_
#define SIMAPPLICATION_HCALSD_H_

// Geant4
#include "G4VSensitiveDetector.hh"

// LDMX
#include "Event/Event.h"
#include "SimApplication/G4CalorimeterHit.h"
#include "DetDescr/DetectorID.h"

using detdescr::DetectorID;
using event::Event;

namespace sim {

class HcalSD : public CalorimeterSD {

    public:

		HcalSD(G4String name,
				G4String theCollectionName,
				int subdet,
				DetectorID* detID);

		virtual ~HcalSD();

		G4bool ProcessHits(G4Step* aStep, G4TouchableHistory* ROhist);

};

}

#endif
