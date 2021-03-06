#ifndef WIRE_H
#define WIRE_H

extern GList* wireList;

typedef struct wire_s {
    int id;
    node_t* parent; // where it comes from
    node_t* target; //
    int outIndex; // which output is it connected to on the parent
    int inIndex; // which input does it connect to on the target
    vec2_t sp, ep, cp1, cp2; // start, end and two control points
    double colourR, colourG, colourB;
    gboolean state;
} wire_t;

void drawWires(cairo_t* cr, double zoom);
wire_t* addWire();
void updateWire(wire_t* w);
void deleteWire(wire_t* w);
void propagateWires();

#endif
