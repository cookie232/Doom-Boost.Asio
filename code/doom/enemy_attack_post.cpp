// Enemy Attack Behavior - Post-Refactoring
// This refactored version adopts an object-oriented design for improved encapsulation.
class Enemy {
    protected:
        GameObject* target;
        int angle;
    public:
        void setTarget(GameObject* t) { target = t; }
        virtual void attack() {
            if (!target) return;
            angle = R_PointToAngle2(x, y, target->x, target->y);
        }
    };
    