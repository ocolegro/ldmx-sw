#ifndef SIMAPPLICATION_TRACKMAP_H_
#define SIMAPPLICATION_TRACKMAP_H_ 1

// Geant4
#include "G4VTrajectory.hh"

class TrackMap {

    public:

        // Map of track ID to parent ID.
        typedef std::map<G4int, G4int> TrackIDMap;

        static TrackMap* getInstance();

        void addSecondary(G4int trackID, G4int parentID);

        G4VTrajectory* findTrajectory(G4int);

        void clear();

    private:

        TrackIDMap trackIDMap;
};

#endif