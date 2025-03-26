// Enemy Attack Behavior - Pre-Refactoring
// This implementation is taken from the original Doom engine code.
void A_FaceTarget(mobj_t* actor) {
    if (!actor->target) return;
    
    actor->angle = R_PointToAngle2(actor->x, actor->y,
                                   actor->target->x, actor->target->y);
}
