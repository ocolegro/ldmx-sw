#ifndef EVENT_ReadoutCALORIMETERHIT_H_
#define EVENT_ReadoutCALORIMETERHIT_H_

// ROOT
#include "TObject.h"
#include "TRef.h"

// LDMX
#include "Event/SimParticle.h"

namespace event {

class ReadoutCalorimeterHit: public TObject {

    public:

        ReadoutCalorimeterHit();

        virtual ~ReadoutCalorimeterHit();

        void Clear(Option_t *option = "");

        void Print(Option_t *option = "") const;

        int getID() {
            return id_;
        }

        float getEdep() {
            return edep_;
        }

        std::vector<float> getPosition() const {
            return {x_, y_, z_};
        }

        float getTime() {
            return time_;
        }

        ReadoutParticle* getReadoutParticle() {
            return (ReadoutParticle*) ReadoutParticle_.GetObject();
        }

        void setID(const int id) {
            this->id_ = id;
        }

        void setEdep(const float edep) {
            this->edep_ = edep;
        }

        void setPosition(const float x, const float y, const float z) {
            this->x_ = x;
            this->y_ = y;
            this->z_ = z;
        }

        void setTime(const float time) {
            this->time_ = time;
        }

        void setReadoutParticle(ReadoutParticle* ReadoutParticle) {
            this->ReadoutParticle_ = ReadoutParticle;
        }

    private:

        int id_{0};
        float edep_{0};
        float x_{0};
        float y_{0};
        float z_{0};
        float time_{0};

        TRef SimParticle_{nullptr};

    ClassDef(ReadoutCalorimeterHit, 1)
};

}

#endif
