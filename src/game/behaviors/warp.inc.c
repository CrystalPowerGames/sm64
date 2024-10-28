// warp.inc.c

void bhv_warp_loop(void) {
    if (o->oTimer == 0) {
        u16 bhvParams1stByte = *((u8 *) &o->oBhvParams);

        if (bhvParams1stByte == 0x00) {
            o->hitboxRadius = 50.0f;
        } else if (bhvParams1stByte == 0xFF) {
            o->hitboxRadius = 10000.0f;
        } else {
            o->hitboxRadius = bhvParams1stByte * 10.0;
        }
        o->hitboxHeight = 50.0f;
    }

    o->oInteractStatus = 0;
}

// identical to the above function except for o->hitboxRadius
void bhv_fading_warp_loop() {
    if (o->oTimer == 0) {
        u16 bhvParams1stByte = *((u8 *) &o->oBhvParams);

        if (bhvParams1stByte == 0x00) {
            o->hitboxRadius = 85.0f;
        } else if (bhvParams1stByte == 0xFF) {
            o->hitboxRadius = 10000.0f;
        } else {
            o->hitboxRadius = bhvParams1stByte * 10.0;
        }
        o->hitboxHeight = 50.0f;
    }

    o->oInteractStatus = 0;
}
