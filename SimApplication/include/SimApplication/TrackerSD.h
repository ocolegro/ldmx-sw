#ifndef SIMAPPLICATION_TRACKERSD_H_
#define SIMAPPLICATION_TRACKERSD_H_

// Geant4
#include "G4VSensitiveDetector.hh"

// LDMX
#include "SimApplication/G4TrackerHit.h"
#include "DetDescr/DetectorID.h"
#include "Event/Event.h"

using event::Event;
using detdescr::DetectorID;

namespace sim {

class TrackerSD: public G4VSensitiveDetector {

    public:

        TrackerSD(G4String name,
                G4String theCollectionName,
                int subdetID,
                DetectorID* detID);

        virtual ~TrackerSD();

        void setDetectorID(DetectorID* detID) {
            this->detID_= detID;
        }

        G4bool ProcessHits(G4Step* aStep, G4TouchableHistory* ROhist);

        void Initialize(G4HCofThisEvent* hcEvent);

        void EndOfEvent(G4HCofThisEvent* hcEvent);

    private:

        G4TrackerHitsCollection* hitsCollection_;
        int subdetID_;
        DetectorID* detID_;
};

}

#endif
